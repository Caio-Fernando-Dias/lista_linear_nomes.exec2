#include "lista.hpp"

int main(){
	setlocale(LC_ALL,"Portuguese");

	Lista l;
	LVazia(&l);

	LPeganomes(&l);
	cout << "| Imprimindo lista de nomes original |" << endl;
	LImprime(&l);


	LRemoveRepetidos(&l);
	cout << "| Imprimindo a lista de nomes removendo os nomes repetidos |" << endl;
	LImprime(&l);

	return 0;
}
