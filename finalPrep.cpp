#include "list.h"
#include <iostream>
using namespace std;
void finalPractice(node* &head, node* current){
  if(current == head){
  head = head->next;
  node* k = current->next;
  delete current;
    if(current->next != NULL){
       finalPractice(head, k->next);
       }
  
  }
  else if(current->next->next == NULL){
    node* k = current->next;
    current->next = NULL;
    delete k;
  }
  else{ 
  if(current->next != NULL){
  finalPractice(head, current->next);
  }

  }
 
  


}
void reverseList(node* &head, node* current, node* prev){
  if(current == head){
    reverseList(head, head->next, head);

  }
  else if(current->next == NULL){
    current->next = prev;
    head = current;
  }
  else{
    node* temp = current->next;
    current->next = prev;
    reverseList(head, temp, current);

  }



}

