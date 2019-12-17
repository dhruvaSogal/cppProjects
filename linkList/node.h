#ifndef NODE_H
#define NODE_H
#include<iostream>
#include"student.h"
using namespace std;
class node{
 public: 
  node(student*);
  ~node();
  void setValue(student*);
  student* getStudent();
  void setNext(node*);
  node* getNext();
  
 private:
  student* student;
  node* next;
  





};


#endif
