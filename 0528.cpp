#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	int number;
	int mass_number[8] = { 0,0,0,0,0,0,0,0 };
	cout << "Введіть число від 0 до 255" << endl;
	cin >> number;

	if (number > 255)
	{
		cout << "Помилка.. Ваше число більше 255";
		return 0;
	}
	if (number >= 128)
	{
		mass_number[0] = 1;
		number -= 128;
	}
	if (number >= 64)
	{
		mass_number[1] = 1;
		number -= 64;
	}
	if (number >= 32)
	{
		mass_number[2] = 1;
		number -= 32;
	}
	if (number >= 16)
	{
		mass_number[3] = 1;
		number -= 16;
	}
	if (number >= 8)
	{
		mass_number[4] = 1;
		number -= 8;
	}
	if (number >= 4)
	{
		mass_number[5] = 1;
		number -= 4;
	}
	if (number >= 2)
	{
		mass_number[6] = 1;
		number -= 2;
	}
	if (number >= 1)
	{
		mass_number[7] = 1;
		number -= 1;
	}
	for (int num = 0; num < 8; num++)
	{
		cout << mass_number[num];
	}
	return 0;
}