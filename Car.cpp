#include "Car.h"
#include <string>
#include <iostream>

using namespace std;
Car::Car()
{
	mBrand = "Default";
	mModel = "Default";
	mColors = Colors::White;

	mLicense = "Default";
	mMileage = 0;
	mCost = 0;
}

Car::Car(string brand, string model, Colors colors, string license, int mileage, int cost)
{
	mBrand = brand;
	mModel = model;
	mColors = colors;

	mLicense = license;
	mMileage = mileage;
	mCost = cost;
}

Car::~Car()
{

}

//Car caracteristics
void Car::Introduce()
{
	cout << "> The car " << mBrand << " was created" << endl;
	cout << "> It's a " << GetStringColors() << " car with license plate " << mLicense << endl;
	cout << "> With a mileage of " << mMileage << " km, it has a value of " << mCost << " $" << endl;
}

void Car::SumUp()
{
	cout << mBrand << " " << mModel << " (" << mLicense << ")" << endl;
}

//Update Mileage count when Person Drive()
void Car::UpdateMileage()
{

}

//Update Car color when a color is selected in Person Paint()
void Car::UpdateColor()
{

}

std::string Car::GetStringColors()
{
	switch (mColors)
	{
	case Colors::White:
		return "White";
	case Colors::Red:
		return "Red";
	case Colors::Green:
		return "Green";
	case Colors::Blue:
		return "Blue";
	case Colors::Yellow:
		return "Yellow";
	case Colors::Cyan:
		return "Cyan";
	}

	return "Default";
}