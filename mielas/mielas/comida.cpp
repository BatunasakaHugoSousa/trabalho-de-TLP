#include<iostream>
using namespace std;
void pagamento(int pessoas, int valores) {
	cout << valores / pessoas;
}
void main()
{
	int pessoas, valores;
	cin >> pessoas >> valores;
	pagamento(pessoas, valores);
}