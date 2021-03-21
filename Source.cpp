#include<iostream>
#include"CarShowroom.h"
#include"string"
#include<fstream>
#include<Windows.h>
#include<stdlib.h>

using namespace std;

int main()
{
	CarShowroom cs;

	int choice;
	cout << "******************************************************************************" << endl;
	cout << "                        CAR SHOWROOM MANAGMENT SYSTEM                                  " << endl;
	cout << "******************************************************************************" << endl;
	cout << endl;

	do{
		cout << "1=Add Car Data" << endl;
		cout << "2=Delete Car Data" << endl;
		cout << "3=Display Car Data" << endl;
		cout << "4=Modify Car Data" << endl;
		cout << "5=Search Car Data" << endl;
		cout << "6=Exit" << endl;


		cout << endl;

		cout << "Enter your choice:" << endl;

		cin >> choice;
		getchar();
		

		switch (choice)
		{
			cout << endl;
		case 1:
			cs.AddCar();
			cout << endl;
			break;

		case 2:
			cs.DelCar();
			cout << endl;
			break;

		case 3:
			cs.DisplayCars();
			cout << endl;
			break;

		case 4:
			cs.ModifyCar();
			cout << endl;
			break;

		case 5:
			cs.SearchCar();
			cout << endl;
			break;

		case 6:
			cout << "goodbye! :)" << endl;
			break;

		default:
			cout << "Wrong! input sorry try again" << endl;
			break;
			
		}
		cout << endl;
		
	} while (choice != 6);
	

	return 0;
}
