//DHRUVA SOGAL STARTED 12/19/2019
/*
This is a student list program. You can enter a student's names, gpa, and id. 
The students are stored in order of student id in a singly linked list. Users can add a student, print the students, get an average gpa, and delete students.


 */
#include<iostream>
#include<iomanip>
#include"node.h" //includes student
#include<string.h>
using namespace std;
void add(Student* newstudent, Node* &head, Node* current);
void deleteStudent(Node*& head, Node* current, int key);
void printStudents(Node* head, Node* current);
void averageGPA(Node* head, Node* current, double total, double count);
int main(){
  bool running  = true;
  int key = 0;
  int total =0;
  int count = 0;
  Node* head = NULL;
  Node* p = NULL;
  while(running == true){
  cout<<"ADD for add, PRINT for print, DELETE for delete, AVERAGE for average GPA, or QUIT to quit"<<endl;
  char* command = new char[90];
  cin.getline(command,90);
  

  if(strcmp(command, "ADD") == 0){ //if add command. The user input isn't in the add method as add executes multiple times recursvly
    //char* readName = new char[90];
    //char* readLastName = new char[90];
    char* studentname = new char[90];
    char* lastName = new char[90];
    int studentid;
    double studentGPA;
    cout<<"Enter Student First Name"<<endl;
    cin.getline(studentname, 90);
    cout<<"Enter Last Name"<<endl;
    cin.getline(lastName, 90);
    cout<<"Enter ID"<<endl;
    cin>>studentid;
    cout<<"Enter GPA"<<endl;
    cin>>studentGPA;
    cin.ignore();
    //strcpy(studentname, readName);
    //strcpy(lastName, readLastName);
    Student* newStudent = new Student(studentname, lastName, studentid, studentGPA);
    //cout<<newStudent->getlastname()<<endl;
    add(newStudent, head, head);
    // deleteStudent(head, head, 4);

  }

  else if(strcmp(command, "DELETE")==0){ //delete
   int key;
   cout<<"Enter ID of the student you wish to delete"<<endl;
   cin>>key;
   cin.ignore();
   deleteStudent(head, head, key);


  }
  else if(strcmp(command, "PRINT") == 0){ //print
    printStudents(head, head);

  }
  else if(strcmp(command, "AVERAGE") == 0){ //avg
    averageGPA(head, head, total, count);
  }
  else if(strcmp(command, "QUIT") == 0){ //quit
    running = false;
  }


  }
}






