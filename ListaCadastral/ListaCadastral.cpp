#include <iostream>

#include "ListaCadastral.hpp"

void ProcuraX(ListaCadastral L, char X, Node*& P, Node*& Anterior, bool& achouX) {

	P = L.Primeiro;
	Anterior = NULL;

	while ((P != NULL) && (P->Info < X)) {

		Anterior = P;
		P = P->Next;

		if ((P != NULL) && (P->Info == X)) {

			achouX = true;

		}
		else {

			achouX = false;

		}

	}

}

void retira(ListaCadastral& L, char X, bool& Ok) {

	Node* P;
	Node* Anterior;

	bool achouX;

	ProcuraX(L, X, P, Anterior, achouX);

	if (achouX) {

		if (P != L.Primeiro) {

			Anterior->Next = P->Next;
			delete P;
			P = NULL;
			Anterior = NULL;

		}
		else {

			L.Primeiro = L.Primeiro->Next;
			delete P;
			P = NULL;

		}

		Ok = true;

	}
	else {

		Ok = false;

	}

}

void insere(ListaCadastral& L, char X, bool& Ok) {

	Node* P;
	Node* Anterior = NULL;
	bool achouX = false;

	ProcuraX(L, X, P, Anterior, achouX);

	if (!achouX) {

		Ok = true;

		Node* LAux = new Node;

		if (P != L.Primeiro) {

			Anterior->Next = LAux;

			LAux->Info = X;
			LAux->Next = P;
			LAux = NULL;

			P = NULL;
			Anterior = NULL;

		}
		else {

			L.Primeiro = LAux;

			L.Primeiro->Info = X;
			L.Primeiro->Next = P;

			LAux = NULL;
			P = NULL;
		}
	}
	else {

		Ok = false;

	}

}

bool estaNaLista(ListaCadastral& L, char X) {

	Node* P = L.Primeiro;

	while ((P != NULL) && (P->Info < X)) {

		P = P->Next;

	}

	if ((P != NULL) && (P->Info == X)) {

		return true;

	}

	return false;
}

void cria(ListaCadastral& L) {

	L.Primeiro = NULL;
	L.Atual = NULL;

}

bool vazia(ListaCadastral& L) {

	if (L.Primeiro == NULL) {

		return true;

	}

	return false;
}

bool cheia(ListaCadastral& L) {

	return false;

}

void pegaOPrimeiro(ListaCadastral& L, char& X, bool& temElemento) {

	if (L.Primeiro != NULL) {

		temElemento = true;
		X = L.Primeiro->Info;

	}
	else {

		temElemento = false;

	}

	L.Atual = L.Primeiro;
}

void pegaOProximo(ListaCadastral& L, char& X, bool& temElemento) {

	if ((L.Atual != NULL) && (L.Atual->Next != NULL)) {

		temElemento = true;
		X = L.Atual->Next->Info;

	}
	else {

		temElemento = false;

	}

	if (L.Atual != NULL) {

		L.Atual = L.Atual->Next;

	}

}