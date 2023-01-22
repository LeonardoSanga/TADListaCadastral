#include <iostream>

#include "ListaCadastral.hpp"
#include "OperacoesNaoPrimitivas.hpp"

using namespace std;

int main() {

	ListaCadastral L;

	cout << "Criacao de uma Lista Cadastral Ordenada" << endl;
	cria(L);

	bool Ok, temElemento;
	char X;

	cout << "Insercao dos elementos K, E, A, G, Z e B, respectivamente" << endl;
	insere(L, 'K', Ok);
	insere(L, 'E', Ok);
	insere(L, 'A', Ok);
	insere(L, 'G', Ok);
	insere(L, 'Z', Ok);
	insere(L, 'B', Ok);

	cout << "Lista 1: ";
	imprimeTodos(L);
	cout << endl;

	cout << "\nPercorrendo a Lista" << endl;

	pegaOPrimeiro(L, X, temElemento);

	if (temElemento) {

		cout << X << " ";

	}

	pegaOProximo(L, X, temElemento);

	if (temElemento) {

		cout << X << " ";

	}

	pegaOProximo(L, X, temElemento);

	if (temElemento) {

		cout << X << " ";

	}
	pegaOProximo(L, X, temElemento);

	if (temElemento) {

		cout << X << " ";

	}
	pegaOProximo(L, X, temElemento);

	if (temElemento) {

		cout << X << " ";

	}

	pegaOProximo(L, X, temElemento);

	if (temElemento) {

		cout << X << " ";
		cout << endl;

	}
	else {

		cout << "Fim da fila" << endl;

	}

	cout << "\nRetirada dos elementos Z, E, H e A respectivamente" << endl;
	retira(L, 'Z', Ok);

	if (!Ok) {

		cout << "Elemento Z nao esta na Lista" << endl;

	}

	retira(L, 'E', Ok);
	if (!Ok) {

		cout << "Elemento E nao esta na Lista" << endl;

	}

	retira(L, 'H', Ok);
	if (!Ok) {

		cout << "Elemento H nao esta na Lista" << endl;

	}

	retira(L, 'A', Ok);
	if (!Ok) {

		cout << "Elemento A nao esta na Lista" << endl;

	}

	cout << "Lista 1: ";
	imprimeTodos(L);
	cout << endl;

	cout << "\nBusca dos elementos B e A na Lista" << endl;
	if (estaNaLista(L, 'B')) {

		cout << "B esta na lista" << endl;

	}
	else {

		cout << "B nao esta na Lista";

	}

	if (estaNaLista(L, 'A')) {

		cout << "A esta na lista" << endl;

	}
	else {

		cout << "A nao esta na Lista";

	}

	ListaCadastral L2;

	cout << "\n\nCriacao de uma segunda Lista Cadastral" << endl;
	cria(L2);

	cout << "Insercao dos elementos G, A, I, H e B, respectivamente" << endl;
	insere(L2, 'G', Ok);
	insere(L2, 'A', Ok);
	insere(L2, 'I', Ok);
	insere(L2, 'H', Ok);
	insere(L2, 'B', Ok);

	cout << "Lista 2: ";
	imprimeTodos(L2);
	cout << endl;

	ListaCadastral L3;
	cria(L3);

	cout << "\nInterseccao de L1 com L2: ";
	interseccao(L, L2, L3);

	imprimeTodos(L3);
	cout << endl;

	cout << "\nPosicao do G em L1: " << posicao(L, 'G') << endl;
	cout << "Posicao do G em L2: " << posicao(L2, 'G') << endl;
	cout << "Posicao do G em L1 interseccao L2: " << posicao(L3, 'G') << endl;

	cria(L3);

	cout << "\nElementos que estao na Lista 2 mas nao na Lista 1: ";
	emL2MasNaoEmL1(L, L2, L3);

	imprimeTodos(L3);
	cout << endl;

	return 0;
}