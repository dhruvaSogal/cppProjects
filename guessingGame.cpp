#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  srand(time(NULL));
  int randomnumber = rand() % 100+1; //generates a random number between 1 and 100
  cout << randomnumber; //prints out the generated number for testing purposes
  int guesses = 0;
  int guess = 0;
  while(!(guess==randomnumber){
      cout << "enter your guess:"<< endl;
      cin >> guess;
      if(guess>randomnumber){
	cout << "Too High" << endl;
	guesses++;

      }
      if(guess<randomnumber){
	



      }

    }
      
 





}
