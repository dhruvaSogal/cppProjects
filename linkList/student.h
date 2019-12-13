#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class student{
 public:
  student();
  ~student();
  int getId();
  void setId(int);
  char* getName();
  char* getlastname();
  void setName(char*);
  void setLastname(char*);
  float getGPA();
  void setGPA(float);
 private:
  int id;
  float GPA;
  char* firstName;
  char* lastName;
  





};
#endif
