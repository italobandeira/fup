//resolva a lista utilizando sem utilizar os metodos de string.h
//toda string termina com \n


//retornar o tamanho de uma string
int tamanho_str(char *s);

//verificar se a string B eh subtring da string a
int subs(char * a, char * b);

//copiar o conteudo da string b para string a
int copia(char * a, char * b);

//verificar se duas string s sao iguais
int iguais(char * a, char * b);

//retornar 1 se a string B for maior que A e zero caso contrario
int maior(char * a, char * b);

//retornar -1 se a string A for maior que B e zero caso contrario
int menor(char * a, char * b);

//retornar a comparacao, 0 se for iguais, 1 se B for maior, -1 se a for maior
int cmp(char * a, char * b);

//transformar a string str toda para uppercase
void to_upper(char * a);
