/*
* Guessing Game.cpp
* Author: Jack Miller
* Code written for http://codingforstudents.blogspot.co.uk/
*
* A simple recap of control structures and the 'game loop'.
*
* Description - The player needs to guess a number between 1-50. The player has 5 guesses. 
* The computer will tell the player if they guessed either too high, too low, or guessed correctly. 
* If the player uses all of their guesses, they lose. If the player guesses correctly, they win.
*
* At the end of the game, the player will be shown a message based on how they did in the game, as well as the amount of guesses they used.
*/

#include <iostream>
#include <time.h>
using namespace std;


int main()
{

  //This function makes a pseudo random number generator. It takes an argument passed as 'seed'. We pass it system time so that we get a new part of the random number sequence each time.
  srand(time(0));
   
  //Store a new random number before the game begins, 
  int randomNumber = rand() % 50 + 1;
  
  //Store the guess that the user takes, initialised to 0.
  int guess = 0;

  //Our counter variable to count the number of guesses.
  int count = 0;

  //Welcome the player to the game.
  cout << "Welcome to the game!" << endl;
  cout << "The aim of the game is to guess a random number between 1 and 50." << endl;
  cout << "You have 5 guesses. Good luck" << endl;

  //The game loop. This will run while the number the player has guessed is incorrect.
  while(guess != randomNumber)
  {
	  //Get the guess from the player
	  cout << "Enter your guess and press enter : ";
	  cin >> guess;


	  //If the player enters a number below 0 or above 50, go back to the start of the loop. 
	  if(guess < 1 || guess > 50)
	  {
		  cout << "Please enter a value between 1 - 50" << endl;

		  //'continue' will start the loop from the very beginning.
		  continue;
	  }

	  //If the guess is higher than the random number.
	  if(guess > randomNumber)
	  {
		  cout << "Your guess was too high" << endl;

		  //Increment count by 1.
		  count++;

		  cout << "You have used " << count << " guesses." << endl;
	  }

	  //If the guess is lower than the random number.
	  else if(guess < randomNumber)
	  {
		  cout << "Your guess was too low" << endl;

		  //Increment count by 1.
		  count++;

		  cout << "You have used " << count << " guesses." << endl;
	  }

	  //If the player has used all of their guesses. Checks to see if the guess count is higher than 4. ( 4 because the counter starts at 0 rather than 1 ).
	  if(count == 5)
	  {
		  cout << "You used all of your guesses, you lost the game" << endl;
		  break;
	  }

	  //If the guess was correct and equal to the random number
	  else if(guess == randomNumber)
	  {
		  count++;
		  cout << "Congratulations, You guessed the number! " << endl;
		  cout << "You used " << count << " guesses." << endl;
	  }
  }

  cout << "Goodbye !" << endl;
  system("pause");
  return 0;
}





