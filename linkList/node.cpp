#include<iostream>
#include"node.h"
#include"student.h"
using namespace std;
node::node(student* newstudent){
  student = newstudent;
  next = NULL;

}
node :: ~node(){
  next = NULL;
  delete student;



}
student* node::getStudent(){
  return student;

}
void node::setNext(node* newNext){
  next = newNext;
}
  node* node :: getNext(){
    return next;
  }

