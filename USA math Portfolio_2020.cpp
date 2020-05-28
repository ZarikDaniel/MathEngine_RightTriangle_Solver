// USA math Portfolio_2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


#include <iostream>
#include<chrono>
#include<ctime>
#include <thread>
#include<fstream>
#include <math.h>
using namespace std;

#include <string>






int main()
{
	cout << "               USA math Minstry and Organization            \n";
	cout << "                    Lets Analyze  together                    \n";
	string answer = "";
	int counter = 0;



	while (answer != "no")
	{

		if (counter == 0)
		{



			cout << "Are you saticfy with your result?\n";

		}
		else
			cout << "I hope in  " << counter + 1 << " time you will get the result\n";


		//Your code here**************************************************


		double  cubes;
		cout << "Enter a number to see all the cube result befor it :\n";
		cin >> cubes;
		for (int i = 0; i < cubes; i++)
		{
			cout << "the squre of :" << i ;
			cout<< " is "<<pow(i, 2) << endl;

		}

	


		



		//Your end of the code********************************************
		counter++;
		cout << "Do you want to calculate again ?\n";

		cin >> answer;


	}




	return 0;
}
