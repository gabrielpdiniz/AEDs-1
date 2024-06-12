                                                                          //============================================================================
// Name        : prj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

// Definiçao da classe Carrp
class Carro {
public:
	// Membros da classe
	std::string marca;
	std::string modelo;
	int ano;

	// Construtor
	Carro(const std::string &m, const std::string &mod, int a) :
			marca(m), modelo (mod), ano(a)  {
	}

	// Construtor para criar um carro vazio
	Carro() : marca(""), modelo(""), ano(0) {
	}

	// Metodo para exibir informaçoes sobre o carro
	void exibirInformaçoes() {
		std::cout << "Marca: " << marca << ", Modelo: " << modelo <<", Ano: " << ano << std::endl;
	}
};

int main(void) {
	// Criando um objeto da classe Carro
	Carro meuCarro;

	// Criando um objeto da classe Carro usando o construtor
	//Carro meuCarro("Toyota", "Corolla", 2022);

	// Atribuindo valores aos membros da classe
	meuCarro.marca = "Toyota";
	meuCarro.modelo = "Corolla";
	meuCarro.ano = 2022;

	// Chamando o metodo para exibir informaçoes sobre o carro
	meuCarro.exibirInformaçoes();

	return 0;
}


