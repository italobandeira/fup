
/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/


/* F.01
Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
média ponderada dessas notas.
*/
float media_pond( float nota1, float nota2, float nota3, float peso1, float peso2, float peso3 );

/* F.02
Escreva um programa que solicite dois números do usuário e informe a soma, a
subtração, a multiplicação e a divisão destes números.
*/
float soma( float num1, float num2 );
float subtrai( float num1, float num2 );
float multiplica( float num1, float num2 );
float divide( float num1, float num2 );

/* F.03
Faça um programa que calcula o quadrado de um número dado como entrada.
*/
int quadrado(int valor);

/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/

/* M.01
Faça um programa que retorna o IMC (índice da massa corpórea) de uma
pessoa. O IMC é calculado com o peso em kg, dividido pelo quadrado da altura,
em metros, IMC = Peso/Altura².
*/
float imc (float peso, float altura);

/* M.02
Faça um programa que receba dois números e apresente o resultado de elevar o
primeiro ao segundo.
*/
int potencia ( int base, int expoente );


/* M.03
Faça um programa que transforma uma temperatura em Celsius para uma
temperatura em Fahrenheit. Use a seguinte regra de transformação:
°C = (°F - 32) / 1,8
*/
float celsius_fahrenheit (float temperatura);


/* M.04
Faça duas funções, que determinem a partir da larguda, altura e comprimento de uma caixa d'água,
(a) O volume de água que a caixa pode armazenar.
(b) A área de material utilizada para construir a caixa com tampa.
*/
float calcula_volume ( float largura, float altura, float comprimento );
float calcula_area ( float largura, float altura, float comprimento );

/*#################################################################*/
/*##############            DIFÍCEIS                 ##############*/
/*#################################################################*/

/* D.01
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual
calcule e mostre:
a) A idade dessa pessoa em anos;
b) A idade dessa pessoa em meses;
c) A idade dessa pessoa em dias(Considere que um mês possui 30 dias);
d) A idade dessa pessoa em semanas (Considere que um mês possui 4 semanas).
*/
void imprime_idade (int ano_nasc, int ano_atual);

/* D.02
João e Maria, um casal moderno, implementaram um programa para celular Android
que divide a conta proporcionalmente entre o casal de namorados de acordo com o
salário de cada um. Por exemplo, se João ganha R$ 1000,00 por mês e Maria recebe R$
2000,00 e vamos supor que a conta do restaurante foi de R$ 90,00, então João deve
pagar aproximadamente R$ 30,00 e Maria R$ 60,00 já que ela tem um salário maior e,
proporcionalmente, irá pagar o dobro de João.
Implemente um programa que receba 3 valores: O salário de Maria, o Salário de João e
a Conta do restaurante, todos do tipo double. O seu programa deve exibir o total,
proporcional que cada um irá pagar.
*/
void divide_conta ( double salario_joao, double salario_maria, double valor_conta );


/* D.03
Construa um programa que receba uma quantidade de segundos e imprima em
horas e minutos.
*/
void imprime_tempo ( float qtd_seg);

