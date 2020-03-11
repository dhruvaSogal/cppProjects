//Dhruva Sogal Binary Tree Project Started 3/5/2020
#include<iostream>
#include<fstream>
using namespace std;
struct node{
  node* left;
  node* right;
  int value;

};
void insert(int a , node* current, node* &root);
void read(node* root);
void print(node* current);
int main(){
  cout<<"This Program Creates a Binary Search Tree"<<endl;
  node* root = new node;
  //root->right = NULL;
  //root->left = NULL;
  root = NULL;        //0 used if node is empty as input must me 1 to 1000
  read(root);
  print(root);



}
void read(node* root){
  cout<<"Enter 1 for console entry or 2 for file input"<<endl;
  int entry = 0;
  //cin.ignore();
  cin>>entry;
  if(entry == 1){
    char* input = new char[100];
    cout<<"Enter up to 100 numbers seperated by spaces"<<endl;
    cin.ignore();
    cin.get(input, 100);
    ofstream file;
    file.open("treefile");
    file<<input;
    file.close();
    ifstream infile;
    infile.open("treefile");
    int a;
    while(infile >> a){
      //  cout<<a<<endl;
      insert(a, root, root);   
    }

  }

  if(entry == 2){
    cout<<"Enter file name"<<endl;
    char* filename = new char[100];
    cin.ignore();
    cin.get(filename, 100);
    ifstream infile;
    infile.open(filename);
    int a;
    while(infile >> a){
      //sort into tree
      //call a method and recursively find spot
    }
  }
}//end read method
void insert(int a , node* current, node* &root){
  if(root != NULL){
    cout<<current->value<<"x"<<endl;
  }
  if(root == NULL){ //if first node in tree
    cout<<a<<endl;
        node* temp = new node;
	temp->value = a;
	root = temp;
	cout<<root->value<<"l"<<endl;
	
      }

  else if(a < current->value){ //if belongs on left of current
    if(current->left == NULL){
      node* temp = new node;
      temp->value = a;
      current->left = temp;
    }
    else{
      insert(a, current->left, root);

    }

  }

  
}
void print(node* current){
  if(current == NULL){
    return;
  }
  print(current->left);
  cout<<current->value<<',';
  print(current->right);

  

}
