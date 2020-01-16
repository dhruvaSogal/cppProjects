#include<iostream>
#include "student.h"
using namespace std;
Student :: Student(char* newName, int newid, float newGPA){
 name = newName;
 id = newid;
 GPA = newGPA;




}
char* Student:: getName(){
  return name;

}
float Student:: getGPA(){
  return GPA;

}
int Student::getId(){
  return id;
}
Student::~Student(){


}

