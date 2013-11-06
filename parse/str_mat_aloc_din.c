

/*I \\
Módulos de Matrizes \\
Aluno Autor:\\
Obi Wan Kenobi
I*/

/*T

  Esta lista utiliza conhecimentos sobre matrizes e estruturas.
  Vários exercícios dessa lista podem ser feitos no mesmo arquivo.
  Apenas renomeie a função de teste para não haver conflitos.

T*/

/*S Montando o Cenário das atividades S*/
/*T
Na linguagem C é possível criar matrizes através de alocação dinâmica
ou estática. O código a seguir mostra algumas formas de se criar uma
matriz de inteiros de 40x30.
T*/
//CB
//alocacao estatica
int mate[40][30];

//alocacao dinamica
int **matd;
matd = (int **) calloc(40, sizeof(int *);
for(i = 0; i < 40; i++)
    matd[i] = (int *) calloc(30, sizeof(int));
//CE

/*T
Em ambos os casos é possível acessar os elementos da matriz utilizando
a mesma notação. Acessar o elemento da linha 2 coluna 3 seria
mate[1][2] ou matd[1][2].

Entretando, a forma de passar uma matriz para uma função muda,
dependendo do tipo de alocação. Ambas as estruturas são acessadas
da mesma forma, mas possuem representação interna distintas.

O protótipo de uma funcao que imprima todo o conteudo de uma matriz
deve ter os seguintes parâmetros.
T*/

//CB
void print_mat_est(int mate[][30], int nlin);
void print_mat_diz(int **matd, int nlin, int ncol);
//CE

/*T
É isso mesmo, matrizes estáticas só podem ser passadas por parâmtros se 
fixarmos o tamanhos das colunas. O valor 30 não pode ser uma variável 
dinâmica. Diferente do caso da matriz dinâmica que pode ter ambas as 
dimensões passadas dinâmicamente.

Uma forma de contornar essa limitação é tranformar uma matriz em um vetor 
simples e passá-las por parâmetro como vetor.

Em C, vetores e matrizes possuem a mesma representação interna. Um vetor 
pode ser tratado como uma matriz e vice-versa.
T*/

//CB
int vetor[30 * 40];//120 posições de memória continuas alocadas
int matriz[30][40];//120 posições de memória continuas alocadas

//acessar o elemento 3,4
vetor[3*40 + 4];
matriz[3][4];

//transformando o vetor numa matriz
int *vetm = &(matriz[0][0]);
vetm[3*40+4];//elemento 3,4
//CE

/*Q Vetor como Matriz Q*/

/*T
Objetivo: tratar o vetor como matriz retornando o elemento
Entrada : o vetor, o número de colunas, e a posicao do elemento
Saída   : o valor do elemento.
T*/

//CB
int elem(int *vet, int ncol, int y, int x);
void test();
//CE

/*Q Imprimindo Matriz Q*/

/*T
Objetivo: imprima uma matriz passada por parametro como vetor
Entrada : o vetor, o número de colunas, o numero de linhas
Saída   : nenhuma.
T*/

//CB
void print_mat(int *vet, int nlin, int ncol);
void test();
//CE

/*Q Obtendo posicao Matriz Q*/

/*T
Objetivo: obter a posicao de um elemento na matriz
Entrada : o vetor, o número de colunas, a posicao na matriz
Saída   : o endereco do elemento
T*/

//CB
int * elem_pos(int *vet, int ncol, int x, int y);
void test();
//CE

/*Q Transformando em Estrutura Q*/

/*T
É mais fácil montar uma struct que contenha as dimensoes da matriz
e passar a estrutura por parametro
T*/

//CB
typedef struct{
    int *vet;
    int nlin;
    int ncol;
}mymat;
//CE

/*T
Objetivo: imprimir todos os elementos de uma struct mymat.
Entrada : a struct
Saída   : void
T*/

//CB
void mm_print(mymat m);
void test(){
    int mat[10][20];
    int *vet = &(mat[0][0]);
    int i=200;
    while(i--)
        vet[i] = i;
    mymat mm = {vet, 10, 20};
    mm_print(mm);
}
//CE


/*Q Alocando mymat dinâmicamente Q*/

/*T
Objetivo: Alocar dinâmicamente uma struct mymat dados os parâmetros.
Entrada : A quantidade de linhas e colunas.
Saída   : Uma struct preenchida e com vet alocado dinamicamente, e os
          elementos preenchidos começando do zero.
T*/

//CB
mymat mm_new(int nlin, int ncol);
void test(){
    mymat mm = mm_new(10, 15);
    puts(mm.nlin == 10);
    puts(mm.ncol == 15);
    int i=149;
    while(i--)
        puts(vet[i] == i);
}
//CE


/*Q Obtendo elemento Q*/

/*T
Objetivo: Obter um elemento de mymat
Entrada : A posicao do elemento e mymat
Saída   : O endereço do elemento
T*/

//CB
int * mm_get(mymat mm, int nlin, int ncol);
void test(){
    mymat mm = mymat_new(3, 4);
    *(mm_get(1,3)) = 0;
    mm_print(mm);
    //verifique se o ultimo elemento da segunda linha eh zero
}
//CE


/*Q Somando duas estruturas Q*/

/*T
Objetivo: Somar duas estruturas mymat. Use mymat_new para criar uma
          estrutura onde colocara a soma.
Entrada : As duas estruturas a serem somadas.
Saída   : Uma nova estrutura com o resultado da soma.
T*/

//CB
mymat mm_sum(mymat am, mymat bm);
void test(){
}
//CE

/*Q Procurando repetidos Q*/

/*T
Objetivo: Procurar em duas matrizes os elementos que se repetem e
          retornar o maior deles.
Entrada : As duas estruturas
Saída   : O valor do maior elemento da intercessão
T*/

//CB
int mm_inter_max(mymat am, mymat bm);
void test(){
}
//CE
