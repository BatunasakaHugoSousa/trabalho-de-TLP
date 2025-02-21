#include <iostream> 
#include <locale.h>
using namespace std;
int P[10];
float A[10];
void registrar() {
	int i;
	cout << "diz me o peso(kg) e a altura(metros[pode ter virgulas{tens de usar o ponto}]) de 10 pessoas\n";
	for (i = 0; i < 2; i++)
	{
		cout << "(" << i + 1 << "/10)\n";
		cin >> P[i];
		cin >> A[i];
	}
	return;
}
void calcular() {
	int O;
	float C;
	cout << "qual é a pessoa que queres calcular?\n";
	cin >> O;
	C = P[O - 1] / (A[O - 1] * A[O - 1]);
	cout << C << "\n";
	if (C < 18.5)
	{
		cout << "esta pessoa está abaixo do peso ideal\n";
	}
	if (C >= 18.5 && C <= 24.9)
	{
		cout << "esta pessoa está no peso ideal\n";
	}
	if (C >= 25 && C <= 30)
	{
		cout << "esta pessoa está acima do peso ideal\n";
	}
	if (C > 30)
	{
		cout << "esta pessoa está muito acima do peso ideal\n";
	}
	return;
}
void media() {
	int i;
	float C[10], M, T = 0;
	for (i = 0; i < 2; i++)
	{
		C[i] = P[i] / (A[i] * A[i]);
		T = T + C[i];
	}
	M = T / 2;
	cout << "a media é " << M;
	return;
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, O;
	cout << "o que quer fazer?\n";
	do {
		cout << "\n1 para registrar\n2 para calcular\n3 para media\n0 para sair\n";
		cin >> O;
		switch (O) {
		case 1:
			registrar();
			break;
		case 2:
			calcular();
			break;
		case 3:
			media();
			break;
		}
	} while (O != 0);
	cout << "adeus";
}