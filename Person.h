#pragma once
#include <string>
#include "Car.h"

class Person
{
private:
std::string mFirstName;
std::string mLastName;
std::string mBirthDate;
int mMoney;
std::string mGender;
//His / Her Car
Car* mCar;

public:
	Person();
	Person(std::string firstname, std::string lastname, std::string birthdate, std::string gender, Car* car);
	Person(std::string firstname, std::string lastname, std::string birthdate, std::string gender);
	//Add constructor with abilities parameter

	//Destructor
	~Person();

	//Getters / Setters
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetBirthDate();
	int GetMoney();
	std::string GetCar();
	std::string GetGender();

	//Display Trainer info
	void Introduce();
	//Buy a Car
	void Buy();
	//Sell car
	void Sell();
	//Roll in a car
	void Drive();
	//Paint a car
	void Paint();



};

