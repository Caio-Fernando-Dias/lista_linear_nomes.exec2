#ifndef LISTA_HPP
#define LISTA_HPP

#include<iostream>
#include<string>
#include<fstream>

#define MAXTAM 100

using namespace std;

typedef struct Item{
	string valor;
}Item;

typedef struct Lista{
	Item vetor[MAXTAM];
	int primeiro;
	int ultimo;
}Lista;

void LVazia(Lista *l);
void LInserir(Lista *l, Item d);
void LPeganomes(Lista *l);
void LRemoveRepetidos(Lista *l);
void LImprime(Lista *l);

#endif
