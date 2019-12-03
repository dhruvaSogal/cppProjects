//Dhruva Sogal Zuul Project
//Text game that explores an old very large house
#include<iostream>
#include<vector>
#include<map>
#include "room.h"
#include "items.h"
#include <cstring>
using namespace std;
int main(){
  bool running = true;
  cout<<"Welcome to Zuul"<<endl;
  vector <room*>* rooms = new vector<room*>();
  vector <item*>* playerItems = new vector<item*>();

  room* entry = new room;
  item* temp;
  rooms->push_back(entry);
 (*rooms)[0]->setDescription("You are in the entry of an ancient Portland mansion");
 

 
  room* foyer = new room(); 
  rooms->push_back(foyer);
  (*rooms)[1]->setDescription("You are in the foyer");
 
  
  room* livingRoom = new room();
  rooms->push_back(livingRoom);
  (*rooms)[2]->setDescription("You are in a living room adorned with fancy furniture");
 


  room* den = new room();
   
  //den->setExits('W', (*rooms)[14]);
  //den->setExits('S', (*rooms)[5]);
  //den->setExits('N', (*rooms)[0]);
  rooms->push_back(den);
  den->setDescription("You are in a cozy den");
  


  room* drawing = new room();
 
  // drawing->setExits('N', (*rooms)[4]);
  //drawing->setExits('S', (*rooms)[6]);
  rooms->push_back(drawing);
  (*rooms)[4]->setDescription("You are in a drawing room");



  room* billiards = new room();
 
  //billiards->setExits('N', (*rooms)[5]);
  rooms->push_back(billiards);
  (*rooms)[5]->setDescription("You are in a billiards room");



  room* olympic = new room();
 
  //olympic->setExits('N', (*rooms)[5]);
  rooms->push_back(olympic);
  (*rooms)[6]->setDescription("You have found the olympic size indoor pool");



  room* lounge = new room();
 
  //lounge->setExits('W', (*rooms)[0]);
  //lounge->setExits('E', (*rooms)[8]);
  //lounge->setExits('N', (*rooms)[12]);
  rooms->push_back(lounge);
  (*rooms)[7]->setDescription("You are in the lounge");


  room* theatre = new room();
 
  //theatre->setExits('W', (*rooms)[7]);
  //theatre->setExits('E', (*rooms)[9]);
  //theatre->setExits('N', (*rooms)[11]);
 
  rooms->push_back(theatre);
  (*rooms)[8]->setDescription("You are in the theater");


  room* spiral = new room();
 
  //spiral->setExits('W', (*rooms)[8]);
  //spiral->setExits('N', (*rooms)[10]);
  rooms->push_back(spiral);
  (*rooms)[9]->setDescription("You are in the spiral staircase");


  room* master = new room();
   /*master->setExits('W', (*rooms)[11]);
    master->setExits('S', (*rooms)[9]); */
  rooms->push_back(master);
  (*rooms)[10]->setDescription("You are in the master bedroom");


  room* guest = new room();
 
  /*guest->setExits('S' ,(*rooms)[8]);
  guest->setExits('W' ,(*rooms)[12]);
  guest->setExits('E' ,(*rooms)[10]);
  */
  rooms->push_back(guest);
  (*rooms)[11]->setDescription("You are in the guest bedroom");


  room* child = new room();
  //cout<<"k"<<endl;
  //child->setExits('S' ,(*rooms)[7]);
  //child->setExits('E' ,(*rooms)[11]);
  //child->setExits('W' ,(*rooms)[1]);
  
  rooms->push_back(child);
  (*rooms)[12]->setDescription("You are in the child's room. Don't stop on legos!");


  room* upperLounge = new room();
 
  //upperLounge->setExits('S' ,(*rooms)[14]);
  // upperLounge->setExits('E' ,(*rooms)[0]);
  
  rooms->push_back(upperLounge);
  (*rooms)[13]->setDescription("You are in the upstairs lounge");


  room* balcony = new room();
 
  //balcony->setExits('N' ,(*rooms)[13]);
  //balcony->setExits('E' ,(*rooms)[4]);
  
  rooms->push_back(balcony);
  (*rooms)[14]->setDescription("You are on the balcony");



  room* balconyPool = new room();
 
  
  rooms->push_back(balconyPool);
  (*rooms)[15]->setDescription("You are in the balcony pool");




  room* win = new room();
 
  rooms->push_back(win);
  (*rooms)[16]->setDescription("You are in the winning room");
 
  //setting exits for the room
  entry->setExits('E' , (*rooms)[7]);
  entry->setExits('N', (*rooms)[1]);
  entry->setExits('S', (*rooms)[4]);
  entry->setExits('W', (*rooms)[13]);
  //room 1
  foyer->setExits('E', (*rooms)[12]);
  foyer->setExits('N', (*rooms)[2]);
  foyer->setExits('S', (*rooms)[0]);
  //room 2
  livingRoom->setExits('S', (*rooms)[1]);
  //room 3
  den->setExits('S', (*rooms)[2]);
  //room 4
  drawing->setExits('W', (*rooms)[14]);
  drawing->setExits('S', (*rooms)[5]);
  drawing->setExits('N', (*rooms)[0]);
  //room 5
  billiards->setExits('N', (*rooms)[4]);
  billiards->setExits('S', (*rooms)[6]);
  //room 6
  olympic->setExits('N', (*rooms)[5]);
   //room 7
  lounge->setExits('W', (*rooms)[0]);
  lounge->setExits('E', (*rooms)[8]);
  lounge->setExits('N', (*rooms)[12]);
    //room 8
  theatre->setExits('W', (*rooms)[7]);
  theatre->setExits('E', (*rooms)[9]);
  theatre->setExits('N', (*rooms)[11]);
    //room 9
  spiral->setExits('W', (*rooms)[8]);
  spiral->setExits('N', (*rooms)[10]);
    //room 10 has south & west
 master->setExits('W', (*rooms)[11]);
 master->setExits('S', (*rooms)[9]);
    //room 11 has NSEW
  guest->setExits('S' ,(*rooms)[8]);
  guest->setExits('W' ,(*rooms)[12]);
  guest->setExits('E' ,(*rooms)[10]);
    //room 12 SEW
  child->setExits('S' ,(*rooms)[7]);
  child->setExits('E' ,(*rooms)[11]);
  child->setExits('W' ,(*rooms)[1]);
    //room 13 has E,S
  upperLounge->setExits('S' ,(*rooms)[14]);
  upperLounge->setExits('E' ,(*rooms)[0]);
    //room 14 has WNE
  balcony->setExits('N' ,(*rooms)[13]);
  balcony->setExits('E' ,(*rooms)[4]);
  balcony->setExits('W' ,(*rooms)[15]);
    //room 15 E
  balconyPool->setExits('E' ,(*rooms)[14]); 
  //items
  item* wrench = new item();
  wrench->setName("wrench");
  item* nail = new item();
  nail->setName("nail");
  item* hammer = new item();
  hammer->setName("hammer");
  item* brick = new item();
  brick->setName("brick");
  item* mortar = new item();
  mortar->setName("mortar");

  (*rooms)[14]->dropItems(wrench);
  (*rooms)[14]->dropItems(nail);
  (*rooms)[14]->dropItems(hammer);
  (*rooms)[14]->dropItems(brick);
  (*rooms)[14]->dropItems(mortar);
  

  room* currentRoom = (*rooms)[0];
  while(!(currentRoom == (*rooms)[15]) && running == true){ //run the game
    item* temp = new item;
   (*currentRoom).getDescription();				      
   char command;
   cout<<"Enter G to travel, l to list your items, p to pick up an item or d to drop an item, or Q to quit"<<endl;
   cout<<"The exits are: "<<endl;
   
   //check which key values the map contains

   if(((*currentRoom).getMap())->count('N') > 0){
     cout<<"N"<<endl;

   }
   if(((*currentRoom).getMap())->count('S') > 0){
     cout<<"S"<<endl;

   }
   if(((*currentRoom).getMap())->count('E') > 0){
     cout<<"E"<<endl;

   }
   if(((*currentRoom).getMap())->count('W') > 0){
     cout<<"W"<<endl;

   }
  


   
   cout<<"the items are:"<<endl;
   currentRoom->getItems();
   cin>>command;
   if(command == 'Q'){
     running = false;
   }
   if(command == 'l'){
     for(int i = 0; i<playerItems->size();i++){
       (*playerItems)[i]->getName();

     }

   }

   
   if(command == 'G'){
     char direction;
     cout<<"Enter the capital letter abbreviation for which direction you want to go"<<endl;
       cin>>direction;
       currentRoom = ((*currentRoom).getMap())->at(direction); //set the current room equal to the mapped value at the inputted key
     



   }
   

   if(command == 'p'){
     int searchIndex;
     cout<<"Enter the number of the item you want in the order it was listed (the first is 0)"<<endl;
     cin>>searchIndex;
     item* temp = (*currentRoom->items)[searchIndex];
     playerItems->push_back(temp);
     (*currentRoom->items).erase((*currentRoom).items->begin()+searchIndex);
     




   }
   if(command == 'd'){
     cout<<"your items are:"<<endl;
     for(int i =0; i<playerItems->size(); i++){
       (*playerItems)[i]->getName();

     }
     int dropsearchIndex;
     cout<<"Enter the number of the item you want in the order it was listed (the first is 0)"<<endl;
     cin>>dropsearchIndex;
     item* droptemp = new item;
     droptemp = (*playerItems)[dropsearchIndex];
     (*currentRoom->items).push_back(droptemp);
     playerItems->erase(playerItems->begin()+dropsearchIndex);
     




   }
   
     


   
   
	   


   /*end while*/ }
  
  if((currentRoom == (*rooms)[15])){
    cout<<"you win"<<endl;

  }







  
  

} //end main
