#include <iostream>
#include <stdio.h>

using namespace std;

/**************************************************************
* Para todas as questões abaixo o tamanho do vetor se refere
* ao número de elementos no vetor. Assuma que os vetores são
* alocados com tamanho suficiente para nunca causar estouro de
* buffer.
**************************************************************/

/********************************************
Questão 1: menor elemento

Implemente uma função que retorne o menor elemento
de um vetor.
*********************************************/

int menor(int vet[], int tam);

void teste_menor() {

	cout << "Questão 1: menor elemento" << endl;

	int v[] = {1};
	int v2[] = {6, 4, 3};
	int v3[] = {2, 4, 5, 3};
	int v4[] = {0, 3, -2, 5};

	cout << (menor(v, 1) == 1);
	cout << (menor(v2, 3) == 3);
	cout << (menor(v3, 4) == 2);
	cout << (menor(v4, 4) == -2) << endl;

}

int menor(int v[], int tam) {

	int i;
	int menor = v[0];
	for(i = 0; i < tam; i++)
		menor = v[i] < menor ? v[i]: menor;

	return menor;
}

/********************************************
Questão 2: existe

Implemente a função exist, que retorna true
se um determinado elemento existe dentro de
um vetor.
*********************************************/

bool exist(int vet[], int tam, int elem);

void test_exist() {

    cout << "Questão 2: existe" << endl;

    int v[1] = {1};
    int v2[3] = {1, 2, 3};
    int v3[5] = {1, 2, 3, 4, 5};

    cout << (exist(v,1,1) == true);
    cout << (exist(v2,3,3) == true);
    cout << (exist(v3,5,4) == true);
	cout << (exist(v3,5,6) == false) << endl;
}

bool exist(int vet[], int tam, int elem) {
	int i;
	for(i = 0; i < tam;)
		if(vet[i++] == elem) return true;

	return false;
}


//TODO inserir no fim, independente de existir ou nao


/***************************************************************
Questão 3: inserir

Dado um elemento, um vetor e a quantidade atual de elementos no
vetor, adicionar o elemento no vetor se ele ainda nao existir e
aumentar tamanho em um. Caso o elemento não exista retorne false;
Assuma que o vetor foi alocado com espaço suficiente para não
estourar.
Obs.: "int &tam" indica que "tam" está
sendo passado por referência.
****************************************************************/

bool insert(int vet[], int &tam, int elem);

void test_inserir() {

	cout << "Questão 3: inserir" << endl;

	int vet[10] = {1};
	int tam = 1;

	insert(vet, tam, 2);
	cout << (exist(vet, tam, 2) == true);
	cout << (tam == 2);

	insert(vet, tam, 3);
	cout << (exist(vet, tam, 3) == true);

	insert(vet, tam, 5);
	cout << (exist(vet, tam, 5) == true);
	cout << (tam == 4);
	cout << (insert(vet, tam, 2) == false) << endl;
}

bool insert(int vet[], int &tam, int elem) {
	if(!exist(vet, tam, elem)) {
		vet[tam++] = elem;
		return true;
	}
	return false;
}

//TODO fazer o swap entre dois elementos do vetor passando o indice

/**************************************************************
Questão 4: remover

Dado um vetor, a atual quantidade de elementos no vetor e um
elemento, apagar o elemento do vetor se este existir
e atualizar a nova quantidade de elementos no vetor. Se o elemento não
existir no vetor retorne falso.
O procedimento para apagar deve ser o seguinte:
Se o elemento existir, facao um swap enviando o elemento para
ultima posicao do vetor e trazendo o da ultima posicao para o
lugar do elemento. Apos isso diminua o tamanho do vetor.
****************************************************************/

bool remover(int vet[], int &tam, int elem);

