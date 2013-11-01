

/*I \\
Módulos de Tipos e Operações \\
Aluno Autor:\\
Natasha da Silva Sauro I*/
/*T

Essa lista aborda a parte básica sobre operações e tipos. Boa parte dos exercícios visa alertar
sobre peculiaridades da linguagem C, bem como operações entre tipos. Também visa aconstumar o
aluno sobre o uso de funções para resolver problemas.

São cobertos os tipos: int, char, float.
E as operações básicas: +, -, /, * e módulo, && e ||.

T*/

/*S Fáceis S*/

/*Q Pares ou ímpares Q*/
/*T
Objetivo: Utilizar a operação de módulo ( % ) para verificar se um número é par ou ímpar.
Entrada : Um número inteiro.
Saída   : 1, se o número for par.
          0, se o número for impar.
T*/

//CB
 int eh_par (int num);
 void  test()
 {
    puts(eh_par(6) == 1);
    puts(eh_par(3) == 0);
 }
//CE


/*Q Cast pra float Q*/
/*T
Objetivo: Calcular uma operação de divisão entre inteiros utilizando cast para float.
Entrada: Dois números inteiros.
Saída  : O resultado da divisão em float.
T*/

//CB
 float divide (int n1, int n2);
 void  test()
 {
    puts(divide(6  ,  4) ==  1.5);
    puts(divide(4.5, -3) == -1.5);
 }
//CE

/*Q Operações básicas Q*/
/*T
Objetivo: Realização de operações básicas entre floats
Entrada : Dois números a serem operados
Saída   : O resultado da operação
T*/

//CB
float soma   ( float num1, float num2 );
float subtrai( float num1, float num2 );
float multi  ( float num1, float num2 );
float divide ( float num1, float num2 );

void test()
{
	puts(soma   (4.5, 5.5) == 10);
	puts(subtrai(3.1, 2.0) == 1.1);
	puts(multi  (3.2, 2  ) == 6.4);
	puts(divide (5  , 2  ) == 2.5);
}
//CE


/*Q Operadores lógicos Q*/
/*T
Objetivo: Utilizar operadores lógicos para verificar se um número é divisível por 2 e 3,
          mas não pelo número 5.
Entrada : Um número inteiro.
Saída   : 1, se for divisível por 2 e por 3, mas não por 5.
          0, caso contrário
T*/

//CB
 float div_23n5 (int num);
 void  test()
 {
    puts(div_23n5(2) == 0);
    puts(div_23n5(3) == 0);
    puts(div_23n5(6) == 1);
    puts(div_23n5(12) == 1);
    puts(div_23n5(30) == 0);
 }
//CE


/*S Questões Médias S*/

/*Q Conversão de tempo Q*/
/*T
Objetivo: Calcular o número de segundos que passaram desde a meia noite até a hora informada.
Entrada : Horas, minutos e segundos.
Saída   : O tempo de segundos
T*/


//CB
int meia_noite( int hora, int minuto, int segundo );

//melhorar esse teste
void teste_meia_noite()
{
	puts(meia_noite(0, 0, 1) == 1);
	puts(meia_noite(0, 1, 1) == 61);
}
//CE

/*Q Média Ponderada Q*/

/*T
Objetivo: Calcular a média ponderada entre duas notas
Entrada : As duas notas e seus respectivos pesos
Saída   : Retornar o valor da média como float
T*/

//CB
float media_pond( float nota1, float nota2, float peso1, float peso2 );

void  test_media_pond()
{
    puts(media_pond(8, 8, 1, 1) == 8);
    puts(media_pond(8, 6, 2, 1) == 7);
    puts(media_pond(0,10, 9, 1) == 1);
    puts(media_pond(8, 4, 1, 3) == 5);
}
//CE

/*S Questões Divertidas S*/
/*Q Ano bissesto Q*/
/*T
Objetivo: Implementar a função que calcula se um ano é bissesto ou não.
Entrada : O ano.
Saída   : 1 se for bissesto.
          0 se não for.
T*/
//CB
int bissesto( int ano );
void test()
{
    //codigo de teste aqui
}
//CE

/*Q Dia da Semana Q*/
/*T
Objetivo: Implementar a função que retorna o dia da semana.
Entrada : O ano, o mês e o dia do mês.
Saída   : 1 para domingo, 2 para segunda, 3 para terça, ...
T*/

//CB
int dds( int ano, int mes, int dia );
void test()
{
	//codigo de teste aqui
}
//CE
