#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, B, A = 0, R[5], NS[5], C = 0;
	srand(time(0));
	for (i = 0; i < 5; i++)
	{
		R[i] = rand() % 49 + 1;
		/*for (B = 0; B < 5; B++) //sistema para números não repetidos-não terminado
		{
			if (R[i] == R[B])
			{
				C = C + 1;
				i = i - 1;
			}
		}*/
		cout << R[i] << "\n";
	}
	cout << C;
	cout << ("dá me 5 números de 1 a 50\n");
	for (i = 0; i < 5; i++)
		cin >> NS[i];
	for (i = 0; i < 5; i++)
	{
		for (B = 0; B < 5; B++)
		{
			if (R[i] == NS[B])
				A = A + 1;
		}
	}
	if (A < 5)
	{
		cout << "que pena\nacertaste " << A << " números\n" << "os números eram:";
		for (i = 0; i < 5; i++)
			cout << " " << R[i];
	}
	else
		cout << ("PARABENS!!\nACERTASTE TODOS OS NÚMEROS!!");
}