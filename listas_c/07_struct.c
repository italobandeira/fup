/*#################################################################*/
/*###############            F�CEIS                 ###############*/
/*#################################################################*/


/*
F.01 - Crie uma estrutura para representar uma casa com quantidade de quartos, cor, 
�rea e quantidade de portas. Crie uma fun��o que receba duas casas, fa�a a leitura 
de seus atributos e os imprima na tela.
OBS.: Defina o tipo de dados como um ponteiro para a  estrutura.
*/
void imprimirCasa(casa c1, casa c1);


/*
F.02 - Crie uma estrutura para representar um professor.
Fa�a uma fun��o que recebe 5 Professores e retorna a soma de seus sal�rios. 

OBS.: Um Professor deve possuir nome, endere�o, sal�rio, idade, sexo, estado 
civil, data de admiss�o e quantidade de disciplinas. 
*/
float salarios(prof p1, prof p2, prof p3, prof p4, prof p5);


/*
F.03 - Uma pessoa possui nome, endere�o e telefone. Utilizando estrutura,
fa�a  uma fun��o que receba 3 pessoas e as imprima em ordem  alfab�tica.

OBS.: Considerar para ordem alfab�tica somente a primeira letra.
Ao definir o tipo de dados, utilizar ponteiro para a estrutura.
*/
void ordemAlfabetica(pessoa p1, pessoa p2, pessoa p3);





/*#################################################################*/
/*###############            M�DIAS                 ###############*/
/*#################################################################*/


/*
M.01 - Seja a seguinte estrutura:
struct time {
int hora;
int min;
int seg;
}
Seja a seguinte declara��o:
struct time tempo; // vari�vel global

Fazer um programa contendo fun��es para: 
a) Receber uma quantidade de tempo em segundos e transformar a mesma em horas, 
minutos e segundo, preenchendo e imprimindo a vari�vel tempo.
b) Ler a vari�vel tempo (campos hora, min e seg) e devolver a quantidade de horas em 
segundos.
c) principal: chama as duas fun��es acima.
*/
void segundosParaHoras(int segundos);

int horasParaSegundos();


/*
M.02 - Elaborar um algoritmo que auxilie no controle de uma fazenda de gado. Cada 
cabe�a de gado possui as seguintes informa��es (Fazer esta quest�o sem ponteiro e 
depois com ponteiro): 
 -c�digo: c�digo da cabe�a de gado, 
 -leite: n�mero de litros de leite produzido por semana, 
 -alimento: quantidade de alimento ingerida por semana - em quilos, 
 -nasc: data de nascimento - m�s e ano, 
 -abate: �N" (n�o) ou �S� (sim). 
O campo nasc. � do tipo struct data que por sua vez, possui dois campos: 
 -m�s 
 -ano 
 
Declare um novo tipo C chamado Cabeca_de_gado que deve ser exatamente a 
estrutura acima. Crie uma fun��o que receba duas cabe�as de gado e imprima
os valores da vaca que produz mais leite por semana.
*/
void comparaVacas(Cabeca_de_gado c1, Cabeca_de_gado c2);





/*#################################################################*/
/*###############           DIF�CEIS                ###############*/
/*#################################################################*/


/*
D.01 - Seja uma estrutura para descrever os carros de uma determinada revendedora, 
contendo os seguintes campos:
 -marca: string de tamanho 15 
 -ano: inteiro
 -cor: string de tamanho 10
 -pre�o: real

a) Escrever a defini��o da estrutura carro.
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e 
global.
c) Definir uma fun��o para preencher o vetor vetcarros.
d) Definir uma fun��o que receba um pre�o e imprima os carros (marca, cor e ano) que 
tenham pre�o igual ou menor ao pre�o recebido.
e) Defina uma fun��o que receba a marca de um carro e imprima as informa��es de todos 
os carros dessa marca (pre�o, ano e cor).
f) Defina uma fun��o que receba ano, marca e cor e informe se existe ou n�o um 
carro com essas caracter�sticas. Se existir, informar o pre�o
*/
void preencherCarros();

void precoCarros(float preco);

void marcaCarros(char marca);

void caracteristicasCarros(int ano, char marca, char cor);