#include <iostream>
#include "node.h"
#include "string.h"
using namespace std;

void enqueu(node* &head, node* current, char* x, node* tail);
  node* dequeu(node* &head, node* current);
  void push(node* &stackhead, node* current, node* &stacktail, char* x);
  node* pop(node* stackhead, node* current, node* &stacktail);
void readInput(node* head, node* tail);
void printqueu(node* head, node* tail, node* current);






int main(){
  node* head = NULL;
  node* tail = NULL;
  node* stackhead = NULL;
  node* stacktail = NULL;

  cout<<"Enter your math equation"<<endl;
  readInput(head, tail);
  cout<<"has not crashed"<<endl;
  printqueu(head, tail, head);


  
} 

void enqueu(node* &head, node* current, char* x, node* tail){ //add things after head FIFO
  
  if(current == NULL){
    node* temp = new node(x);
    head = temp;
    enqueu(head, head, x, tail);

  }
  
  else if(current->getNext() != NULL){
    cout<<"d"<<endl;
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
  //pop then push
  


}



void readInput(node* head, node* tail){
  /*
 keep track of two tokens, until you find space then take in those and make a char array
 then token one goes to point after space
   */
  char* read = new char[90];
  cin.getline(read, 90);
  int size = strlen(read);
  


  for(int i = 0; i < size; i++){
    if((int)read[i] >= 30 && (int)read[i] <= 39 && read[i+1] == ' ' ){
      
      char* temp = new char;
      temp = &(read[i]);
      
      enqueu(head, head, temp, tail);
      cout<<"test"<<endl;
      

    }
    
    


  }
  
  
    /*
      if char[i] != ' ' char* array = char[i]+char[i+1]...
      once you hit a space then new char*
     */


    
  
  
}
void printqueu(node* head, node* tail, node* current){
  if(current != NULL){
    cout<<current->getToken()<<' ';
    if(current != tail){
      printqueu(head, tail, current->getNext());
      
    }
    

    } 

}


