/*#################################################################*/
/*###############            F�CEIS                 ###############*/
/*#################################################################*/





/*
F.01 - Fa�a uma fun��o que apresente um palpite para um jogo da loteria. Nossa
loteria consiste de seis n�meros inteiros aleat�rios entre 0 e 100.
*/
void loteria ();


/*
F.02 - Fa�a uma fun��o que receba um n�mero N inteiro
maior que zero, e retorne o fatorial desse n�mero.
*/
int fatorial(int n);


/*
F.03 - Sejam 'a' e 'b' dois n�meros naturais. Fa�a uma fun��o que receba 'a' e 'b',
e retorne o valor da pot�ncia de 'a' elevado a 'b'.
*/
int potencia(int a, int b);






/*#################################################################*/
/*###############            M�DIAS                 ###############*/
/*#################################################################*/


/*
M.01 - No Brasil existem notas de 1, 2, 5, 10, 20, 50 e 100 reais. Fa�a uma fun��o que receba um
valor inteiro em reais e mostre a menor combina��o de notas existente para esse valor.
*/
void combinacaoNotas(int valor);


/*
M.02 - Fa�a uma  fun��o que receba um n�mero inteiro N como par�metro
e retorne o maior n�mero primo que seja menor do que N.
*/
int maiorPrimo(int n);

/*
M.03 - O reverso de um n�mero natural � o n�mero obtido pela invers�o da ordem 
de seus d�gitos. Por exemplo, o reverso de 127 � 721. Fa�a uma fun��o que receba
um n�mero inteiro N e retorne o reverso de N.
*/
int inverter(int n);



/*#################################################################*/
/*###############           DIF�CEIS                ###############*/
/*#################################################################*/



/*
D.01 - A rota��o de um n�mero inteiro consiste na transfer�ncia de um d�gito de 
uma extremidade deste n�mero para a outra. A rota��o � direita, ou RD, retira o 
d�gito mais a esquerda e o coloca mais a direita. Por exemplo, RD(1234) = 2341. 
A rota��o � esquerda, ou RE, retira o d�gito mais a direita e o coloca mais � 
esquerda. Por exemplo, RE(1234) = 4123. Uma sequ�ncia de rota��es de um  n�mero
n � a s�rie [n, n�, n��, � � � , n] onde cada elemento a partir do segundo 
� uma rota��o do anterior e o �ltimo elemento � igual ao primeiro. Por exemplo, 
[137, 371, 713, 137].
Fa�a uma fun��o que receba um n�mero inteiro N e imprima as s�ries obtidas
por rota��es �  direita e por rota��es � esquerda.
*/
void rotacao(int n);


/*
D.02 - Fa�a uma fun��o que receba um n�mero de base decimal e o converta
para qualquer base entre 2 e 8. Mostre o resultado.
*/
void converterDecimal(float n);


/*
D.03 - Fa�a uma fun��o que receba um n�mero inteiro n (n > 0) e um d�gito d(0 <= d <= 9),
determine quantas vezes 'd' ocorre em 'n', e retorne esse valor (sem utilizar cadeia de caracteres).
*/
int contarDigitos(int n, int d);
















