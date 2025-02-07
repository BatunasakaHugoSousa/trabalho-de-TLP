#include <iostream>
using namespace std;
void main() {
	int N1, N2, N1decimal, N2decimal;
	cin >> N1 >> N1decimal >> N2 >> N2decimal;
	if (N1 < 37 && N2 < 37 || N2 < 37)
	{
		cout << "normal";
	}
	else
	{
		if (N1 == N2 && N1decimal == N2decimal)
		{
			cout << "febre manteve";
		}
		else
		{
			if (N1 < N2)
			{
				cout << "febre subiu";
			}
			else
			{
				if (N1 > N2)
				{
					cout << "febre baixou";
				}
				else
				{
					if (N1decimal < N2decimal)
					{
						cout << "febre subiu";
					}
					else
					{
						if (N1decimal > N2decimal)
						{
							cout << "febre baixou";
						}
					}
				}
			}
		}
	}
}