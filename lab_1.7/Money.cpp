#include "Money.h" 
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 

using namespace std;

void Money::Init(long x, long y, long f, long w)
{

	UAH = x;

	UAH2 = y;

	lungs = f;

	multiplicationn = w;

}

void Money::Init1(double h, double z, double r, double j)
{

	kopec = h;

	kopec1 = z;

	lungs1 = r;

	multiplicationn1 = j;

}



void Money::Read()

{

	long x, y, f, w;

	double h, z, r, j;

	cout << " �����: " << endl;

	cout << " ����� ����� ���� ����� = "; cin >> x;

	cout << " ����� ����� ���� ����� = "; cin >> y;

	cout << " ������� ����� ������ = "; cin >> f;

	cout << " ����� ��� �������� ������ = "; cin >> w;

	cout << " ������:" << endl;

	cout << " ������ ����� ���� ����� = "; cin >> h;

	cout << " ������ ����� ���� ����� = "; cin >> z;

	cout << " ������� ����� ������ = "; cin >> r;

	cout << " ����� ��� �������� ������ = "; cin >> j;



	Init(x, y, f, w);

	Init1(h, z, r, j);

}

long Money::addition()

{

	return UAH + UAH2;

}

long Money::subtraction()

{

	return UAH - UAH2;

}

long Money::divisionofsums()

{

	return addition() / subtraction();

}

long Money::lungss()

{

	return sqrt(lungs) / divisionofsums();

}

long Money::multiplication()

{

	return sqrt(lungs) * multiplicationn;

}

void Money::Display()

{

	cout << endl;

	cout << " ��������� ������ = " << addition() << endl;

	cout << " ³������� ������ = " << subtraction() << endl;

	cout << " ĳ����� ��� ������ = " << divisionofsums() << endl;

	cout << " ĳ����� ��� �� ������� ����� ��� ������ = " << lungss() << endl;

	cout << " M������� �� ������� ����� ��� ������ = " << multiplication() << endl;

	cout << " ��������� ������ = " << addition1() << endl;

	cout << " ³������� ������ = " << subtraction1() << endl;

	cout << " ĳ����� ��� ������ = " << divisionofsums3() << endl;

	cout << " ĳ����� ��� �� ������� ����� ��� ������ = " << lungss3() << endl;

	cout << " M������� �� ������� ����� ��� ������ = " << multiplication3() << endl;

}

double Money::addition1()

{

	return (kopec * 0.01) + (kopec1 * 0.01);

}

double Money::subtraction1()

{

	return (kopec * 0.01) - (kopec1 * 0.01);

}

double Money::divisionofsums3()

{

	return addition1() / subtraction1();

}

double Money::lungss3()

{

	return sqrt((lungs1) * 0.01) / divisionofsums3();

}

double Money::multiplication3()

{

	return sqrt((lungs1) * 0.01) - (multiplicationn1 * 0.01);

}

void Money::�omparison()

{

	if (multiplication() == multiplication3())

		cout << multiplication() << "  �������  " << multiplication3() << " \n ";

	if (multiplication() > multiplication3())

		cout << multiplication() << "  �����  " << multiplication3() << " \n ";

	if (multiplication() < multiplication3())

		cout << multiplication() << "  �����   " << multiplication3() << " \n ";

}