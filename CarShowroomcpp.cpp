#include<iostream>
#include"CarShowroom.h"
#include"string"
#include<cstring>
#include<fstream>
#include <algorithm>
#include<windows.h>
#include<stdlib.h>

using namespace std;

void CarShowroom::AddCar()
{
	
	string HoldFile;
	string FinalFile;
	ofstream Mycars;

	while (HoldFile.length() != 4)
	{
		cout << endl;
		cout << "Enter The 4 digit I.D number of Car:" << endl;
		getline(cin, HoldFile);

		if (HoldFile.length() != 4)
		{
			
			cout << "Try again! make sure you have enterd 4 digit number:" << endl;
		}
	}
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	FinalFile ="DB/"+ HoldFile + ".txt";

	Mycars.open(FinalFile,ofstream::out);
	
	/*cout << "Enter the entry number of car:" << endl;
	cin>>_CarNumber;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getchar();*/
	
	cout << "Enter the Registration Number of car: " << endl;
    getline(cin,_RegistrationNumber);


	cout << "Enter the Name of the car:" << endl;
	getline(cin, _NameOfCar);
	
	cout << "Enter the name of the manufacturing company:" << endl;
	getline(cin,_Make);
	
	cout << "Enter the model of the car:" << endl;
	getline(cin,_Model);
	
	cout << "Enter the Cubic Centimeter(CC):" << endl;
	getline(cin,_CubicCentimeter);

	cout << "Enter the colour of the car:" << endl;
	getline(cin,_Colour);

	cout << "Enter type of the car:" << endl;
	getline(cin,_Type);

	cout << "Enter the name of the owner:" << endl;
	getline(cin,_NameOfowner);

	cout << "Enter the price of the car:" << endl;
	getline(cin,_price);
	
	cout << "New or second hand:" << endl;
	getline(cin,_NewOrOld);
	

    Mycars << endl;

	Mycars << "Car I.D N.O: " << HoldFile<<endl;
	Mycars << "Registration Number: " << _RegistrationNumber << endl;
	Mycars << "Name od the car: " << _NameOfCar<<endl;
	Mycars << "Manufactured by: " << _Make<<endl;
	Mycars << "Model: " << _Model << endl;
	Mycars << "Cubic Centimeter(CC): " << _CubicCentimeter << endl;
	Mycars << "Colour of car: " << _Colour << endl;
	Mycars << "Type of car: " << _Type << endl;
	Mycars << "Name of the owner: " << _NameOfowner << endl;
	Mycars << "Price of the car: " << _price << endl;
	Mycars << "New or Secondhand: " << _NewOrOld << endl;
	Mycars << "____________________________________________________________________" << endl;

	Mycars.close();

	

	

	system("CLS");
	

}

void CarShowroom::DisplayCars()
{
	string line;
	string FinalFile;


	
	
	for (int i = 0; i <= 9999; i++)
	{
		std::string HoldFile = to_string(i);
		FinalFile = "DB/" + HoldFile + ".txt";
		ifstream MyCars(FinalFile);

		if (MyCars.is_open())
		{
			while (getline(MyCars, line))
			{
				cout << line << endl;

			}
			MyCars.close();

		}
	
	}
		
}



void CarShowroom::DelCar()
{
	string HoldFile,FinalFile;
	
	while (HoldFile.length() != 4)
	{
		cout << endl;
		cout << "Enter The 4 digit I.D number of Car:" << endl;
		getline(cin, HoldFile);

		if (HoldFile.length() != 4)
		{

			cout << "Try again! make sure you have enterd 4 digit number:" << endl;
		}
	}
	


	FinalFile = "DB/" + HoldFile + ".txt";

	if (remove(FinalFile.c_str()) != 0)
		perror("Error deleting file");
	else
		cout<<("File successfully deleted")<<endl;
}

void CarShowroom::ModifyCar()
{
	
		
	string HoldFile;
	string FinalFile;

	while (HoldFile.length() != 4)
	{
		cout << endl;
		cout << "Enter The 4 digit I.D number of Car:" << endl;
		getline(cin, HoldFile);

		if (HoldFile.length() != 4)
		{

			cout << "Try again! make sure you have enterd 4 digit number:" << endl;
		}


	}
	FinalFile = "DB/" + HoldFile + ".txt";

     fstream Mycars(FinalFile);
	
	if (Mycars.is_open())
	{
		cout << "Enter the Registration Number of car: " << endl;
		getline(cin, _RegistrationNumber);

		cout << "Enter the Name of the car:" << endl;
		getline(cin, _NameOfCar);

		cout << "Enter the name of the manufacturing company:" << endl;
		getline(cin, _Make);

		cout << "Enter the model of the car:" << endl;
		getline(cin, _Model);

		cout << "Enter the Cubic Centimeter(CC):" << endl;
		getline(cin, _CubicCentimeter);

		cout << "Enter the colour of the car:" << endl;
		getline(cin, _Colour);

		cout << "Enter type of the car:" << endl;
		getline(cin, _Type);

		cout << "Enter the name of the owner:" << endl;
		getline(cin, _NameOfowner);

		cout << "Enter the price of the car:" << endl;
		getline(cin, _price);

		cout << "New or second hand:" << endl;
		getline(cin, _NewOrOld);
		
		system("CLS");

		cout << "CAR DATA SUCCESSFULLY MODIFIED......"<< endl;
		

		Mycars << endl;

		Mycars << "Car ID NO: " << HoldFile << endl;
		Mycars << "Registration Number: " << _RegistrationNumber << endl;
		Mycars << "Name od the car: " << _NameOfCar << endl;
		Mycars << "Manufactured by: " << _Make << endl;
		Mycars << "Model: " << _Model << endl;
		Mycars << "Cubic Centimeter(CC): " << _CubicCentimeter << endl;
		Mycars << "Colour of car: " << _Colour << endl;
		Mycars << "Type of car: " << _Type << endl;
		Mycars << "Name of the owner: " << _NameOfowner << endl;
		Mycars << "Price of the car: " << _price << endl;
		Mycars << "New or Secondhand: " << _NewOrOld << endl;
		Mycars << "________________________________________________________________" << endl;

	
		Mycars.close();
		
	}

	else
	{
		perror("Error modifying file");
	}
	
}
void CarShowroom::SearchCar()
{

	string HoldFile;
	string FinalFile;

	while (HoldFile.length() != 4)
	{
		cout << endl;
		cout << "Enter The 4 digit I.D number of Car:" << endl;
		getline(cin, HoldFile);

		if (HoldFile.length() != 4)
		{

			cout << "Try again! make sure you have enterd 4 digit number:" << endl;
		}
	}
	FinalFile = "DB/" + HoldFile + ".txt";


	string GetData;
	ifstream MyCars(FinalFile);
	if (MyCars.is_open())
	{
		while (getline(MyCars, GetData))
		{
			cout << GetData << endl;
		}
		MyCars.close();
	}

	else perror("Error finding file");

	
}