void test_remover() {

	cout << "Questão 4: remover" << endl;

	int v[1] = {1};
	int tam = 1;

	int v2[3] = {2, 3, 1};
	int tam2 = 3;

	remover(v, tam, 1);

	cout << (exist(v, tam, 1) == false);
	cout << (tam == 0);

	remover(v2, tam2, 3);

	cout << (tam2 == 2);
	cout << (exist(v, tam, 3) == false);

	remover(v2, tam2, 2);
	cout << (tam2 == 1);
	cout << (exist(v, tam2, 2) == false);
	cout << (exist(v, tam2, 1) == true);

	remover(v2, tam2, 1);
	cout << (tam2 == 0);

	cout << (remover(v2, tam2, 4) == false) << endl;
}

bool remover(int v[], int &tam, int elem) {
	int i;
	if(exist(v, tam, elem))
		for(i = 0; i < tam; i++)
			if(v[i] == elem) {
				v[i] = v[tam - 1];
				tam--;
				return true;
			}
	return false;
}

/***************************************************************
Questão 5: inserir com limite

Apenas faca a insercao se não ultrapassar o máximo de lementos
permitidos para o vetor. Retorne falso no caso de o elemento já
existir ou se o máximo for ultrapassado.
******************************************************************/

bool insert_limitado(int vet[], int &tam, int max, int elem);

void test_insert_limitado() {

	cout << "Questão 5: inserir com limite" << endl;

	int v[5];
	int max = 5;
	int tam = 0;

	insert_limitado(v, tam, max, 1);

	cout << (exist(v, tam, 1) == true);
	cout << (tam == 1);

	insert_limitado(v, tam, max, 2);

	cout << (exist(v, tam, 2) == true);
	cout << (tam == 2);

	insert_limitado(v, tam, max, 3);

	cout << (insert_limitado(v, tam, max, 3) == false);

	cout << (exist(v, tam, 3) == true);
	cout << (tam == 3) << endl;

}

bool insert_limitado(int v[], int &tam, int max, int elem) {
	if(tam + 1 <= max)
		return insert(v, tam, elem);

	return false;
}

/***************************************************
Questão 6: numero de repetições

Faça uma função que retorna quantas vezes um determinado
elemento se repete em um vetor.
***************************************************/

int num_repet(int vet[], int tam, int elem);

void test_num_repet() {

	cout << "Questão 6: número de repetições" << endl;

	int v[] = {1};
	cout <<  (num_repet(v, 1, 1) == 1);

	int v2[] = {1, 1};
	cout <<  (num_repet(v2, 2, 1) == 2);

	int v3[] = {1, 2, 1};
	cout <<  (num_repet(v3, 3, 1) == 2);

	int v4[] = {1, 2, 3, 4};
	cout <<  (num_repet(v4, 4, 3) == 1);

	int v5[] = {1, 3, 3, 3};
	cout <<  (num_repet(v5, 4, 3) == 3) << endl;
}

int num_repet(int vet[], int tam, int elem) {

	int i, rep = 0;
	for(i = 0; i < tam; i++) {
		if(vet[i] == elem)
			rep++;
	}

	return rep;
}


/******************************************************************
Questão 7: repetições do menor

Dado um vetor, retornar quantas vezes o menor elemento do vetor se
repete.
*******************************************************************/

int menor_rep(int[], int);

void test_menor_rep() {

	cout << "Questão 7: repetições do menor" <<endl;

	int v[5] = {1};
	int tam = 1;
	cout << (menor_rep(v, tam) == 1);

	insert(v, tam, 1);
	cout << (menor_rep(v, tam) != 2);

	insert(v, tam, 3);
	insert(v, tam, 0);
	insert(v, tam, 4);
	cout << (menor_rep(v, tam) == 1);

	int v2[] = {4, 2, 5, 2, 3, 2};
	cout << (menor_rep(v2, 6) == 3);
	int v3[] = {2, 3, 4, 5, 1, 1};
	cout << (menor_rep(v3, 6) == 2) << endl;
}

int menor_rep(int v[], int tam) {

	return num_repet(v, tam, menor(v, tam));
}

