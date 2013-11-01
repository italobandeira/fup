/*#################################################################*/
/*###############            FÁCEIS                 ###############*/
/*#################################################################*/


/*
F.01 - Crie uma estrutura para representar uma casa com quantidade de quartos, cor, 
área e quantidade de portas. Crie uma função que receba duas casas, faça a leitura 
de seus atributos e os imprima na tela.
OBS.: Defina o tipo de dados como um ponteiro para a  estrutura.
*/
void imprimirCasa(casa c1, casa c1);


/*
F.02 - Crie uma estrutura para representar um professor.
Faça uma função que recebe 5 Professores e retorna a soma de seus salários. 

OBS.: Um Professor deve possuir nome, endereço, salário, idade, sexo, estado 
civil, data de admissão e quantidade de disciplinas. 
*/
float salarios(prof p1, prof p2, prof p3, prof p4, prof p5);


/*
F.03 - Uma pessoa possui nome, endereço e telefone. Utilizando estrutura,
faça  uma função que receba 3 pessoas e as imprima em ordem  alfabética.

OBS.: Considerar para ordem alfabética somente a primeira letra.
Ao definir o tipo de dados, utilizar ponteiro para a estrutura.
*/
void ordemAlfabetica(pessoa p1, pessoa p2, pessoa p3);





/*#################################################################*/
/*###############            MÉDIAS                 ###############*/
/*#################################################################*/


/*
M.01 - Seja a seguinte estrutura:
struct time {
int hora;
int min;
int seg;
}
Seja a seguinte declaração:
struct time tempo; // variável global

Fazer um programa contendo funções para: 
a) Receber uma quantidade de tempo em segundos e transformar a mesma em horas, 
minutos e segundo, preenchendo e imprimindo a variável tempo.
b) Ler a variável tempo (campos hora, min e seg) e devolver a quantidade de horas em 
segundos.
c) principal: chama as duas funções acima.
*/
void segundosParaHoras(int segundos);

int horasParaSegundos();


/*
M.02 - Elaborar um algoritmo que auxilie no controle de uma fazenda de gado. Cada 
cabeça de gado possui as seguintes informações (Fazer esta questão sem ponteiro e 
depois com ponteiro): 
 -código: código da cabeça de gado, 
 -leite: número de litros de leite produzido por semana, 
 -alimento: quantidade de alimento ingerida por semana - em quilos, 
 -nasc: data de nascimento - mês e ano, 
 -abate: ‘N" (não) ou ‘S’ (sim). 
O campo nasc. é do tipo struct data que por sua vez, possui dois campos: 
 -mês 
 -ano 
 
Declare um novo tipo C chamado Cabeca_de_gado que deve ser exatamente a 
estrutura acima. Crie uma função que receba duas cabeças de gado e imprima
os valores da vaca que produz mais leite por semana.
*/
void comparaVacas(Cabeca_de_gado c1, Cabeca_de_gado c2);





/*#################################################################*/
/*###############           DIFÍCEIS                ###############*/
/*#################################################################*/


/*
D.01 - Seja uma estrutura para descrever os carros de uma determinada revendedora, 
contendo os seguintes campos:
 -marca: string de tamanho 15 
 -ano: inteiro
 -cor: string de tamanho 10
 -preço: real

a) Escrever a definição da estrutura carro.
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e 
global.
c) Definir uma função para preencher o vetor vetcarros.
d) Definir uma função que receba um preço e imprima os carros (marca, cor e ano) que 
tenham preço igual ou menor ao preço recebido.
e) Defina uma função que receba a marca de um carro e imprima as informações de todos 
os carros dessa marca (preço, ano e cor).
f) Defina uma função que receba ano, marca e cor e informe se existe ou não um 
carro com essas características. Se existir, informar o preço
*/
void preencherCarros();

void precoCarros(float preco);

void marcaCarros(char marca);

void caracteristicasCarros(int ano, char marca, char cor);