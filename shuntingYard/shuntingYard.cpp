/*
after 2/20 AT: ensure that the stack works--> push an operator --> print stack (just push and print from read function)
 2) Do shunting yard algorithm --> copy wikipedia algorithm --> translate into postfix
 3) Do binary expression tree --> print it?
 4) Read the binary expression tree

  */

#include <iostream>
#include "node.h"
#include "string.h"
using namespace std;
void enqueu(node* &head, node* current, char* x, node* &tail);
node* dequeu(node* &head, node* current);
void push(node* &stackhead, node* current, node* &stacktail, char* x);
node* pop(node* stackhead, node* current, node* &stacktail);
void readInput(node* &head, node* &tail);
void printqueu(node* head, node* tail, node* current);

int main(){
  node* head = NULL;
  node* tail = NULL;
  node* stackhead = NULL;
  node* stacktail = NULL;

  cout<<"Enter your math equation"<<endl;
  readInput(head, tail);
  printqueu(head, tail, head);


  
} 

void enqueu(node* &head, node* current, char* x, node* &tail){ //add things after head FIFO
  if(current == NULL){
    node* temp = new node(x);
    head = temp;
    tail = temp;
 
  }
  
  else if(current->getNext() != NULL){

    enqueu(head, current->getNext(), x, tail);

  }
  else{ //end of list
    node* temp = new node(x);
    tail = temp;
    current->setNext(tail);

  }
  
}




node* dequeu(node* &head, node* current){
  node* k = head;
  head = head->getNext();
  return k;
}


void push(node* &stackhead, node* current, node* &stacktail, char* x){ //FILO, add things before head
  if(stackhead == NULL){
    node* temp = new node(x);
    stackhead = temp;
    
  }
  else{
    node* k = stackhead;
    node* temp = new node(x);
    stackhead = temp;
    stackhead->setNext(k);

  }


  
}



node* pop(node* stackhead, node* current, node* &stacktail){
  //stack so last out so
  node* temp = stackhead;
  stackhead = stackhead->getNext();
  return temp;

}




char peek(){
  
  


}



void readInput(node* &head, node* &tail, node* &stackhead, node* &stacktail){
  /*
 keep track of two tokens, until you find space then take in those and make a char array
 then token one goes to point after space
   */
  char* read = new char[90];
  cin.getline(read, 90);
  int size = strlen(read);
  


  for(int i = 0; i < size; i++){
    if((int)read[i] >= 48 && (int)read[i] <= 57){
      char* temp = new char[3];
     
        if(read[i+1] == ' '){
	  temp[0] = read[i];
	  temp[1] = '\0';

      }
	else{
	 temp[0] = read[i];
	 temp[1] = read[i+1];
	 temp[2] = '\0';
	 i++; //as to skip to the next thing

	}

	if()
      
      
      enqueu(head, head, temp, tail);
      
      

    }
    
    


  }
   
}
void printqueu(node* head, node* tail, node* current){
  if(current != NULL){
    cout<<current->getToken()<<"token"<<endl;
    if(current != tail){
      printqueu(head, tail, current->getNext());
      
    }
    

    } 

}

void stackprint(node* stackhead, node* stacktail, node* current){
  if(current ! = NULL){
    cout<<current->getToken()<<"token"<<endl;
    if(current != stacktail){
      stackprint(stackhead, stacktail, current->getNext());

    }


  }
  


}
