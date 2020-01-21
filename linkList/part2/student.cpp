//DHRUVA SOGAL LINKED LIST PROGRAM 12/20-1/20
//This is the cpp file for the student class
#include<iostream>
#include "student.h"
using namespace std;
Student :: Student(char* newName, char* lastName, int newid, double newGPA){
  name = new char[90];
 lastname = new char[90];
 name = newName;
 lastname = lastName;
 id = newid;
 GPA = newGPA;
 




}
char* Student:: getName(){ //returns members
  return name;

}
char* Student:: getlastname(){
  return lastname;

}
double Student:: getGPA(){
  return GPA;

}
int Student::getId(){
  return id;
}
Student::~Student(){ //destructor
  if(!(name==NULL)){
  delete [] name;
  }
    if(!(lastname==NULL)){
      //cout<<(*lastname)<<endl;
  delete[] lastname;
    }

}

