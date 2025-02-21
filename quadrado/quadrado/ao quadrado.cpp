#include <iostream> 
#include <locale.h>
using namespace std;
int calculo(int N, int M) {
	M = N * N;
	return M;
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int N, M = 0;
	cout << "que número queres?\n";
	cin >> N;
	M = calculo(N, M);
	cout << M;
}