
/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/


/* F.01
Faça uma função recursiva que retorne o N-ésimo número da série de Fibonacci.
*/
int fibonacci ( int n );

/* F.02
Faça uma função recursiva para saber se um número é primo.
*/
void primo( int numero );

/* F.03
Escreva uma função recursiva que receba um número inteiro maior que zero, e
retorne o fatorial desse número.
*/
int fatorial ( int numero );

/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/

/* M.01
Elabore uma função recursiva que retorne como resultado o valor de uma
potência de uma base B qualquer elevada a um expoente E qualquer
*/
int potencia (int B, int E);

/* M.02
Escreva uma função recursiva para calcular o máximo divisor comum (mdc) de dois
números inteiros positivos.

Regras
mdc ( x, y ) = y 		se (y <= x) e (x%y = 0)
	     = mdc ( y, x )	se (x < y)
	     = mdc ( y, x%y ) 	senão
*/
int mdc ( int x, int y );

recursao com um vetor
soma recursiva
inversao de vetor
busca recursiva retornando a posicao
busca recursiva buscando um bool

/*#################################################################*/
/*##############            DIFÍCEIS                 ##############*/
/*#################################################################*/

/* D.01
Faça uma função recursiva que determine se uma palavra é um palíndromo: palavra
que possui a mesma grafia quando lida no sentido normal ou no sentido contrário.
Exemplo: ARARA, RIR, OSSO
*/
void palindromo ( char palavra[] );

/* D.02
Escreva uma função recursiva que calcule a soma dos dígitos de um inteiro
positivo n. A soma dos dígitos de 132, por exemplo, é 6.
*/
int soma_digitos ( int numero );

/* D.03
Dado um vetor ordenado (crescente) v, faça uma função recursiva que encontre
um determinado elemento 'e' nesse vetor. Para isso, usar a definição recursiva da
pesquisa binária:

Regras
Encontra-se o índice do meio do vetor: m = (ini + fim)/2
Se (v[m] > e), chamar pesquisa binária com a 1a metade de v (entre ini e m-1)
Se (v[m] < e), chamar pesquisa binária com a 2a metade de v (entre m+1 e fim)
Se (v[m] = e), retornar m
Se não puder mais dividir, o elemento não existe no vetor e deve-se retornar -1
*/
int procura_elemento ( int v[], int e, int ini, int fim );


/* D.04
Faça uma função recursiva que programe a função de Ackermann definida por:

Regras
A(m, n)	= n+1			se (m = 0)
	= A(m-1, 1)		se (m > 0, n = 0)
	= A(m-1, A(m, n-1))	se (m > 0, n > 0)

Exemplo

| m | n | Resultado |
---------------------
| 3 | 2 |    29     |
*/
int ackermann ( int m, int n );

