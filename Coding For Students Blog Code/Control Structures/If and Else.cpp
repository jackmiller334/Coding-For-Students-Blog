/*
* If and Else.cpp
* Author: Jack Miller
* Code written for http://codingforstudents.blogspot.co.uk/
*
* An introduction to control structures with If and Else. 
*/

#include <iostream>
using namespace std;

int main()
{
	//Variable to hold an age that the user will enter.
	int age;

	//Asks the user for their age
	cout << "Enter your age" << endl;

	//Inserts the users answer into the age variable.
	cin >> age;

	//If the age entered is less than or equal to 18...
	if(age <= 18)
	{
		//Then display this message
	cout << "Enjoy your childhood, before things get crap" << endl;
	}

	//If the age entered is higher than 18...
	else
	{
		//Then display this message instead.
	cout <<"Welcome to the adult life, you're in for a treat" << endl;
	}
	system("pause");
	return 0;
}
