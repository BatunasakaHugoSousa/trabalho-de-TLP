#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, R[4], T = 0, A[4], C = 0;
	srand(time(0));
	for (i = 0; i < 4; i++)
	{
		R[i] = rand() % 2 + 0;
		cout << R[i];
	}
	cout << "escolhi 4 números e eles são de 0 a 1\ntente adivinhar eles\n";
	do
	{
	for (i = 0; i < 4; i++)
	{
		cin >> A[i];
		if (A[i] == R[i])
		{
			C = C + 1;
		}
	}
	T = T + 1;
	if (C == 4 && T == 1)
	{
		cout << "GANHASTE!!\nACERTASTE TODOS NA PRIMEIRA TENTATIVA!!\n";
	}
	else
	{
		if (C == 4)
		{
			cout << "GANHASTE!!\nacertaste todos em " << T << " tentativas\n";
		}
		else
		{
			cout << "que pena\nsó acertastes " << C << "\nvamos tentar denovo!\n";
			C = C - C;
		}
	}
	} while (C != 4);
}