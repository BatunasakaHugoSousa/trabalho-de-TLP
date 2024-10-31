#include <iostream>
#include <locale.h>
void main()
{
	int kmi, kmf, l;
	setlocale(LC_ALL, "Portuguese");
	std::cout << ("diz quantos kilometros tinhas no inicio?");
	std::cin >> kmi;
	std::cout << ("diz quantos kilometros tinhas no final?");
	std::cin >> kmf;
	std::cout << ("diz quantos litros gastastes?");
	std::cin >> l;
	std::cout << ((kmf - kmi) / l);
}