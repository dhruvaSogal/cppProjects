//node class with left and right pointers
#include<iostream>
using namespace std;
class node{
 public:
  node(char k);
  ~node();
  node* getLeft();
  node* getRight();
  node* getnext();
  void setLeft(node* k);
  void setNext(node* k);
  void setRight(node*k);
  char getValue();
 private:
  node* left;
  node* right;
  node* next;
  char token;









};
