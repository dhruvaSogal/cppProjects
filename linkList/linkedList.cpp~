#include<iostream>
#include"node.h"
#include"student.h"
using namespace std;
void add(node* head, student* newStudent);
void print(node* next);
int main(){
  node* head;
  student* joe = new student();
  joe->setName("Joe");
  add(joe);




  
}
void add(node* head, student* newstudent){
  node* current = head;
  if(current == NULL){
    head = new node();
    head->setValue(newstudent);
  }
  else{
    while(current->getNext() ! = NULL){
      current = current->getNext();
    }
    current->setNext(new node());
    current->getNext()->setValue(newvalue);

  }


}
void print(node* next){
  if(next == head){
    cout<<"list:"<<endl;

  }
  if(next != NULL){
    cout<<next->getValue()->getName()<<endl;
    print(next->getNext());
  }
  


}
