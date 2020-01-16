//DHRUVA SOGAL STARTED 12/19/2019
#include<iostream>
#include"node.h"
using namespace std;
void add(Student* newstudent, Node* &head, Node* current);
void deleteStudent(Node* head, Node* current);
void printStudents(Node* head, Node* current);
int main(){
  Node* head = NULL;
  while(true){
  char command;
  cout<<"A for add, P for print, D for delete"<<endl;
  cin>>command;
  if(command=='a'){
  
  char* studentname = new char[90];
  int studentid;
  float studentGPA;
  cout<<"Enter Student Name"<<endl;
  cin.ignore();
  cin.getline(studentname, 90);
  cout<<"Enter ID"<<endl;
  cin>>studentid;
  cout<<"Enter GPA"<<endl;
  cin>>studentGPA;
  Student* newStudent = new Student(studentname, studentid, studentGPA);
  add(newStudent, head, head);
 
  }
  
  if(command == 'd'){

    deleteStudent(head, head);


  }
  if(command == 'p'){
    printStudents(head, head);

  }
  }

}


  



void add (Student* newstudent, Node* &head, Node* current){
  cout<<"adding"<<endl;
  if(current==NULL){
    cout<<"first thing added"<<endl;
    head = new Node(newstudent);
    cout<<"student added"<<endl;
  }
  
  else{
    if(head->getNext()==NULL){
    cout<<"alone in list"<<endl;
    //alone in list
    if(current->getStudent()->getId() < newstudent->getId()){
      cout<<"added on end"<<endl;
      current->setNext(new Node(newstudent));
      cout<<"student added"<<endl;
 }
    else if(current->getStudent()->getId() > newstudent->getId()){
      cout<<"added before current"<<endl;
      head = new Node(newstudent);
      head->setNext(current);
      cout<<"student added"<<endl;

    }
    else{ 
      if(current->getStudent()->getId() > newstudent->getId()){
	head = new Node(newstudent);
	head->setNext(current);
	cout<<"student added"<<endl;

      }
      if(current->getNext() == NULL){ //youve reached the end
	current->setNext(new Node(newstudent));
	cout<<"student added"<<endl;

      }
      if(newstudent->getId() > current->getStudent()->getId() && newstudent->getId() < current->getNext()->getStudent()->getId()){
	Node* temp = new Node(newstudent);
	temp->setNext(current->getNext());
	current->setNext(temp);
	cout<<"student added"<<endl;

      }
      else{
	cout<<"moving to next current"<<endl;
	add(newstudent, head, current->getNext());


      }





    }

  




}
  }
  cout<<"end of add"<<endl;
}
void deleteStudent(Node* head, Node* current){ //call with head as both parameters
  int key;
  cout<<"Enter ID of Student you want to delete"<<endl;
  cin>>key;
  if(current->getNext()==NULL){
    cout<<"There exists no student with that ID"<<endl;
    

  }
  else{
  if(current->getStudent()->getId()==key){
    cout<<current->getStudent()->getName()<<endl;
    cout<<current->getStudent()->getId()<<endl;
    cout<<current->getStudent()->getGPA();
    
    

  }
  
  else{

    deleteStudent(head, current->getNext());

  }



  }


}
void printStudents(Node* head, Node* current){ //call with head as both parameters
  if(!(current==NULL)){  
    cout<<current->getStudent()->getName()<<","<<
      current->getStudent()->getId()<<","<<current->getStudent()->getGPA()<<endl;
 if(!(current->getNext()==NULL)){
   printStudents(head, current->getNext());

 }
  }
  if(current==NULL){
    cout<<"You Have Not Added Any Students"<<endl;

  }

 



}
