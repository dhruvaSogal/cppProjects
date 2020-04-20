
#include <iostream>
#include <fstream>
using namespace std;

struct node{
  int value;
  node* right;
  node* left;
  node* parent;
  char color;

};
void rotateRight(node* k);
void read(node* &root);
void fix(node* root, node* k);
void step2(node* k);
node* getSibiling(node* root, node* k);
node* getUncle(node* root, node* k);
node* getGrandparent(node* k);
void rotateRight(node* k);
void rotateLeft(node* k);
void insert(node* a , node* current, node* &root);
void insertFix(node* k, node* root);
void print(node* current, int space);
 int main(){
  node* root = NULL;
  //root->color = 'b';
  read(root);
  print(root, 0);





}
void read(node* &root){ //reads input and calls insert method
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
      //cout<<a<<endl;
      node* k = new node;
      k->value = a;
      insertFix(k, root);
    }

  }

  if(entry == 2){
    cout<<"Enter file name"<<endl;
    char* filename = new char[100];
    cin.ignore();
    cin.get(filename, 100);
    ifstream infile;
    infile.open(filename);
    if(infile.fail()){
      cout<<"no such file exists"<<endl;
    }
    
    else{
      int a;
      while(infile >> a){
      node* k = new node;
      k->value = a;
      insertFix(k, root);
      }
    }
  }
}//end read method
void insert(node* a , node* current, node* &root){ //inserts elements appropriately into tree
  if(root == NULL){
    root = a;
  }
  else{ //root not equal to NULL
    if(a->value < current->value){
      if(current->left != NULL){
	insert(a, current->left, root);

      }
      else{
	current->left = a;
	a->parent = current;
	a->left = NULL;
	a->right = NULL;

      }
    }

      else if(a->value > current->value || a->value == current->value){
	if(current->right != NULL){
	insert(a, current->right, root);

      }
      else{
	current->right = a;
	a->parent = current;
	a->left = NULL;
	a->right = NULL;

      }
	

      }


    }
    



  }




  
  




//close insert
  

    
  





  
void fix(node* root, node* k){
  if(k == root){
    k->color = 'b';
    return;
  }
  else if(k->parent!=NULL && k->parent->color == 'b'){
    return;
    
  }
  else if(getUncle(root, k)!= NULL && getUncle(root, k)->color == 'r'){
    //case 3 wikipedia
    k->parent->color = 'b';
    getUncle(root, k)->color = 'b';
    getGrandparent(k)->color = 'r';
    fix(root, getGrandparent(k));
    
  }
  else{
      
    node* p = k->parent;
    node* g = getGrandparent(k);
    if(p!= NULL && g != NULL){ 
    if(k == p->right && p == g->left){
      //rotate left(k)
      k = k->left;

    }
    
    
    if(k == p->left && p == g->right){
      rotateRight(k);
      k = k->right;

    }
    }

    step2(k);

    
  }
  
  




}


void step2(node* k){
  
   node* p = k->parent;
   node* g = getGrandparent(k);
   if( p != NULL && g != NULL){   
   if(p!= NULL){
   if(k == p->left){
     rotateRight(g);


   }
   }
   else{
     rotateLeft(g);

   }
   p->color = 'b';
   g->color = 'r';

  }


}

void insertFix(node* k, node* root){
  insert(k, root, root);
  fix(root, k);




}


node* getUncle(node* root, node* k){

  node* p = k->parent;
  return getSibiling(root, p);



}
node* getSibiling(node* root, node* k){
  node* p = new node;
  if(k != NULL){
  p = k->parent;
  }
  if(p==NULL){
    return NULL;
  }
  if(k==p->left){
    return p->right; 
  }
  else{
    return p->left;
  }

}
node* getGrandparent(node* k){
  if(k == NULL){
    return NULL;

  }
  node* p = k->parent;
  if(p == NULL){
    return NULL;
  }
  node* t = p->parent;
  if(t == NULL){
    return NULL;
  }
  else{
    return t;
  }

}
void rotateLeft(node* k){
  if(k != NULL){
  node* temp = k->right;
  node* p = k->parent;

  k->right = temp->left;
  temp->left = k;
  k->parent = temp;
  if(k->right !=NULL){
    k->right->parent = k;
 

  }
  //if k was root
  if(p != NULL){
    if(k==p->left){
      p->left = temp;

    }
    else if(k==p->right){
      p->right = temp;

    }



  }
  temp->parent = p;
  }

}
void rotateRight(node* k){
  node* temp = k->left;
  node* p = k->parent;

  k->left = temp->right;
  temp->right = k;
  k->parent = temp;
  if(k->left !=NULL){
    k->left->parent = k;
 

  }
  //if k was root
  if(p != NULL){
    if(k==p->left){
      p->left = temp;

    }
    else if(k==p->right){
      p->right = temp;

    }



  }
  temp->parent = p;

}
void print(node* current, int space){ //this method is taken from "Geeks for Geeks" https://www.geeksforgeeks.org/print-binary-tree-2-dimensions/
  /* if(current == NULL){
    return;
  }

  space += 10;
  
  print(current->right, space);
  cout<<endl;
  for (int i = 10; i < space; i++){  
    cout<<" ";
    } */
    cout<<current->value<<"\n";  
    // print(current->left, space); 


}
