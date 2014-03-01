/*#################################################################*/
/*###############            F�CEIS                 ###############*/
/*#################################################################*/

/* F.01
 * Elabore um programa que receba um n�mero do usu�rio e informe 
 * se � par ou �mpar.  */
 
 void par_ou_impar(int num); 
 
 /* F.02
 * Determinar o valor m�ximo de dois n�meros A e B dados como 
 * entrada. */
 
 int valor_maximo(int a, int b);

/* F.03
 * Dados dois n�meros naturais como entrada, determinar o resto da 
 * divis�o do maior pelo menor quando poss�vel. */
 
 int resto_divisao(int n1, int n2);
 
 /* F.04
 * Fa�a um algoritmo que receba dois n�meros inteiros e verifique se h� 
 * a seguinte situa��o se o n1 est� entre 50 e 200 e n2 est� entre -1 e 9.
 * A sa�da deve ser 1 seos n�meros satisfazem a situa��o e 0 
 * se n�o satisfazem. */
 
 int satisfaz_situacao(int n1, int n2);
 
 
 
 /*#################################################################*/
/*###############            M�DIAS                 ###############*/
/*#################################################################*/
 
 /* M.01
 *Fa�a um algoritmo que determina o IMC (�ndice da massa corp�rea) de uma 
 *pessoa e indique se ela esta magra, normal ou obesa. O IMC � calculado com o 
 *peso em kg, dividido pelo quadrado da altura, em metros, IMC = Peso/Altura2. Se o
 *IMC � menor que 20 estamos magros. Se o IMC est� acima de 25 estamos 
 *obesos. Se o IMC estiver entre 20 e 25 estamos normais.*/

 void IMC(int peso, int altura);

/* M.02
 * Escreva um programa que l� tr�s n�meros correspondentes aos comprimentos 
 * dos lados de um tri�ngulo e decide (imprime) se o tri�ngulo � equil�tero,
 * is�sceles ou escaleno. */

 void tipo_triangulo(int l1, int l2, int l3);
 
/*#################################################################*/
/*###############            DIF�CEIS               ###############*/
/*#################################################################*/

/* D.01
 * Receber 3 n�meros inteiros como entrada e reescrev�-los em ordem 
 * crescente. */
 
 void ordem_crescente(int n1, int n2, int n3);
