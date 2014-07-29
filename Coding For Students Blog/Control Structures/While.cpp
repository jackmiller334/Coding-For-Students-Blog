/*
* While.cpp
* Author: Jack Miller
* Code written for http://codingforstudents.blogspot.co.uk/
*
* An introduction to while loops.
*/


#include <iostream>
using namespace std;

int main()
{
	//Declaring a variable of type 'char' (Character) and assigning it the character 'y'.
   char playAgain = 'y';

   //This is the loop. It tests to see whether or not its condition is true. 
   //If the condition is true, the loop will run. The only way to exit this loop is by 
   //typing an answer that is not 'y', otherwise, it will go on forever!
   while(playAgain=='y')
   {
         cout << "You've won the game!" << endl;
         cout << "Do you want to play again?" << endl;
         cout << "y/n : ";
         cin >> playAgain;
		 cout << endl;
   }
 
  cout << "Goodbye !" << endl;
  system("pause");
  return 0;
}