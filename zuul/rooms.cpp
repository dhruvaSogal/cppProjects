#include<iostream>
#include<vector>
#include "rooms.h"
using namespace std;
room(){
  description = new char;






}
char* room :: getDescription(){
  cout<<description<<endl;


}
char* room :: getItems(){


}
void room :: setDescription(char* roomDescription){
  description = roomDescription; 

}
void room :: setItems(){

}
void room :: setExits(char* direction, room nextRoom){

  exits.insert(pair<char*, room> (direction, nextRoom));
  
  

}
