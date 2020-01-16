//DHRUVA SOGAL STARTED 12/19/2019
#include<iostream>
#include"node.h"
using namespace std;
void add(Student* newstudent, Node* &head, Node* current);
void newStudent();
int main(){
  Node* head = NULL;
  
 char name[90];
  int id;
  float GPA;
  cout<<"Enter Student Name"<<endl;
  cin.getline(name, 90);
  cout<<"Enter ID"<<endl;
  cin>>id;
  cout<<"Enter GPA"<<endl;
  cin>>GPA;
  Student* newStudent = new Student(name, id, GPA);



}


  



void add (Student* newstudent, Node* &head, Node* current){
  int id = newstudent->getId();
  if(current==NULL){
    head = new Node(newstudent);
    

  }
  else{
    if(head->getNext()==NULL){
    //end of list
    if(current->getStudent()->getId() < newstudent->getId()){
      current->setNext(new Node(newstudent));
 }
    else if(current->getStudent()->getId() > newstudent->getId()){
      head = new Node(newstudent);
      head->setNext(current);

    }
    else{ //not alone in the list
      if(current->getStudent()->getId() > newstudent->getId()){
	head = new Node(newstudent);
	head->setNext(current); 

      }
      if(current->getNext() == NULL){ //youve reached the end
	current->setNext(new Node(newstudent));

      }
      if(newstudent->getId() > current->getStudent()->getId() && newstudent->getId() < current->getNext()->getStudent()->getId()){
	Node* temp = new Node(newstudent);
	temp->setNext(current->getNext());
	current->setNext(temp);

      }
      else{
	add(newstudent, head, current->getNext());


      }





    }

  




}
  }
}
