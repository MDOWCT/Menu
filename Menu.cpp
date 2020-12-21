#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	//To confirm your choice, press enter
	const int max_values = 3;
	int choice = 0;
	int num = 0;
	int arr_choice[max_values] = { 0, 1, 2 };
	string values[max_values] = { "TEST1", "TEST2", "TEST3" };
	while (true)
	{
		if (num < 0)
		{
			num = 0;
		}
		else if (num >= max_values)
		{
			num = max_values - 1;
		}

		for (int i = 0; i < max_values; i++)
		{
			if (arr_choice[i] == num)
			{
				cout << " " << values[i] << "\t<====\n";
			}
			else
			{
				cout << values[i] << "\n";
			}
		}

		choice = _getch();
		if (choice == 72)
		{
			num--;
		}
		if (choice == 80)
		{
			num++;
		}

		switch (num)
		{
		case 0:
			if (choice == '\r')
			{
				system("cls");
				cout << "Test1 works succesfully!\n";
				_getch();
				break;
			}
			else
			{
				break;
			}
		case 1:
			if (choice == '\r')
			{
				system("cls");
				cout << "Test2 works succesfully\n";
				_getch();
				break;
			}
			else
			{
				break;
			}
		case 2:
			if (choice == '\r')
			{
				system("cls");
				cout << "Test3 works succesfully!\n";
				_getch();
				break;
			}
			else
			{
				break;
			}
		}
		system("cls");
	}
}
