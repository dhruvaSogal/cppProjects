//node class with left and right pointers
#include<iostream>
using namespace std;
class node{
 public:
  node(char* k);
  ~node();
  node* getLeft();
  node* getRight();
  node* getnext();
  void setLeft(node* k);
  void setNext(node* k);
  node* getNext();
  void setRight(node*k);
  char getValue();
  char* getToken();
  void setToken(char* k);
 private:
  node* left;
  node* right;
  node* next;
  char* token;
  








};
