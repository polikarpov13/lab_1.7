#pragma once 
class Payment {
	double rate, experience, �nterest, spent, income;
public:

	double Getrate() const { return rate; }
	double Getexperience() const { return experience; }
	double Get�nterest() const { return �nterest; }
	double Getspent() const { return spent; }
	double Getincome() const { return income; }

	void Setrate(double value) { rate = value; }
	void Setexperience(double value) { experience = value; }
	void Set�nterest(double value) { �nterest = value; }
	void Setspent(double value) { spent = value; }
	void Setincome(double value) { income = value; }

	void Init(double, double, double, double, double);
	void Read();
	void Display();
	double accrued();
	double �nterestt();
	double incomee();
	double salary();
};

