#include <iostream>
using namespace std;

class Student {
 public:
  Student(char*, int, float);
  ~Student();
  char* getName();
  float getGPA();
  int getId();


 private:
  char* name;
  float GPA;
  int id;






};
