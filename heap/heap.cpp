//Dhruva Sogal Heap Project
#include<math.h>
#include<iostream>
//#include "node.h"
#include <fstream>
using namespace std;
void read(int* &input, int &count, int &index);
void heapify(int &index, int* &input);
int main(){
  int count = 0;
  int index = 0;
  int* input = new int[100];
  read(input, count, index);





}

void read(int* &input, int &count, int &index){
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
      index = 1;
      while(infile >> a){
       
	//input[x] = a;
	//cout<<"a: "<<a<<endl;
	input[index] = a;
	//sort until smaller than parent or in 1 spot
	if(index != 1){
	heapify(index, input);
	}

      
	//cout<<"count: "<<count<<
      
      
  
	index ++;
      

      }

    

  }
  








  }
  for(int i = 0; i < 4 ; i++){
    cout<<input[i]<<endl;
  }
}

void heapify(int &index, int* &input){
  cout<<index<<endl;
  if(input[index] > input[(int)floor(index/2)]){
    //swap
    int newindex = (int)floor(index/2);
    int temp = input[index];
    input[index] = input[newindex];
    input[newindex] = temp;
    if(newindex != 1){
      heapify(index, input);
    }
    
  }
  
 }


