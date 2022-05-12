#include "lista.hpp"

void LVazia(Lista *l){
	l->primeiro = 0;
	l->ultimo = 0;
}

void LInserir(Lista *l, Item d){
	if(l -> ultimo >= MAXTAM){
		cout << "Lista cheia!" << endl;
	}else{
		l->vetor[l -> ultimo] = d;
		l->ultimo++;
	}
}

void LPeganomes(Lista *l){
	
	string nomes;
	Item aux;

	ifstream arq;
	arq.open("nomes.txt");
	
	if(arq.is_open()){
		while(!arq.eof()){
			getline(arq, nomes);
			aux.valor = nomes;
			LInserir(l, aux);
		}
		arq.close();	
	}
}

void LRemoveRepetidos(Lista *l){
	for(int i = l->primeiro; i<l->ultimo - 1; i++){
		for(int j = i + 1; j < l->ultimo; j++){
			if(l->vetor[i].valor == l->vetor[j].valor){
				l->vetor[j].valor = "\0";
			}
		}
	}
}

void LImprime(Lista *l){
	for(int i=l->primeiro; i<l->ultimo; i++){
		cout << l->vetor[i].valor << endl;
	}
		cout << endl;
}







