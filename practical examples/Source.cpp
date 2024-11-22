#include <iostream>

using namespace std;

int main()
{
	// Зациклить программу «Калькулятор», используя цикл с постусловием.
	char answer;
	double a, b;
	int choice;
	do{
		cout << "Enter two number: ";
		cin >> a >> b;
		cout << "1.A+B\n2.A-B\n3.A*B\n4.A/B\n";
		cout << "Make your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "A+B=" << a + b;
			break;
		case 2:
			cout << "A-B=" << a - b;
			break;
		case 3:
			cout << "A*B=" << a * b;
			break;
		case 4:
			cout << "A/B=" << a / b;
			break;
		default:
			cout << "Incorrect choice!";
		}
		cout << endl;
		cout << "Continue?(yes/no) ";
		cin >> answer;
	} while (answer == 'y');

	// Написать программу, которая выводит на экран 
	// все "счастливые" номера трамвайных билетов и подсчитывает их общее количество.
	int i = 100000, counter = 0, iter = 0;
	do
	{
		int d1 = i % 10;
		int d2 = i / 10 % 10;
		int d3 = i / 100 % 10;
		int d4 = i / 1000 % 10;
		int d5 = i / 10000 % 10;
		int d6 = i / 100000;
		if (d1 + d2 + d3 == d4 + d5 + d6)
		{
			cout << i << '\t';
			counter++;
			iter++;
		}
		if (iter != 0 && iter % 500 == 0)
		{
			system("pause");
			iter = 0;
		}
		i++;
	}
	while (i <= 999999);
	cout << "\nQuantity of lucky tickets: " << counter;
	cout << endl << endl;

	return 0;
}