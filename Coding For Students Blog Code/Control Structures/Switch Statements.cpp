/*
* Switch Statements.cpp
* Author: Jack Miller
* Code written for http://codingforstudents.blogspot.co.uk/
*
* An introduction to the switch statement control structure.
*/



#include <iostream>

int main()
{
	//Once again, we have a variable to hold our number of apples.
	int applesEatenToday;

	applesEatenToday = 2; //Feel free to change this number, or as an extra challenge, try and recieve input from the user instead of having a set value.

	
	switch(applesEatenToday)
	{
	case(0): //if ApplesEatenToday equals 0...
		std::cout << "You have eaten 0 apples today" << std::endl;
		break;
	case(1): //if ApplesEatenToday equals 1...
		std::cout << "You have eaten 1 apples today" << std::endl;
		break;
	case(2): //if ApplesEatenToday equals 2...
		std::cout << "You have eaten 2 apples today" << std::endl;
		break;
	case(3): //if ApplesEatenToday equals 3...
		std::cout << "You have eaten 3 apples today" << std::endl;
		break;
	default:  //if ApplesEatenToday equals neither 0, 1, 2 or 3...
		std::cout << "You have eaten lots of apples today!" << std::endl;
	}

	system("pause");
	return 0;
}