#include <iostream>
#include <string.h>
using namespace std;

int Hexidecimal(char str[10])
{
	int i, s, k, p;
	s = 0;
	p = strlen(str) - 1;
	for (int i = 0; str[i] != '\0'; i++)
	{
		switch (toupper(str[i]))
		{
		case 'A': k = 10; break;
		case 'B': k = 11; break;
		case 'C': k = 12; break;
		case 'D': k = 13; break;
		case 'E': k = 14; break;
		case 'F': k = 15; break;
		case '1': k = 1; break;
		case '2': k = 2; break;
		case '3': k = 3; break;
		case '4': k = 4; break;
		case '5': k = 5; break;
		case '6': k = 6; break;
		case '7': k = 7; break;
		case '8': k = 8; break;
		case '9': k = 9; break;
		case '0': k = 0; break;
		}
		s = s + k * pow(16, p);
		p--;
	}
	cout << s << endl;
	return 0;
}

void main()
{
	setlocale(LC_ALL, "");
	char s[10];
	char str1;
	cout << "Введите шестнадцатеричное число: "; cin >> s;
	cout << "Номер результата в десятичном виде: ";
	Hexidecimal(s);
	cout << endl;

	main();
}