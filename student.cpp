#include<iostream>
#include "student.h"
using namespace std;
Student :: Student(char* newName, int newid, float newGPA){
  newName = name;
  newid = id;
  newGPA = GPA;




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

