#include<iostream>
#include"node.h"
#include"student.h"
using namespace std;
node :: node(){
  value = new student;
  next = NULL;

}
node :: ~node((){

  }
void node::setValue(student* newvalue){
  next = newvalue;

}
student* node::getValue(){
  return value;

}
void node::setNext(node* newNext){
  next = newNext;
}
  node* node :: getNext(){
    return next;
  }

