
/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/


/* F.01
Crie uma função que receba um número e retorne se o número lido é primo
(retornar 1) ou não (retornar 0).
*/
int primo( int numero );

/* F.02
Escreva uma função que receba um número inteiro positivo e retorne o fatorial
deste número.
*/
int fatorial( int numero );

/* F.03
Elabore uma função que retorne o N-ésimo número da série de Fibonacci.
*/
int fibonacci( int termo );

/* F.04
Faça uma função que calcule o mdc de dois números.
*/
int mdc( int numero1, int numero2 );

/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/

/* M.01
Faça uma função chamada calculadora. Esta função deve receber dois valores reais
e um caractere que representa a operação. A função deve estar preparada para
calcular as operações básicas (soma, subtração, multiplicação e divisão) e retornar
o resultado.
*/
float calculadora (float numero1, float numero2, char operacao);

/* M.02
Escreva um procedimento chamado medidasDoRetângulo que recebe em
parâmetros L1 e L2 as medidas em centímetros dos dois lados de um retângulo e
escreve em parâmetros A e P respectivamente a área e o perímetro deste retângulo.
*/
void medidasDoRetangulo ( float lado1, float lado2 );


/* M.03
Faça uma função que calcule a numerologia do nome de uma pessoa.
Para calcular a numerologia de um nome, some todos os valores de todas
as letras do nome. Caso a soma tenha mais de um dígito, some os dígitos do
número. Repita isso até o número ficar com apenas um dígito. Cada letra possui
um valor dado pela tabela.
| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 
| A | B | C | D | E | F | G | H | I | 
| J | K | L | M | N | O | P | Q | R | 
| S | T | U | V | W | X | Y | Z |   | 

Exemplo:
Entrada: ZULEICA CLEMENTINA DE SOUZA
Saída: 3
*/
int numerologia ( char nome[] );


/*#################################################################*/
/*##############            DIFÍCEIS                 ##############*/
/*#################################################################*/

/* D.01
Escreva uma função de nome tipo_triangulo que receba 3 parâmetros representando
os lados de um triângulo e imprima o tipo dele (eqüilátero, isósceles ou escaleno).
*/
void tipo_triangulo ( int lado1, int lado2, int lado3 );

/* D.02
Escreva uma função que recebe um caractere ch e devolve em *tipo 0, se o caractere for
um número inteiro, 1 se for uma letra (maiúscula ou minúscula) e 2 caso contrário. 
Faça um programa que leia um caractere do teclado e utilize a função em questão para 
saber se é número, letra ou outro caractere.
*/
void converte ( char ch, int *tipo );

/* D.03
Elabore uma função que calcule a raiz quadrada k de um número
usando o método de Heron: Comece com k = 1, a cada iteração, calcule o
novo valor para k usando a fórmula: k = (k + n/k)/2
*/
float raiz_quadrada ( float n );

/* D.04
Faça uma função que receba uma cadeia de caracteres c, uma palavra p e uma
posição na cadeia i, e insira p em c, na posição indicada por i.

Exemplo:
Entrada:	c = LABORATORIO PROGRAMACAO I
		p = DE
		i = 11

Saida: 		LABORATORIODE PROGRAMACAO I	
*/
void inserir_palavra ( char c[], char  p[], int i );

