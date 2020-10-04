#include <iostream>
#include <cstdio>
using namespace std;
string userName;
int age;
int moonAge;

void calculateMoonAge() 
{
	moonAge = age * 13.5;
	cout << userName << " Your age in the moon is " << moonAge << endl;
}

int main()
{
	cout << "What is your name? ";
	cin >> userName;
	cout << "Hello " << userName << " what is your age? ";
	cin >> age;
	while(age <= 0)
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

