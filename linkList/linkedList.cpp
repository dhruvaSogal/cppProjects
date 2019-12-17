#include<iostream>
#include"node.h"
#include"student.h"
using namespace std;
void add(node* head, student* newStudent);
void print(node* next, node* head);
int main(){
  student* joe = new student();
  student* bob = new student();
  student* jack = new student();
  node* node1 = new node(joe);
  node* node2 = new node(bob);
  node* node3 = new node(jack);
  (node1->getStudent())->setId(4);
  (node2->getStudent())->setId(5);
  (node3->getStudent())->setId(6);
  node1->setNext(node2);
  cout<<"list"<<endl;
  cout<<(node1->getStudent())->getId()<<endl;
  cout<<((node1->getNext())->getStudent())->getId()<<endl;
  delete node2;
  node1->setNext(node3);
  cout<<"list after delete"<<endl;
  cout<<((node1->getNext())->getStudent())->getId()<<endl;
  
  
  


}
