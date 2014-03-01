/*#################################################################*/
/*###############            F�CEIS                 ###############*/
/*#################################################################*/

Quest�o:
Dado um vetor, retirar do vetor todos os elementos repetidos e
retornar quantos elementos sobraram no vetor.

Quest�o:
Dado um vetor, retornar quantas vezes o menor elemento do vetor se
repete.

//Secao de conjuntos

Quest�o: existe
Verificar se um elemento existe em um vetor.

Quest�o: inserir
insert(int vet[], int tam, int elem)
dado um elemento, um vetor e a quantidade atual de elementos no
vetor, adicionar o elemento no vetor se ele ainda nao existir e
retorna a quantidade de elementos do novo vetor.
Assuma que o vetor foi alocado com espa�o suficiente para n�o
estourar.

Quest�o: remover
remover(int vet[], int tam, int elem)
Dado um vetor, a atual quantidade de elementos no vetor e um
elemento, apagar o elemento do vetor se este existir no vetor
e retornar a nova quantidade de elementos no vetor.
O procedimento para apagar deve ser o seguinte:
Se o elemento existir, facao um swap enviando o elemento para
ultima posicao do vetor e trazendo o da ultima posicao para o
lugar do elemento. Apos isso diminua o tamanho do vetor.

Quest�o: inserir com limite
apenas faca a insercao se n�o ultrapassar o m�ximo de lementos
permitidos para o vetor.
insert_limitado(int vet[], int tam, int max, int elem)

Quest�o:
Dado dois vetores de tamanhos distintos verificar quantos elementos tem na intercess�o.

Quest�o:
Dado dois vetores de tamanhos distintos verificar quantos elementos tem na intercess�o.

Quest�o:
Dados dois vetores verificar quantos elementos existem no primeiro
vetor mais n�o existe no segundo.

Q
Recebem um vetor e o numero de elementos validos.
Remover os elementos trocando de lugar com o ultimo e retornando
o novo tamanho do vetor

Q
Receber um vetor de struct x,y e retornar o vetor menos todos
os pontos que estao for da tela xmin, xmax, ymin ymax, retornan
o o novo tamanho do vetor



/* F.01
 * Crie uma fun��o que receba a quantidade n de termos e imprima os
 * n termos da sequ�ncia de fibonacci. */
 void fibonacci(int n);

 /* F.02
 * Fa�a  uma fun��o que  receba  um vetor de inteiros de tamanho 15,
 * j� prenchido pelo usu�rio, passe este vetor para uma fun��o.
 * Dentro da fun��o determine ent�o qual o
 * maior e o menor destes n�meros e quantas vezes este maior e este
 * menor ocorrem no vetor. No final, apresente esses valores.*/

 void maior_menor(int vetor[], int tamanho);

 /* F.03
 * Fa�a uma fun��o que receba um vetor A de 10 elementos e construa
 * um vetor B que possui os mesmos n�meros de A, sendo que na ordem
 * invertida. Imprima o vetor B*/

 void inverter(int vetor_A[], int tamanho);

/*#################################################################*/
/*###############            M�DIAS                 ###############*/
/*#################################################################*/

/*M.01
 * Escreva  uma  fun��o  que  receba  um  vetor  A  de  10  elementos
 * ponto  flutuante  e construa um vetor B formado da seguinte maneira:

 * Regras
 * Se �ndice i �mpar   B[i] = A[i] / 2
 * Se �ndice i par   B[i] = A[i] * 3

 * Em sequida mostre o vetor B
*/

void vetor_par_impar(float vetorA[], int tamanho);

/* M.02
 * Fa�a uma fun��o que receba como par�metro um vetor A de dez elementos
 * inteiros j� populado como par�metro. Ao final dessa fun��o, dever� ter sido
 * gerado um vetor B contendo o fatorial de cada elementos de A. O vetor B
 * dever� ser mostrado.*/

 void vetor_fatorial(int vetorA[], int tamanho);

/*#################################################################*/
/*###############            DIF�CEIS               ###############*/
/*#################################################################*/

/*
* Busca Bin�ria � um processo de busca em vetores ordenados que tira proveito
* desta ordena��o para ser substancialmente mais r�pida que a busca linear .
* A busca bin�ria por um elemento x em um vetor M ordenado segue as etapas,
* i. Definir os contadores i e j e inici�-los respectivamente com as posi��es
* inicial e final de M.
* ii. Se i for menor que j a busca se encerra sem sucesso.
* iii. Determinar a posi��o k m�dia entre as posi��es i e j .
* iv. Se o elemento Mk for igual a x a busca termina com sucesso.
* v. Se Mk for maior que x ent�o j recebe k - 1 e volta-se a etapa-ii.
* vi. Se Mk for menor que x ent�o i recebe k + 1 e volta-se a etapa-ii.
* Dados como entrada um vetor V ordenado de inteiros e um inteiro x,
* determinar por busca bin�ria se x pertence ou n�o a V .*/

void busca_binaria(int vetor[], int tamanho, int x);
