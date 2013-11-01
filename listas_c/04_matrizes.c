/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/


/* F.01
 * Faça uma funçao que recebe uma matriz de inteiros 3x5 e retorne a quantidade 
 * de numeros entre 15 e 20 */
int conta_numeros_entre_15_e_20 (int mat[3][5]);

/* F.02
 * Faça uma funçao que recebe uma matriz de inteiros 4x4 e retorne a média 
 * dos numeros pares dessa matriz */
float media_pares (int mat[4][4]);

/* F.03
 * Faça uma função que recebe uma matriz de float 9x9 e retorna a soma dos 
 * elemesntos das linhas pares */
float soma_linhas_pares (int mat[9][9]);

/* F.04
 * Faça uma função que recebe uma matriz de inteiros 6x3, e dois ponteiros de variaveis
 * inteiras, e guarde nelas a linha e a coluna do maior elemento da matriz, respectivamente */
void guardar_posicao_maior_elemento (int mat[6][3], int *lin_maior, int *col_maior);



/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/


/* M.01
 * Faça uma função que recebe uma matriz de inteiros 7x7, e dois vetores
 * de 7 posições cada um. Essa função deve preencher os dois vetores
 * com os maiores elementos de cada linha e os menores elementos de 
 * cada coluna respectivamente */
void maiores_menores_em_vetores (int mat[7][7], int A[], int B[]);

/* M.02
 * Fazer uma função que recebe um matriz de inteiros A, 5x5 e coloque em 
 * uma matriz B as linhas de A em ordem trocada. O critério será: a primeira 
 * linha de B deve aquela cuja soma dos elementos seja a maior de todas as 
 * linhas; a segunda deve ser a segunda soma maior e assim por diante. */
void troca_matriz (int A[5][5], int B[5][5]);



/*#################################################################*/
/*###############           DIFÍCEIS                ###############*/
/*#################################################################*/


/* D.01
 * Faça uma função que receba duas matrizes de inteiros, uma matriz A 
 * de tamanho 5x3, outra matriz B de tamanho 3x4 e escreva em outra matriz 
 * C de tamanho 5x4 a multiplicação de A por B */
void multiplicacao_matrizes (int A[5][3], int B[3][4], int C[5][4]);

/* D.02
 * Faça uma função que receba uma matriz de caracteres [3][3] contendo X e O 
 * representando uma configuração do jogo da velha, responda quem ganhou, ou 
 * se o resultado foi empate.
 * EXEMPLO:
	
	X O O
	X X O      X ganhou
	X O X
*/
void jogo_da_velha (int mat[3][3]);




