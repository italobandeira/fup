/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/





/*
F.01 - Faça uma função que apresente um palpite para um jogo da loteria. Nossa
loteria consiste de seis números inteiros aleatórios entre 0 e 100.
*/
void loteria ();


/*
F.02 - Faça uma função que receba um número N inteiro
maior que zero, e retorne o fatorial desse número.
*/
int fatorial(int n);


/*
F.03 - Sejam 'a' e 'b' dois números naturais. Faça uma função que receba 'a' e 'b',
e retorne o valor da potência de 'a' elevado a 'b'.
*/
int potencia(int a, int b);






/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/


/*
M.01 - No Brasil existem notas de 1, 2, 5, 10, 20, 50 e 100 reais. Faça uma função que receba um
valor inteiro em reais e mostre a menor combinação de notas existente para esse valor.
*/
void combinacaoNotas(int valor);


/*
M.02 - Faça uma  função que receba um número inteiro N como parâmetro
e retorne o maior número primo que seja menor do que N.
*/
int maiorPrimo(int n);

/*
M.03 - O reverso de um número natural é o número obtido pela inversão da ordem 
de seus dígitos. Por exemplo, o reverso de 127 é 721. Faça uma função que receba
um número inteiro N e retorne o reverso de N.
*/
int inverter(int n);



/*#################################################################*/
/*###############           DIFÍCEIS                ###############*/
/*#################################################################*/



/*
D.01 - A rotação de um número inteiro consiste na transferência de um dígito de 
uma extremidade deste número para a outra. A rotação à direita, ou RD, retira o 
dígito mais a esquerda e o coloca mais a direita. Por exemplo, RD(1234) = 2341. 
A rotação à esquerda, ou RE, retira o dígito mais a direita e o coloca mais à 
esquerda. Por exemplo, RE(1234) = 4123. Uma sequência de rotações de um  número
n é a série [n, n¹, n¹¹, · · · , n] onde cada elemento a partir do segundo 
é uma rotação do anterior e o último elemento é igual ao primeiro. Por exemplo, 
[137, 371, 713, 137].
Faça uma função que receba um número inteiro N e imprima as séries obtidas
por rotações à  direita e por rotações à esquerda.
*/
void rotacao(int n);


/*
D.02 - Faça uma função que receba um número de base decimal e o converta
para qualquer base entre 2 e 8. Mostre o resultado.
*/
void converterDecimal(float n);


/*
D.03 - Faça uma função que receba um número inteiro n (n > 0) e um dígito d(0 <= d <= 9),
determine quantas vezes 'd' ocorre em 'n', e retorne esse valor (sem utilizar cadeia de caracteres).
*/
int contarDigitos(int n, int d);
















