#include <iostream>
#include "node.h"
using namespace std;
int main(){
  node* head = NULL;
  node* tail = NULL;
  node* stackhead = NULL;
  node* stacktail = NULL;

  cout<<"Enter your math equation"<<endl;
  
  
} 

void enqueu(node* &head, node* current, char* x, node* tail){ //add things after head FIFO
  if(current->getNext() != NULL){
    enqueu(head, current->getNext(), x, tail);

  }
  else{
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
void readInput(char* read){
  /*
 keep track of two tokens, until you find space then take in those and make a char array
 then token one goes to point after space
   */
  char* read = new char[90];
  cin.getline(read, 90);


  for(int i = 0; i< (sizeof(read)/sizeof(read[0])); i++){
    if((*read)[i] >= 30 && (*read)[i] <= 39 && (*read)[i+1] == ' '){  //single digit number
      char* temp = (*read)[i];
      enqueu(head, head, temp, tail);

    }
    


  }
  
  
    /*
      if char[i] != ' ' char* array = char[i]+char[i+1]...
      once you hit a space then new char*
     */


    
  
  
}


