//Dhruva Sogal Heap Project
#include<math.h>
#include<iostream>
//#include "node.h"
#include <fstream>
using namespace std;
void read(int* &input, int &count, int &index);
void heapify(int index, int* &input);
void removeNode(int index, int* &input);
void reheap(int x , int* &input);
int main(){
  int count = 0;
  int index = 0;
  int* input = new int[100];
  read(input, count, index);
  for(int i = 1; i< index; i++){
  removeNode(index, input);
  }




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
	input[index] = a;
	//sort until smaller than parent or in 1 spot
	if(index != 1){
	heapify(index, input);
	}

	index ++;
      

      }

  }
  

  }
  for(int i = 1; i < index; i++){
    cout<<input[i]<<": "<<i<<endl;
  }
}

void heapify(int index, int* &input){
  if(input[index] > input[(int)floor(index/2)]){//if larger than parent
    int temp = input[index];
    input[index] = input[(int)floor(index/2)];
    input[(int)floor(index/2)] = temp;
    
    
      heapify((int)floor(index/2) , input);
    
    
  }
  
 }

void removeNode(int index, int* &input){ //by the time this function is called index should reflect the number of elements in the array
  input[1] = input[index];
  
  
}
/*void reheap(int x , int* &input){
  if(input[x] < input[x * 2]){
    int temp = input[x];
    input[x] = input[x*2]; //swap
    input[x * 2] = temp;
    reheap(input[x*2], input);
    

    

  }
  if(input[x] < input[x * 2 + 1]){
    int temp = input[x];
    input[x] = input[x*2 + 1]; //swap
    input[x * 2 + 1] = temp;
    reheap(input[x*2 + 1], input);
    

    

  }

}

*/

