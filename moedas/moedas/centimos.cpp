#include <iostream>
using namespace std;
void main() {
	int i, euros, centimos, P = 0, distribuicao[8] = { 0, 0, 0, 0, 0, 0, 0, 0 }, euro2 = 0, euro1 = 0, cent50 = 0, cent20 = 0, cent10 = 0, cent5 = 0, cent2 = 0, cent1 = 0, totaleuro, totalcent;
	cin >> euros >> centimos;
	for (i = 0; i < 8; i++)
	{
		cin >> distribuicao[i];
		if (i == 0)
		{
			euro2 = distribuicao[i];
		}
		if (i == 1)
		{
			euro1 = distribuicao[i];
		}
		if (i == 2)
		{
			cent50 = distribuicao[i];
		}
		if (i == 3)
		{
			cent20 = distribuicao[i];
		}
		if (i == 4)
		{
			cent10 = distribuicao[i];
		}
		if (i == 5)
		{
			cent5 = distribuicao[i];
		}
		if (i == 6)
		{
			cent2 = distribuicao[i];
		}
		if (i == 7)
		{
			cent1 = distribuicao[i];
		}
	}
	totalcent = cent50 * 50 + cent20 * 20 + cent10 * 10 + cent5 * 5 + cent2 * 2 + cent1;
	while (totalcent >= 200)
	{
		euro2 = euro2 + 1;
		totalcent = totalcent - 200;
	}
	while (totalcent >= 100 && totalcent - 100 != 0)
	{
		euro1 = euro1 + 1;
		totalcent = totalcent - 100;
	}
	totaleuro = euro1 + euro2 * 2;
	if (euros <= totaleuro)
	{
		while (euro1 + euro2 * 2 > totaleuro - euros)
		{
			if (euro1 != 0)
			{
				euro1 = euro1 - 1;
			}
			if (euro1 == 0 && euro2 != 0)
			{
				euro2 = euro2 - 1;
			}
		}
		while (euro1 + euro2 * 2 < totaleuro - euros)
		{
			if (euro1 + (euro2 + 1) * 2 <= totaleuro - euros)
			{
				euro2 = euro2 + 1;
			}
			if ((euro1 + 1) + euro2 * 2 <= totaleuro - euros)
			{
				euro1 = euro1 + 1;
			}
		}
		while (cent50 * 50 + cent20 * 20 + cent10 * 10 + cent5 * 5 + cent2 * 2 + cent1 > totalcent - centimos && P != 1000)
		{
			if (cent1 != 0)
			{
				cent1 = cent1 - 1;
			}
			if (cent1 == 0 && cent2 != 0)
			{
				cent2 = cent2 - 1;
			}
			if (cent2 == 0 && cent5 != 0)
			{
				cent5 = cent5 - 1;
			}
			if (cent5 == 0 && cent10 != 0)
			{
				cent10 = cent10 - 1;
			}
			if (cent10 == 0 && cent20 != 0)
			{
				cent20 = cent20 - 1;
			}
			if (cent20 == 0 && cent50 != 0)
			{
				cent50 = cent50 - 1;
			}
			P = P + 1;
		}
		while (cent50 * 50 + cent20 * 20 + cent10 * 10 + cent5 * 5 + cent2 * 2 + cent1 < totalcent - centimos)
		{
			if ((cent50 + 1) * 50 + cent20 * 20 + cent10 * 10 + cent5 * 5 + cent2 * 2 + cent1 <= totalcent - centimos)
			{
				cent50 = cent50 + 1;
			}
			if (cent50 * 50 + (cent20 + 1) * 20 + cent10 * 10 + cent5 * 5 + cent2 * 2 + cent1 <= totalcent - centimos)
			{
				cent20 = cent20 + 1;
			}
			if (cent50 * 50 + cent20 * 20 + (cent10 + 1) * 10 + cent5 * 5 + cent2 * 2 + cent1 <= totalcent - centimos)
			{
				cent10 = cent10 + 1;
			}
			if (cent50 * 50 + cent20 * 20 + cent10 * 10 + (cent5 + 1) * 5 + cent2 * 2 + cent1 <= totalcent - centimos)
			{
				cent5 = cent5 + 1;
			}
			if (cent50 * 50 + cent20 * 20 + cent10 * 10 + cent5 * 5 + (cent2 + 1) * 2 + cent1 <= totalcent - centimos)
			{
				cent2 = cent2 + 1;
			}
			if (cent50 * 50 + cent20 * 20 + cent10 * 10 + cent5 * 5 + cent2 * 2 + cent1 + 1 <= totalcent - centimos)
			{
				cent1 = cent1 + 1;
			}
		}
		for (i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				distribuicao[i] = euro2;
			}
			if (i == 1)
			{
				distribuicao[i] = euro1;
			}
			if (i == 2)
			{
				distribuicao[i] = cent50;
			}
			if (i == 3)
			{
				distribuicao[i] = cent20;
			}
			if (i == 4)
			{
				distribuicao[i] = cent10;
			}
			if (i == 5)
			{
				distribuicao[i] = cent5;
			}
			if (i == 6)
			{
				distribuicao[i] = cent2;
			}
			if (i == 7)
			{
				distribuicao[i] = cent1;
			}
		}
	}
	for (i = 0; i < 8; i++)
	{
		cout << distribuicao[i] << " ";
	}
}