/***************************************************
Questão 8: não repetidos

Faça uma função que remove de um vetor os elementos
que se repetem, deixando apenas um exemplar de cada
valor e retornando o novo tamanho do vetor.
Ex.: O vetor vet[] = {1, 1, 3, 2, 2} de tamanho 5
deve se tornar o vetor vet[] = {1, 3, 2} que retorna
um tamanho 3.

Dica: Você pode utilisar as funções anteriores como
exist, remover, etc...
****************************************************/

int nao_repetidos(int vet[], int tam);

void test_nao_repetidos() {
	cout << "Questão 8: não repetidos" << endl;

	int v[] = {1};
	cout << (nao_repetidos(v, 1) == 1);

	int v2[] = {1, 1};
	cout << (nao_repetidos(v2, 2) == 1);

	int v3[] = {1, 2, 2, 1};
	cout << (nao_repetidos(v3, 4) == 2);
	cout << (exist(v3, 2, 1) == true);
	cout << (exist(v3, 2, 2) == true);

	int v4[] = {1, 4, 2, 3, 4, 1, 3, 2};
	cout << (nao_repetidos(v4, 8) == 4) << endl;
}

int nao_repetidos(int v[], int tam) {
	int i;

	for(i = 0; i < tam; i++) {
		if(num_repet(v, tam, v[i]) > 1)
			remover(v, tam, v[i]);
	}
	return tam;
}


/*********************************************************************
Questão 9: elemento comum

Implemente uma função que retorne verdadeiro se um elemento pertencer
a dois vetores ao mesmo tempo.
**********************************************************************/

bool elem_comum(int v1[], int tam1, int v2[], int tam2, int elem);

void test_elem_comun() {

	cout << "Questão 9: elemento comum" << endl;

	int v[] = {1};
	int v2[] = {1, 2};

	cout << (elem_comum(v, 1, v, 1, 1) == true);
	cout << (elem_comum(v, 1, v2, 2, 2) == false);

	int v3[] = {1, 2, 5, 6};
	int v4[] = {2, 3, 5};

	cout << (elem_comum(v3, 4, v4, 3, 1) == false);
	cout << (elem_comum(v3, 4, v4, 3, 2) == true);
	cout << (elem_comum(v3, 4, v4, 3, 5) == true);
	cout << (elem_comum(v3, 4, v4, 3, 3) == false) << endl;

}

bool elem_comum(int v1[], int tam1, int v2[], int tam2, int elem) {
	return (exist(v1, tam1, elem) && exist(v2, tam2, elem));
}

/*********************************************************************
Questão 10: tamanho da intercessão

Dado dois vetores de tamanhos distintos verificar quantos elementos
existem em sua intercessão. retornar essa quantidade.
**********************************************************************/

int tam_intercessao(int vet1[], int tam1, int vet2[], int tam2);

void test_tam_intercessao() {

	cout << "Questão 10: tamanho da intercessão" << endl;

	int v1[] = {1};
	int v2[] = {1};

	cout << (tam_intercessao(v1, 1, v2, 1) == 1);

	int v3[3] = {1, 2, 3};
	int v4[1] = {0};

	cout << (tam_intercessao(v3, 3, v4, 1) == 0);

	int v5[] = {1, 2, 3};
	int v6[] = {2, 3, 4};

	cout << (tam_intercessao(v5, 3, v6, 3) == 2);

	int v7[1];
	int v8[] = {2, 3, 4};

	cout << (tam_intercessao(v7, 0, v8, 3) == 0);

	int v9[] = {2, 5, 4};
	int v10[] = {1, 6, 8, 6};

	cout << (tam_intercessao(v9, 3, v10, 4) == 0) << endl;

}

int tam_intercessao(int vet1[], int tam1, int vet2[], int tam2) {

	int i, inter = 0;
	for(i = 0; i < tam1; i++)
		if(elem_comum(vet1, tam1, vet2, tam2, vet1[i]))
			inter++;

	return inter;

}

/**********************************************************************
Questão 11: intercessao

inplemente uma função que recebe tres vetores, v1 de tamanho t1, v2 de
tamanho t2 e v3 que é um vetor vazio de tamanho t3 = 0. A função deve
colocar em v3 os elementos que fazem parte de v1 e v2 ao mesmo tempo,
ou seja, sua intercessão, lembrando de colocar em t3 o tamanho final de
v3;
***********************************************************************/

