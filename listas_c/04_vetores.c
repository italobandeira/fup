/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/

Questão:
Dado um vetor, retirar do vetor todos os elementos repetidos e
retornar quantos elementos sobraram no vetor.

Questão:
Dado um vetor, retornar quantas vezes o menor elemento do vetor se
repete.

//Secao de conjuntos

Questão: existe
Verificar se um elemento existe em um vetor.

Questão: inserir
insert(int vet[], int tam, int elem)
dado um elemento, um vetor e a quantidade atual de elementos no
vetor, adicionar o elemento no vetor se ele ainda nao existir e
retorna a quantidade de elementos do novo vetor.
Assuma que o vetor foi alocado com espaço suficiente para não
estourar.

Questão: remover
remover(int vet[], int tam, int elem)
Dado um vetor, a atual quantidade de elementos no vetor e um
elemento, apagar o elemento do vetor se este existir no vetor
e retornar a nova quantidade de elementos no vetor.
O procedimento para apagar deve ser o seguinte:
Se o elemento existir, facao um swap enviando o elemento para
ultima posicao do vetor e trazendo o da ultima posicao para o
lugar do elemento. Apos isso diminua o tamanho do vetor.

Questão: inserir com limite
apenas faca a insercao se não ultrapassar o máximo de lementos
permitidos para o vetor.
insert_limitado(int vet[], int tam, int max, int elem)

Questão:
Dado dois vetores de tamanhos distintos verificar quantos elementos tem na intercessão.

Questão:
Dado dois vetores de tamanhos distintos verificar quantos elementos tem na intercessão.

Questão:
Dados dois vetores verificar quantos elementos existem no primeiro
vetor mais não existe no segundo.

Q
Recebem um vetor e o numero de elementos validos.
Remover os elementos trocando de lugar com o ultimo e retornando
o novo tamanho do vetor

Q
Receber um vetor de struct x,y e retornar o vetor menos todos
os pontos que estao for da tela xmin, xmax, ymin ymax, retornan
o o novo tamanho do vetor



/* F.01
 * Crie uma função que receba a quantidade n de termos e imprima os
 * n termos da sequência de fibonacci. */
 void fibonacci(int n);

 /* F.02
 * Faça  uma função que  receba  um vetor de inteiros de tamanho 15,
 * já prenchido pelo usuário, passe este vetor para uma função.
 * Dentro da função determine então qual o
 * maior e o menor destes números e quantas vezes este maior e este
 * menor ocorrem no vetor. No final, apresente esses valores.*/

 void maior_menor(int vetor[], int tamanho);

 /* F.03
 * Faça uma função que receba um vetor A de 10 elementos e construa
 * um vetor B que possui os mesmos números de A, sendo que na ordem
 * invertida. Imprima o vetor B*/

 void inverter(int vetor_A[], int tamanho);

/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/

/*M.01
 * Escreva  uma  função  que  receba  um  vetor  A  de  10  elementos
 * ponto  flutuante  e construa um vetor B formado da seguinte maneira:

 * Regras
 * Se índice i ímpar   B[i] = A[i] / 2
 * Se índice i par   B[i] = A[i] * 3

 * Em sequida mostre o vetor B
*/

void vetor_par_impar(float vetorA[], int tamanho);

/* M.02
 * Faça uma função que receba como parâmetro um vetor A de dez elementos
 * inteiros já populado como parâmetro. Ao final dessa função, deverá ter sido
 * gerado um vetor B contendo o fatorial de cada elementos de A. O vetor B
 * deverá ser mostrado.*/

 void vetor_fatorial(int vetorA[], int tamanho);

/*#################################################################*/
/*###############            DIFÍCEIS               ###############*/
/*#################################################################*/

/*
* Busca Binária é um processo de busca em vetores ordenados que tira proveito
* desta ordenação para ser substancialmente mais rápida que a busca linear .
* A busca binária por um elemento x em um vetor M ordenado segue as etapas,
* i. Definir os contadores i e j e iniciá-los respectivamente com as posições
* inicial e final de M.
* ii. Se i for menor que j a busca se encerra sem sucesso.
* iii. Determinar a posição k média entre as posições i e j .
* iv. Se o elemento Mk for igual a x a busca termina com sucesso.
* v. Se Mk for maior que x então j recebe k - 1 e volta-se a etapa-ii.
* vi. Se Mk for menor que x então i recebe k + 1 e volta-se a etapa-ii.
* Dados como entrada um vetor V ordenado de inteiros e um inteiro x,
* determinar por busca binária se x pertence ou não a V .*/

void busca_binaria(int vetor[], int tamanho, int x);
