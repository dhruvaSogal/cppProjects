//Dhruva Sogal Zuul room.cpp file
#include<iostream>
#include<vector>
#include "room.h"
#include "items.h"
using namespace std;
room :: room(){
  exits = new map<char, room*>;
  items = new vector<item*>;
  





}
char* room :: getDescription(){ //prints description
  cout<<description<<endl;


}
char* room :: getItems(){ //gets items
  for(int i = 0; i<items->size(); i++){
    (*items)[i]->getName();

  }

}
void room :: setDescription(const char* roomDescription){
  description = roomDescription; //used to set description before game starts

}

void room :: setExits(char direction, room* nextRoom){

  exits->insert(pair<char, room*>(direction, nextRoom));
  
  

}
void room :: dropItems(item* droppedItem){
  items->push_back(droppedItem);


}
//get map method
map<char, room*>* room :: getMap(){
  return exits;


}
vector<item*>* room :: returnItems(){
  return items; 


}
