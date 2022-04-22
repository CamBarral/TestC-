#include "Person.h"
#include <string>
#include <iostream>

using namespace std;
Person::Person()
{
	mFirstName = "Default";
	mLastName = "Default";
	mBirthDate = "Default";

	mMoney = 25320;
	mGender = "Default";

	//The car he / she has
	mCar = nullptr;
}

Person::Person(string firstname, string lastname, string birthdate, string gender, Car* car)
{
	mFirstName = firstname;
	mLastName = lastname;
	mBirthDate = birthdate;

	mMoney = 25320;
	mGender = gender;

	//The car he / she has
	mCar = car;
}

Person::Person(std::string firstname, std::string lastname, std::string birthdate, std::string gender)
{
	mFirstName = firstname;
	mLastName = lastname;
	mBirthDate = birthdate;

	mMoney = 25320;
	mGender = gender;

	//The car he / she has
	mCar = nullptr;
}

Person::~Person()
{

}

string Person::GetFirstName()
{
	return mFirstName;
}

string Person::GetLastName()
{
	return mLastName;
}

string Person::GetBirthDate()
{
	return mBirthDate;
}

int Person::GetMoney()
{
	return mMoney;
}

string Person::GetGender()
{
	return mGender;
}

void Person::Introduce()
{
	cout << "> The person " << mFirstName << " was created" << endl;
	cout << "> " << mFirstName << " " << mLastName << " was born on " << mBirthDate << " and is a " << mGender << endl;
	cout << "> " << mFirstName << " has " << mMoney << "$ and has ";

	if (mCar == nullptr)
	{
		cout << "no car" << endl;
	}
	else
	{
		mCar->SumUp();
	}
}

void Person::Buy()
{
	
}

void Person::Sell()
{

}

void Person::Paint()
{

}


