#include<iostream>
#include"node.h"

using namespace std;
node::node(student* newstudent){
  Student = newstudent;
  next = NULL;

  }




node :: ~node(){
  next = NULL;
  delete Student;



}
student* node::getStudent(){
  return Student;

}
void node::setNext(node* newNext){
  next = newNext;
}
  node* node :: getNext(){
    return next;
  }


