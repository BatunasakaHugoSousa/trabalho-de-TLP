#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	int N, R, P;
	char T;
	setlocale(LC_ALL, "Portuguese");
	cout << ("diz o tipo de temperatura\nc para celcius ou f para fahrenheit\n");
	cin >> T;
	switch (T) {
	case 'C':
	case 'c':
		cout << ("celcius\n");
		cout << ("diz o valor da temperatura\n");
		cin >> N;
		R = (N * 1.8 + 32);
		cout << (R);
		cout << "o valor em fahrenheit é " << R;
		break;
	case 'F':
	case 'f':
		cout << ("fahrenheit\n");
		cout << ("diz o valor da temperatura\n");
		cin >> N;
		P = (N - 32) / 1.8;
		cout << (P);
		cout << "o valor em fahrenheit é " << P;
		break;
	default:
		cout << ("tem de ser c ou f!!");
		break;
	}
}