#ifndef PESSOA
#define PESSOA

class Pessoa {
	public:
		bool validarCPF(unsigned long cpfTeste);
		char nome[50];
		unsigned long cpf;
		unsigned char idade;
};

#endif