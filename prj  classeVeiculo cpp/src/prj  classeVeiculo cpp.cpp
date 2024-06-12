//============================================================================
// Name        : prj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

// Classe base: veiculo
class Veiculo {
private:
	std::string modelo;

protected:
	int ano;

public:
	Veiculo(const std::string &mod, int a) :
		    modelo(mod), ano(a) {
	}

	void exibirInformaçoes() {
		std::cout << "Modelo: " << modelo <<", Ano: " << ano << std::endl;
	}
};

// Classe derivada: Carro(herda veiculo)
class Carro: public Veiculo {
private:
	std::string marca;

public:
	Carro(const std::string &m, const std::string &mod, int a) :
			Veiculo(mod, a), marca(m) {
	}

	void exibirDetalhes() {
		std::cout << "Marca: " << marca << ", ";
	}
};
