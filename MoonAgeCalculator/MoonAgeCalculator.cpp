#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
string userName;
int age;
int moonAge;

void calculateMoonAge()
{
	moonAge = age * 13.5;
	cout << "\u001b[33;1m" << userName << " Your age in the moon is \033[0m" << moonAge << "\033[0m" << endl;
}

int main()
{
	cout << "What is your name? ";
	cin >> userName;
	cout << "Hello " << userName << " what is your age? ";
	cin >> age;
	while (age <= 0)
	{
		cin.clear(); //clear the buffer
		cin.ignore(100, '\n'); // clear more char
		cout << "Hello " << userName << " what is your age? ";
		cin >> age;
		if (age != 0)
		{
			break;	
		}
	}
	calculateMoonAge();
	system("pause");
	return 0;
}
