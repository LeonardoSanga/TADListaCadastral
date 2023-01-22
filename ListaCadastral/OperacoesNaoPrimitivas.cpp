#include <iostream>

#include "OperacoesNaoPrimitivas.hpp"

void imprimeTodos(ListaCadastral& L) {

	bool temElemento;
	char X;

	pegaOPrimeiro(L, X, temElemento);

	while (temElemento == true) {

		std::cout << X << " ";
		pegaOProximo(L, X, temElemento);

	}

}

void interseccao(ListaCadastral& L1, ListaCadastral& L2, ListaCadastral& L3) {

	char X; // elemento de L1
	char Y; // elemento de L2

	bool temElemento; // referente a L1
	bool temElemento2; // referente a L2

	bool Ok;

	pegaOPrimeiro(L1, X, temElemento);

	while (temElemento) {

		pegaOPrimeiro(L2, Y, temElemento2);

		while (temElemento2) {

			if (X == Y) {

				insere(L3, X, Ok);

			}

			pegaOProximo(L2, Y, temElemento2);

		}

		pegaOProximo(L1, X, temElemento);

	}

}
int posicao(ListaCadastral& L, char X) {

	int posicao = 0;
	char Y;
	bool temElemento;

	if (estaNaLista(L, X)) {

		pegaOPrimeiro(L, Y, temElemento);

		while (temElemento) {

			posicao++;

			if (Y == X) {

				break;

			}

			pegaOProximo(L, Y, temElemento);

		}

	}

	return posicao;
}
void emL2MasNaoEmL1(ListaCadastral& L1, ListaCadastral& L2, ListaCadastral& L3) {

	char X;
	bool temElemento;
	bool Ok;

	pegaOPrimeiro(L2, X, temElemento);

	while (temElemento) {

		if (!estaNaLista(L1, X)) {

			insere(L3, X, Ok);

		}

		pegaOProximo(L2, X, temElemento);

	}

}