#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int input;

	cout << "enter active time (minutes) \n";
	cin >> input;
	
	
	input = input * 1000 * 60;

	Sleep(input);

	system("shutdown /s");
	cout << "You PC will shutdown soon";
}
