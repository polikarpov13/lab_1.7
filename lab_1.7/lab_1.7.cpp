#include "Money.h" 
#include "Payment.h" 
#include <Windows.h> 
#include <iostream> 

using namespace std;

int main()
{

	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);

	Payment z;

	cout << " Payment: " << endl;

	z.Read();

	cout << " ========================================================================= ";

	z.Display();

	Money s;

	cout << " ========================================================================= " << endl;

	cout << " Money: " << endl;

	s.Read();

	cout << " ========================================================================= ";

	s.Display();

	cout << " \n ";

	s.Сomparison();

	return 0;

}