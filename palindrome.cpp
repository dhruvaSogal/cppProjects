#include<iostream>

//Dhruva Sogal Started 9/17/2019
using namespace std;
int main(){
  char palindrome[20];
  char holder[20];
  char catcher[20];
  int catcherIndex = 0;
  
  cin.get(palindrome, 80);
 
  for(int i=0; i< 80; i++){
    holder[i] = tolower(palindrome[i]);



  }
  for(int i=0; i < 80;i++){
    if(holder[i] > 97 && holder[i] < 122){
      catcher[catcherIndex] = holder[i];
      catcherIndex++;

    }


  }
  for(int i = strlen(catcher); i<0 ; i-1){
    for(int j =0; j<strlen(catcher); j++){
    }

  }
  
   cout << palindrome <<endl;
   cout << holder <<endl;
   cout << catcher <<endl;
  
  //  cout << "Enter a phrase to test if it is a palindrome" << endl;
  // cin.get(palindrome,20);
  
  
  

}

















