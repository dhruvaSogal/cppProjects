#include <iostream>
#include "node.h"
using namespace std;
int main(){
  node* head = NULL;
  node* tail = NULL;
  node* stackhead = NULL;
  node* stacktail = NULL;
  char[90] read;
  cout<<"Enter your math equation"<<endl;
  cin.getline(read, 90);

  for(int i = 0; i< strlen(read) ; i++){
    

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
  if(current->getNext != tail){
    dequeu(head, current->getNext(),x , tail)
      
  }
  else{
    node* k = tail;
    tail = current;
    return k;


  }




}
void push(){ FILO
  //add new head
    node* temp = new node(x);


}


























