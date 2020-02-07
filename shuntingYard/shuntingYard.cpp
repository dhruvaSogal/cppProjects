#include <iostream>
#include "node.h"
using namespace std;
int main(){
  node* head = NULL;
  node* tail = NULL;
  node* stackhead = NULL;
  node* stacktail = NULL;
  char* read = new char[90];
  cout<<"Enter your math equation"<<endl;
  cin.getline(read, 90);
  for(int i = 0; i< sizeof(read) / sizeof(char*)){
    //do nothing if space, stack for operator, q for numbers
    if((*read[i]) == ' '){
      //do nothing

    }
    else if((*read[i]) == '*' || '+' ||'-'||'/'||'^'){
      //push
    }
    else{
      //enqueu


    }

  }
  
} 

void enqueu(node* &head, node* current, char  x, node* &tail){ //add things after head FIFO
  if(current->getNext() != NULL){
    add(head, current->getNext(), read, tail);

  }
  else{
    node* temp = new node(x);
    tail = temp;

  }
  
}
node* dequeu(node* &head, node* current, char x, node* &tail){
  node* k = head;
  head = head->getNext();
  return k;
}
void push(node* &stackhead, node* current, char x, node* &stacktail){ //FILO, add things before head
  node* k = head;
  head = current;
  current->setNext(k);
}
node* pop(node* stackhead, node* current, node* &stacktail){
  node* k = head;
  head = current;
  current->setNext(k);

}


























