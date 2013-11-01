/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/


/* F.01
 * Faça uma funçao que calcula o tamanho de uma string dada como entrada
 * (lembre que a string sempre termina com caractere nulo */
int tamanho_string (char *str);


/* F.02
 * Faça uma funçao que recebe uma string e retona a soma dos valores
 * do codigo ascii dos seus caracteres*/
int soma_codigo_ascii (char *str);


/* F.03
 * Faça uma funçao que recebe duas strings. a primeira, tema palavras separadas
 * por varios espaços em branco. A segunda apenas um ponteiro para que nele você
 * grave essas palavras separadas por somente um espaço.
 * EXEMPLO
	string 1:  	LABORATORIO     DE      PROGRAMACAO      I
	depois da função:
	string 2: LABORATORIO DE PROGRAMACAO I
	*/
void retira_espacos_desnecessarios (char *A, char *B);

/* F.04
 * Faça uma funçao que recebe uma string e modifica ela própria. A string deve ser
 * criptografada, trocando as consoantes por # e invertendo a string.
 * EXEMPLO: string entrada: sua casa
 * depois da função: a#a# au#
*/
void criptografar (char *str);

/* F.05
 * Faça uma funçao que recebe uma string e e modifica ela própria
 * colocando todos os seus caracteres em maiusculo */
void string_maiuscula (char *str);



/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/


/* M.01
 * Faça uma função que receba palavras e separe suas silabas levando em
 * consideração o seguinte critério: se após uma vogal existir uma não-vogal, 
 * deve-se separar a sílaba. O resultado deve ser gravado em um ponteiro de 
 * char dado também como entrada
 * EXEMPLO: LABORATORIO
			LA-BO-RA-TO-RIO
*/

void separa_silabas (char *palavra, char *resultado);

/* M.02
 * Faça uma função que receba duas strings e retorne 1, se uma for anagrama
 * da outra, ou retorne 0 se não for anagrama.
 * Lembre-se, uma palavra é anagrama de outra se é formafa pelas mesmas letras 
 * mas que podem estar em ordem diferente.
 * EXEMPLO: ALMA
			LAMA
*/
int eh_anagrama(char *A, char *B);


/* M.03
 * Uma string é um palíndromo se a sequência dos caracteres da esquerda para
 * direita é igual à seqüência da direita para a esquerda. Por exemplo,são 
 * palíndromos "ARARA", "RADAR", "AKASAKA" e "ANA". Faça uma função que dada
 * uma string de entrada retorne 1, caso seja palindroma ou retorne 0 se não um palíndromo. */
int eh_palindroma(char *str);



/*#################################################################*/
/*###############            DIFÍCEIS               ###############*/
/*#################################################################*/


/* D.01
 * Faça uma função que receba uma frase e coloque em outra string dada como 
 * entrada a mesma frase codificada pelo método TENIS-POLAR: Para cada letra da
 * frase que aparece nas palavras, deve-se substituí-la pela letra correspondente 
 * na outra palavra. Por exemplo, Troca-se P por T, T por P, E por O, O por E etc. 
 * As demais permanecem como no original.
 * LETRAS QUE TROCAM:  T  <->  P
				       E  <->  O
				       N  <->  L
				       I  <->  A
				       S  <->  R
EXEMPLO: Laborátorio        passa a ser    Nibesipesae
*/
void tenis_polar(char *frase, char *resposta);

/* D.01
 * Faça uma função que receba um inteiros e duas strings. nessas strings você deverá
 * guardar os valores em binário e hexadecimal, respectivamente, do inteiro dado 
 * como entrada */
void converte_binario_hexadecimal(int num, char *bin, char *hexa);









