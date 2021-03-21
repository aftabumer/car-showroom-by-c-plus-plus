#include<iostream>
#include"string"
#include<Windows.h>

using namespace std;

class CarShowroom
{

private:

	int _CarNumber;
	string _RegistrationNumber;
	string _NameOfCar;
	string _Make;
	string _Model;
	string _CubicCentimeter;
	string _Colour;
	string _Type;
	string _NameOfowner; 
	string _price;
	string _NewOrOld;
	

public:
	
	void AddCar();
	void ModifyCar();
	void DelCar();
	void DisplayCars();
	void SearchCar();

};

