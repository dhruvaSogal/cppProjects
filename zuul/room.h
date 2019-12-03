//Dhruva Sogal Zuul room class

#include<iostream>
#include<vector>
#include<map>
#include "items.h"
using namespace std;
class room{
 public:
  room();
  char* getDescription();
  char* getItems();
  void setExits(char , room*);
  void setDescription(const char* roomDescription);
  void dropItems(item*);
  map<char, room*>* getMap();
  vector<item*>* returnItems();
  vector<item*>* items;
private:
  
  map <char, room*>* exits;
  const char* description;
  
 



};
