#include "Payment.h" 
#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 

using namespace std;

string surname;
string name;
string middlename;

void Payment::Init(double x, double y, double p, double z, double v) {
	rate = x;
	experience = y;
	�nterest = p;
	spent = z;
	income = v;
}

void Payment::Read() {
	double x, y, p, z, v;

	cout << " ������� = "; cin >> surname;
	cout << " ��� = "; cin >> name;
	cout << " �� ������� = "; cin >> middlename;
	cout << " ������ = "; cin >> x;
	cout << " г� ����������� �� ������ = "; cin >> v;
	cout << " ³������ �������� = "; cin >> p;
	cout << " ʳ������ ������������� ��� � ����� = "; cin >> z;
	cout << " ʳ������ ������� ��� � ����� = "; cin >> y;

	Init(x, y, p, z, v);
}

void Payment::Display() {
	cout << endl;

	cout << " ������� = " << surname << endl;
	cout << " ��� = " << name << endl;
	cout << " �� ������� = " << middlename << endl;
	cout << " ʳ������ ������������� ��� � ����� = " << spent << " ��� " << endl;
	cout << " ʳ������ ������� ��� � ����� = " << experience << " ��� " << endl;
	cout << " ����������� ������� � �������� ���� = 14 % " << endl;
	cout << " ���������� ���������� ���� = " << �nterestt() << endl;
	cout << " ���������� �������� ���� = " << accrued() << endl;
	cout << " ���������� ����, �� �������� �� ���� = " << salary() << endl;
	cout << " ���� = " << incomee() << " ���� " << endl;
}

double Payment::�nterestt() {
	return (rate / 100 * �nterest) + rate;
}

double Payment::accrued() {
	return ((�nterestt()) / 100 * 14);
}

double Payment::salary() {
	return �nterestt() - accrued();
}

double Payment::incomee() {
	return 2021 - income;
}