void interc(int v1[], int t1, int v2[], int t2, int v3[], int &t3);

void test_interc() {

	cout << "Questão 11: intercessao" << endl;

	int v1[10] = {1};
	int v2[10] = {1};
	int v3[10];
	int t1 = 1; int t2 = 1; int t3 = 0;

	interc(v1, t1, v2, t2, v3, t3);

	cout << (t3 == 1);

	insert(v1, t1, 3);
	insert(v2, t2, 2);
	t3 = 0;
	interc(v1, t1, v2, t2, v3, t3);
	cout << (t3 == 1);

	insert(v1, t1, 2);
	insert(v2, t2, 3);
	t3 = 0;
	interc(v1, t1, v2, t2, v3, t3);

	cout << (t3 == 3);

	int v4[10] = {1, 2, 3};
	int v5[10] = {3, 4, 2};
	int v6[10];
	int t4 = 3, t5 = 3, t6 = 0;
	interc(v4, t4, v5, t5, v6, t6);

	cout << (t6 == 2);

	remover(v4, t4, 3);
	t6 = 0;
	interc(v4, t4, v5, t5, v6, t6);

	cout << (t6 == 1) << endl;
}

void interc(int v1[], int t1, int v2[], int t2, int v3[], int &t3) {

	int i;
	t3 = 0;
	for(i = 0; i < t1; i++) {
		if(exist(v2, t2, v1[i])) {
			v3[t3++] = v1[i];
		}
	}

}

/********************************************************************
Questão 12: tamanho da diferença

Dados dois vetores verificar quantos elementos existem no primeiro
vetor mais não existe no segundo, retornar essa diferenca.
**********************************************************************/

int tam_diferenca(int vet1[], int tam1, int vet2[], int tam2);

void test_tam_diferenca() {

	cout << "Questão 12: tamanho da diferença" << endl;

	int v[10] = {1};
	int v2[10] = {1};

	cout << (tam_diferenca(v, 1, v2, 1) == 0);

	int v3[10] = {1, 2, 3, 4, 5};
	int v4[10] = {3, 4, 5, 6, 7};
	int t3 = 5;
	int t4 = 5;

	cout << (tam_diferenca(v3, t3, v4, t4) == 2);
	remover(v3, t3, 1);
	cout << (tam_diferenca(v3, t3, v4, t4) == 1);
	remover(v4, t4, 3);
	cout << (tam_diferenca(v3, t3, v4, t4) == 2);
	insert(v3, t3, 8);
	cout << (tam_diferenca(v3, t3, v4, t4) == 3) << endl;

}

int tam_diferenca(int v1[], int t1, int v2[], int t2) {

	int i;
	int difere = 0;
	for(i = 0; i < t1; i++) {
		if(!exist(v2, t2, v1[i]))
			difere++;
	}

	return difere;
}

/********************************************************************
Questao 13: diferenca

Dados os vetores v1 e v2, de tamanhos iniciais t1 e t2, remover
do vetor v1 todos os elementos que existirem em v1 e v2 ao mesmo
tempo e atualizar o tamanho t1 para o novo tamanho do vetor.
*********************************************************************/

void diferenca(int vet1[], int &tam1, int vet2[], int tam2);

void test_diferenca() {

	cout << "Questão 13: diferenca" << endl;

	int v1[7] = {1};
	int v2[7] = {1};
	int t1 = 1;
	int t2 = 1;

	diferenca(v1, t1, v2, t2);

	cout << (t1 == 0);

	int v3[] = {1, 2, 4};
	int v4[] = {1, 2, 3};
	int t3 = 3, t4 = 3;

	diferenca(v3, t3, v4, t4);

	cout << (t3 == 1);
	cout << (exist(v3, t3, 4));

	int v5[] = {1, 2, 3, 4, 5};
	int v6[] = {4, 5, 6, 7};
	int t5 = 5, t6 = 4;

	diferenca(v5, t5, v6, t6);

	cout << (t5 == 3);
	cout << (exist(v5, t5, 1));
	cout << (exist(v5, t5, 2));
	cout << (exist(v5, t5, 3)) << endl;
}

