//Dhruva Sogal Heap Project
#include<iostream>
//#include "node.h"
#include <fstream>
using namespace std;
void read(int* &input, int &count);
void heapify(int* &input, int &count);
int main(){
  int count = 0;
  int index = 1;
  int* input = new int[100];
  read(input, count);





}

void read(int* &input, int &count){
  cout<<"Enter 1 for manual entry or 2 for file entry"<<endl;
  int entry = 0;
  cin>>entry;
  if(entry == 1){ //manual entry


  }
  if(entry == 2){ //file entry
    ifstream infile;
    cout<<"Enter file name"<<endl;
    char* name = new char[90];
    cin.ignore();
    cin.get(name, 90);
    infile.open(name);
    if(infile.fail()){ //if file does not exist
      cout<<"That file does not exist"<<endl;

       }
    else{
      int a;
      //char a;
      int x  = 0;
      //int count = 0;
      while(infile >> a){
	//input[x] = a;
	cout<<"a: "<<a<<endl;
	input[count + 1] = a;
	cout<<"count: "<<count<<endl;
	count++;

      }
      for(int i = 0; i < count + 1; i++ ){
	cout<<input[i]<<endl;
      }
      


    }

    

  }
  








}


void heapify(int* &input, int index){
  for(int i = 0 ; i < count + 1 ; i++){
    if() //check against parent



  }






}