void add (Student* newstudent, Node* &head, Node* current){
  if(current == NULL){ //if empty student list
    head = new Node(newstudent);
    head->setNext(NULL);
    cout<<"First Student Added"<<endl;
  } //end if current == NULL

  else{ //not first in list
    if(head->getNext() == NULL){ //if second thing in list
      if(current->getStudent()->getId() < newstudent->getId()){
	current->setNext(new Node(newstudent));
      }//close if current id < newstudnet11 id

    else if(current->getStudent()->getId() > newstudent->getId()){
      head = new Node(newstudent);
      head->setNext(current);

    }//close else if current id > newstudent id


  }//close if head->getNext() == NULL

  
  else{ //head next !== NULL
     if(current->getStudent()->getId() > newstudent->getId()){
       Node* k = head;
       head = new Node(newstudent);
	head->setNext(k);
	cout<<"student added"<<endl;

     } //end if current > new id


     else if(current->getNext() == NULL){ //If it is the end of the list
       current->setNext(new Node(newstudent)); 
       cout<<"added on end of list"<<endl;
     }//end if next == NULL



     //this is if the new student belongs between two other students in the linked list
     else if(newstudent->getId() > current->getStudent()->getId() && newstudent->getId() < current->getNext()->getStudent()->getId()){
       Node* temp = new Node(newstudent);
       temp->setNext(current->getNext());
       current->setNext(temp);
       cout<<"added in between"<<endl;
       }//end if in between



     //if none of the above conditions are true then go through add again.
     else{
       add(newstudent, head, current->getNext());
       cout<<"add recursively called"<<endl;

     }


  }//end else head next !== NULL










  }//end if current not equal to NULL



}
void deleteStudent(Node*& head, Node* current, int key){ //call with head as both head and current and p as current next
  if(current->getNext() == NULL && current->getStudent()->getId() != key){
    cout<<"No student with that ID"<<endl;
  }
  else{
  if(head == NULL){
    cout<<"Empty Student List"<<endl;
    
    return;
  }
  else if(head->getStudent()->getId()==key){ //if the head must be deleted
    //cout<<"hhh"<<endl;
    Node* k = head;
    head = head->getNext();
    //if(k->getStudent())delete k->getStudent();
    cout<<"Enter y to delete this student"<<endl;
     cout<<k->getStudent()->getName(); //printing fields
      cout<<" ";
      cout<<k->getStudent()->getlastname();
      cout<<",";
      cout<<k->getStudent()->getId();
      cout<<",";
      cout<<fixed<<setprecision(2)<<k->getStudent()->getGPA()<<endl;
      char y;
      cin>>y;
      cin.ignore();
      if(y =='y'){

    delete k;
      }
    return;

    
  }
  else if(current->getNext()->getStudent()->getId() == key && current->getNext()->getNext() == NULL){ //if the last node must be deleted
      cout<<"Enter y to delete this student"<<endl;
      cout<<current->getNext()->getStudent()->getName(); //printing fields
      cout<<" ";
      cout<<current->getNext()->getStudent()->getlastname();
      cout<<",";
      cout<<current->getNext()->getStudent()->getId();
      cout<<",";
      cout<<fixed<<setprecision(2)<<current->getNext()->getStudent()->getGPA()<<endl;
      char y;
      cin>>y;
      cin.ignore();
      if(y =='y'){

    delete current->getNext();
    current->setNext(NULL);
      }
  
    return;
    

  }
  else if(current->getNext()->getStudent()->getId() == key){ //next thing must be deleted
    //current set next get next next delete next
    Node* k = current->getNext();
     cout<<"Enter y to delete this student"<<endl;
     cout<<k->getStudent()->getName(); //printing fields
      cout<<" ";
      cout<<k->getStudent()->getlastname();
      cout<<",";
      cout<<k->getStudent()->getId();
      cout<<",";
      cout<<fixed<<setprecision(2)<<k->getStudent()->getGPA()<<endl;
      char y;
      cin>>y;
      cin.ignore();
      if(y =='y'){
    delete k;
    return;
      }
  
    
  }
  
  else{
    if(!(current->getNext()==NULL)){ //go through again if not end of list
    deleteStudent(head, current->getNext(), key);
    }
    else{
	cout<<"No student with such ID exists"<<endl;
	//return;
      }

  //}


  }
  }
}
void printStudents(Node* head, Node* current){ //call with head as both parameters
  if(current == NULL){
    cout<<"No students in list"<<endl;
  }
  else{


    cout<<current->getStudent()->getName(); //printing fields
      cout<<" ";
      cout<<current->getStudent()->getlastname();
      cout<<",";
      cout<<current->getStudent()->getId();
      cout<<",";
      cout<<fixed<<setprecision(2)<<current->getStudent()->getGPA()<<endl;

      if(!(current->getNext()==NULL)){ //if not end go again
      printStudents(head, current->getNext());
    }
      

  }





}
void averageGPA(Node* head, Node* current, double total, double count){
  if(current == NULL){
    cout<<"No students in list"<<endl;

}
  else{ //add to total
    total += current->getStudent()->getGPA();
    count++;

    if(!(current->getNext()==NULL)){ //if not end of list go again.
    averageGPA(head, current->getNext(), total, count);

  }
  else{ // if end of list divide
       double averageGPA = total/count;
       cout<<"Average GPA is:"<<endl;
       cout<<fixed<<setprecision(2)<<averageGPA<<endl;

     }
  }
}
