#pragma once

#include "Node.hpp"

struct ListaCadastral {

	Node* Primeiro;
	Node* Atual;

};

void retira(ListaCadastral& L, char X, bool& Ok);

void insere(ListaCadastral& L, char X, bool& Ok);

bool estaNaLista(ListaCadastral& L, char X);

void cria(ListaCadastral& L);

bool vazia(ListaCadastral& L);

bool cheia(ListaCadastral& L);

void pegaOPrimeiro(ListaCadastral& L, char& X, bool& temElemento);

void pegaOProximo(ListaCadastral& L, char& X, bool& temElemento);