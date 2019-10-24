#include<iostream>
#include<vector>
using namespace std;
#include<cstring>
#include<iomanip>
struct student{     //student struct
  char* firstName;
  char* lastName;
  int id;
  float gpa;
  
  

};
void add(vector<student*>*); //add
void print(vector<student*>*);//print
void deleteStudent(vector<student*>*);//delete




int main(){
  vector<student*>* students = new vector <student*>;
  char input[12];
  cout<<"Enter:\n ADD to add a new student\nPRINT to print all students\nDELETE to delete a student\n QUIT to quit"<<endl;
  while(true){ //takes input to run the appropriate method
    cin>>input;
    if(strcmp(input, "ADD")==0){
      add(students);


    }
    else if(strcmp(input, "PRINT")==0){
      print(students);


    }
    else if(strcmp(input, "DELETE")==0){
      deleteStudent(students);


    }
    else if(strcmp(input,"QUIT")==0){
      break;
    }
    else{
      cout<<"I don't know what that means"<<endl;
    }

  }
  

  



}
void add(vector<student*>* students){ //adding method
  student* temp = new student;
  temp->firstName = new char;
  temp->lastName = new char;
  cout<<"Enter First Name"<<endl;
  cin>>temp->firstName;
  cout<<"Enter Last Name"<<endl;
  cin>>temp->lastName;
  cout<<"Enter id"<<endl;
  cin>>temp->id;
  cout<<"Enter GPA"<<endl;
  cin>>temp->gpa;
  (*students).push_back(temp);
  


}
void print(vector<student*>*students){ //print method
  for(int i=0; i< students->size(); i++){
    cout<<(*students)[i]->firstName<<",";
    cout<<(*students)[i]->lastName<<",";
    cout<<setprecision(2)<<(*students)[i]->gpa<<",";
    cout<<(*students)[i]->id<<endl;



  }
  


} //end of print
void deleteStudent(vector<student*>* students){ //delete method
  cout<<"Enter id of the student you wish to erase"<<endl;
  int idDelete;
  cin>>idDelete;
  for(int i =0; i<students->size();i++){
    if ((*students)[i]->id == idDelete){
      students->erase(students->begin()+i);
      delete((*students)[i]);
      
    }

  }


}
