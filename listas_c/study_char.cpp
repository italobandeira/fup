/*Q Eh Numero Q*/
/*T Verificar se o char passado eh um numero */
bool is_num(char c);

//verificar se o char passado eh maiusculo
bool is_upper(char c);

//verificar se o char passado eh uma vogal maiuscula ou minuscula
bool is_vogal(char c);

//retornar 1 se não for nem letra minuscula nem maiuscula nem numero
//0 caso contrario
bool is_pontuacao(char c);

//verificar se o segundo char eh o maiusculo do primeiro
//ex u,U    k, K     i, I
bool min_maius(char low, char up);

//verificar se o num passado corresponde ao asc do char
// ex : se ' ' == 32
bool match_code(int num, char c);

//somar um numero a um char minusculo de forma modular
//c+1 = d, f+3 = i,  z + 1 = a
//use o operador de módulo
char soma_min( char c, int num);

//subtrair um numero a um char minusculo de forma modular
//c-1 = b, f-3 = c,  a - 1 = z
//use o operador de módulo
char sub_min( char c, int num);

//somar dois char minusculos de forma modular
//ex : a vale 0, b vale 1 ...
//a + a = a, b + c = d,
char soma_2char(char a, char b);

//subtrai dois char de forma modular
char sub_2char(char a, char b);

//multiplica dois char de forma modular
char mult_2char(char a, char b);

//dado um char op, que pode ser +. - ou *,
//operar dois char usando a operação passada
//use sua implementação dos metodos anteriores
char op_2char(char a, char b, char op);

//retornar o valor do char em hexadecimal
//ex: '1' vale 1, '9' vale 9, 'a' vale 10, 'b' 11, 'f' vale 15
int char2hex(char c);

//retornar o valor do char usando logica do baralho, se nao
//existir no baralho deve retornar 0
//ex: '1' vale 1, '9' vale 9, 'j' vale 10, 'q' 11, 'k' vale 12
int char2baralho(char c);

//retornar positivo se um dos dois char passado um for minusculo e o
//outro for numero
int lower_numero(char a, char b);


