#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  bool running = true;
  while (running ==true){
    cout << "Shall We Play a Game?"<< endl;
    cout<< "I will pick a number between 1 and 100, you need to guess it"<<endl;
     srand(time(NULL));
     int randomnumber = rand() % 100+1; //generates a random number between 1 and 100
     //  cout << randomnumber<< endl; //prints out the generated number for testing purposes
    int guesses = 0; //tracks guesses
    int guess = 0;  //player's gues
    char play = 'y'; //to set a boolean to terminate the program
  bool playing = true;
  while(playing==true){
    
      cout << "enter your guess:"<< endl; 
      cin >> guess;
      if(guess>randomnumber){
	cout << "Too High" << endl;  //if too high
	guesses++;

      }
      if(guess<randomnumber){
	cout << "Too Low" <<endl; //if too low
	guesses++;

      }
      if(guess==randomnumber){
	guesses++;              //win scenario
	cout << "You Got It"<<endl;
	cout << "You took:"<<guesses << " guesses"<< endl;
	cout << "Do you want to play again? Enter y or n"<< endl;
	cin >> play;
	if(play=='n'){
	  //end program with a boolean
	  playing = false;
	  running = false;

	}
	if(play=='y'){
	  //continue program with a boolean
	  playing = false;
	  running = true;


	}


	}
	
	
      }
  } 
  if(running == false){}
}



      

      

    
      
 