void diferenca(int v1[], int &t1, int v2[], int t2) {

	int i;
	for(i = 0; i < t1; i++) {
		if(exist(v2, t2, v1[i]))
			remover(v1, t1, v1[i--]);
	}

}


/********************************************************************
Questao 13: invert

Faça uma função que inverta os elementos de um vetor.
*********************************************************************/

void invert(int vet[], int tam);

void test_invert() {

	cout << "Questão 13: invert" << endl;

	int v[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {2, 5, 3, 4};

	invert(v, 1);
	invert(v2, 3);
	invert(v3, 4);

	cout << (v[0] == 1);

	cout << (v2[0] == 3);
	cout << (v2[1] == 2);
	cout << (v2[2] == 1);

	cout << (v3[0] == 4);
	cout << (v3[1] == 3);
	cout << (v3[2] == 5);
	cout << (v3[3] == 2) << endl;

}

void invert(int vet[], int tam) {

	int i;
	for(i = 0; i < tam/2; i++) {
		int aux = vet[i];
		vet[i] = vet[tam-i-1];
		vet[tam-i-1] = aux;
	}

}


//TODO se tem o mesmo tamanho porque passar o tamanho dos dois?
/********************************************************************
Questao 14: swap entre vetores

Implemente uma função que faça um swap entre dois vetores, ou seja,
troca seus elementos. Considere que os vetores tem o mesmo tamanho.
Ex.: considere o v1 = {1, 2, 3} de tamanho 2 e o v2 = {3, 4, 5}.
Depois do swap os vetores ficam invetidos, isto é, v1 = {3, 4, 5}
e v2 = {1, 2, 3}. Lembre-se de atualizar os tamanhos dos vetores.
*********************************************************************/

void swap_2_vet(int vet1[], int &tam1, int vet2[], int &tam2);

void test_swap_vet() {

	cout << "Questão 14: swap entre vetores" << endl;

	int vet1[3] = {1, 2, 3};
	int tam1 = 3;
	int vet2[3] = {3, 4, 5};
	int tam2 = 3;

	swap_2_vet(vet1, tam1, vet2, tam2);

	cout << (exist(vet2, tam2, 4) == false);
	cout << (exist(vet2, tam2, 5) == false);

	cout << (exist(vet1, tam1, 3) == true);
	cout << (exist(vet1, tam1, 4) == true);
	cout << (exist(vet1, tam1, 5) == true);

	cout << (exist(vet1, tam1, 1) == false);
	cout << (exist(vet1, tam1, 2) == false);

	cout << (exist(vet2, tam2, 1) == true);
	cout << (exist(vet2, tam2, 2) == true);
	cout << (exist(vet2, tam2, 3) == true) << endl;

}

void swap_2_vet(int vet1[], int &tam1, int vet2[], int &tam2) {
	int i;
	int aux;
	for(i = 0; i < tam1 || i < tam2; i++) {
		aux = vet1[i];
		vet1[i] = vet2[i];
		vet2[i] = aux;
	}

	aux = tam1;
	tam1 = tam2;
	tam2 = aux;
}


int main() {

	cout << "\nCONJUNTOS\n" << endl;

	teste_menor();
	cout << endl;

	test_exist();
	cout << endl;

	test_inserir();
	cout << endl;

	test_remover();
	cout << endl;

	test_insert_limitado();
	cout << endl;

	test_num_repet();
	cout << endl;

	test_menor_rep();
	cout << endl;

	test_nao_repetidos();
	cout << endl;

	test_elem_comun();
	cout << endl;

	test_tam_intercessao();
	cout << endl;

	test_interc();
	cout << endl;

	test_tam_diferenca();
	cout << endl;

	test_diferenca();
	cout << endl;

	test_invert();
	cout << endl;

	test_swap_vet();

	return 0;
}
