#pragma once

#include <string>
#include "Colors.h"

class Car
{
private:
	std::string mBrand;
	std::string mModel;
	Colors mColors;
	std::string mLicense;
	int mMileage;
	int mCost;

public:
	Car();
	Car(std::string brand, std::string model, Colors colors, std::string license, int mileage, int cost);
	~Car();

	void Introduce();
	void SumUp();

	void UpdateMileage();
	void UpdateColor();

	std::string GetStringColors();
};


