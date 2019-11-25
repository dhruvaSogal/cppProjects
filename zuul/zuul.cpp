#include<iostream>
#include<vector>
#include "room.h"
using namespace std;
int main(){
  vector <rooms*> room = new vector<rooms>;
  //16 rooms to be added to array
  room[0] = new rooms();
  room[0]->setDescription("This is the entry of an ancient house in portland");
  room[1] = new rooms();
  room[1]->setDescription("You are in the foyer");
  room[2]= new rooms();
  room[2]->setDescription("You are in a living room adorned with fancy furniture");
  room[3]= new rooms();
  room[3]->setDescription("You are in a cozy den");
  room[4]= new rooms();
  room[4]->setDescription("You are in a drawing room");
  room[5]= new rooms();
  room[5]->setDescription("You are in a billiards room");
  room[6]= new rooms();
  room[6]->setDescription("You have found the olympic size indoor pool");
  room[7]= new rooms();
  room[7]->setDescription("You are in the lounge");
  room[8]= new rooms();
  room[8]->setDescription("You are in the theater");
  room[9]= new room();
  room[9]->setDescription("You are in the spiral staircase");
  room[10]= new room();
  room[10]->setDescription("You are in the master bedroom");
  room[11]= new room();
  room[11]->setDescription("You are in the guest bedroom");
  room[12]= new room();
  room[12]->setDescription("You are in the child's room. Don't stop on legos!");
  room[13]= new room();
  room[13]->setDescription("You are in the upstairs lounge");
  room[14]= new room();
  room[14]->setDescription("You are on the balcony");
  room[15]= new room();
  room[15]->setDescription("You are in the balcony pool");
  room[16] = new room();
  room[16]->setDescription("You are in the winning room");
  //setting exits for the room
  room[0]->setExits("WEST", room[13]);
  room[0]->setExits("EAST", room[7]);
  room[0]->setExits("NORTH", room[1]);
  room[0]->setExits("SOUTH", room[4]);
  //room 1
  room[1]->setExits("EAST", room[12]);
  room[1]->setExits("NORTH", room[2]);
  room[0]->setExits("SOUTH", room[0]);
  //room 2
  room[2]->setExits("SOUTH", room[1]);
  //room 3
  room[3]->setExits("SOUTH", room[2]);
  //room 4
  room[4]->setExits("WEST", room[14]);
  room[4]->setExits("SOUTH", room[15]);
  room[4]->setExits("NORTH", room[0]);
  //room 5
  room[5]->setExits("NORTH", room[4]);
  room[5]->setExits("SOUTH", room[6]);
  //room 6
   room[6]->setExits("NORTH", room[5]);
   //room 7
    room[7]->setExits("WEST", room[0]);
    room[7]->setExits("EAST", room[8]);
    room[7]->setExits("NORTH", room[12]);
    //room 8
    room[8]->setExits("WEST", room[7]);
    room[8]->setExits("EAST", room[9]);
    room[8]->setExits("NORTH", room[11]);
    //room 9
    room[9]->setExits("WEST", room[8]);
    room[9]->setExits("NORTH", room[10]);
    //room 10 has south & west
    //room 11 has NSEW
    //room 12 SEW
    //room 13 has E,S
    //room 14 has WNE
    //room 15 E
    
  int combinedWorth = 0;
  vector <items> myItems = new vector<items>;
  //win if in intial room with combined worth of 20 across items

  room currentRoom = (*room)[0];
  while(!(currentRoom == room[16])){
    //run the game
    currentRoom->getDescription();
    currentRoom->getItems();
    currentRoom->getExits();







  }
 
 
 
  
  

}
