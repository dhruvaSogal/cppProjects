#include<iostream>
#include<vector>
class room{
 public:
  room();
  char* getDescription();
  char* getItems();
  void setExits();
  void setDescription(char* roomDescription);
  void setItems();
  vector<item*>*items = new vector<item*>();
 private:
  char* description;
  struct item{
    char* name;
    int worth;
    int weight;
    map<char*,room>* exits = new map<char*,room>();

  };
 



}
