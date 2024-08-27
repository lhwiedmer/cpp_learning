#include "Retangulo.hpp"
#include <iostream>

int main() {
	Retangulo r1;
	std::cout << "Escreva a altura do retangulo: ";
	std::cin >> r1.h;
	std::cout << "Escreva a largura do retangulo: ";
	std::cin >> r1.w;

	std::cout << "A area do retangulo eh: " << r1.calculaArea(r1.h, r1.w) << std::endl;
	std::cout << "O perimetro do retangulo eh: " << r1.calculaPerimetro(r1.h, r1.w) << std::endl;

	return 0;
}