#! /usr/bin/python2
# -*- coding: utf-8 -*-
"""
Programa de parse.sh para trocar um .c em um .pdf .

Esse programa faz o parse entre um arquivo .c que utilize
as seguintes tags para um arquivo .pdf.

"""

import shlex
import sys
import os
import subprocess


def get_preamble():
    header = """
    \\usepackage[brazilian]{babel}
    \\usepackage[utf8]{inputenc}
    \\usepackage[T1]{fontenc}
    \\usepackage{inconsolata}
    \\renewcommand*\\familydefault{\\ttdefault}
    \\usepackage{fullpage}
    \\usepackage{comment}

    \\usepackage{listings}             % Include the listings-package
    \\usepackage{color}
    \\lstset{
        language=C++,
        keywordstyle=\\bfseries\\ttfamily\\color[rgb]{0,0,1},
        identifierstyle=\\ttfamily,
        commentstyle=\\color[rgb]{0.133,0.545,0.133},
        stringstyle=\\ttfamily\\color[rgb]{0.627,0.126,0.941},
        showstringspaces=false,
        basicstyle=\\small,
        %numberstyle=\\footnotesize,
        %numbers=left,
        %stepnumber=1,
        %numbersep=10pt,
        tabsize=2,
        breaklines=true,
        %prebreak = \\raisebox{0ex}[0ex][0ex]{\\ensuremath{\\hookleftarrow}},
        breakatwhitespace=false,
        %aboveskip={1.5\\baselineskip},
    columns=fixed,
    %  upquote=true,
    extendedchars=true,
    frame=single,
    % backgroundcolor=\\color{lbcolor},
    }

    \\lstset{%
            inputencoding=utf8,
            extendedchars=true,
            literate=%
            {é}{{\\'{e}}}1
            {è}{{\\`{e}}}1
            {ê}{{\\^{e}}}1
            {ë}{{\\¨{e}}}1
            {É}{{\\'{E}}}1
            {Ê}{{\\^{E}}}1
            {û}{{\\^{u}}}1
            {ù}{{\\`{u}}}1
            {â}{{\\^{a}}}1
            {à}{{\\`{a}}}1
            {á}{{\\'{a}}}1
            {ã}{{\\~{a}}}1
            {Á}{{\\'{A}}}1
            {Â}{{\\^{A}}}1
            {Ã}{{\\~{A}}}1
            {ç}{{\\c{c}}}1
            {Ç}{{\\c{C}}}1
            {õ}{{\\~{o}}}1
            {ó}{{\\'{o}}}1
            {ô}{{\\^{o}}}1
            {Õ}{{\\~{O}}}1
            {Ó}{{\\'{O}}}1
            {Ô}{{\\^{O}}}1
            {î}{{\\^{i}}}1
            {Î}{{\\^{I}}}1
            {í}{{\\'{i}}}1
            {Í}{{\\~{Í}}}1
    }
    """
    return header


def get_header(titulo, bolsista):
    header = "\\title{" + \
        'Disciplina de Fundamentos de Programacao\\\\\n' + \
        'Listas de Exercícios\\\\\n' + \
        titulo + \
        '}\n' + \
        '\\author{Prof. David Sena Oliveira\\\\\nBolsista. ' + \
        bolsista + \
        '\\\\ \nUniversidade Federal do Ceara - Quixadá}' + \
        '\\renewcommand{\\today}{Outubro de 2013} \n \\maketitle'
    return header


def parse_tags(texto, put_answer, put_tests):

    #Iniciando as alteracoes de parse
    #Infomacoes /*I  bla bla bla I*/
    texto = texto.\
        replace('/*S*', '\\clearpage \\section*{').\
        replace('/*S ', '\\clearpage \\section{').\
        replace('S*/', '}').\
        replace('/*Q*', '\\subsection{').\
        replace('/*Q ', '\\subsection{').\
        replace('Q*/', '}').\
        replace('/*T', '\\begin{verbatim}').\
        replace('T*/', '\\end{verbatim}').\
        replace('//CB', '\\begin{lstlisting}').\
        replace('//CE', '\\end{lstlisting}').\
        replace('/*CB', '\\begin{lstlisting}').\
        replace('CE*/', '\\end{lstlisting}').\
        replace('//HB', '\\begin{comment}').\
        replace('//HE', '\\end{comment}')

    if put_answer:
        #Answer     //AB  bla bla bla //AE
        texto = texto.replace('//AB', '\\begin{lstlisting}\n//Resposta').\
            replace('//AE', '\\end{lstlisting}')
    else:
        #Answer     //AB  bla bla bla //AE
        texto = texto.replace('//AB', '\\begin{comment}').\
            replace('//AE', '\\end{comment}')

    if put_tests:
        #tests //TB  bla bla bla //TE
        texto = texto.replace('//TB', '\\begin{lstlisting}').\
            replace('//TE', '\\end{lstlisting}')
        #texto = texto.replace('//TB', '\\begin{lstlisting}').\
        #    replace('//TE', '\\end{lstlisting}')
    else:
        #tests //TB  bla bla bla //TE
        texto = texto.replace('//TB', '\\begin{comment}').\
            replace('//TE', '\\end{comment}')

    return texto


def print_help():

    myhelp = """
    Script c2pdf.py

    Objetivo: transformar arquivos .c em .pdf usando latex.
    Para utilizar, voce precisa de um arquivo texto que esteja
    utilizando as tags de marcação. As tags podem ser vistas
    com o comando ./c2pdf.py --tags

    Opções
    -o output.pdf    Gera como resultado o arquivo output.pdf
    --prof           Gera o pdf com as respostas
    --help           Mostra a ajuda
    --tags           Mostra as tages de formatacao do arquivo .c
    --notest         Gera o pdf removendo os testes

    Formas de Uso:

    ./c2pdf.py input.c"
    Gera um arquivo input.pdf que inclui os testes apenas.

    ./c2pdf.py input.c --prof"
    Gera um arquivo input.pdf que inclui os testes e as respostas.

    ./c2pdf.py faceis.c medias.c dificeis.c -o vetores.pdf --prof"
    Gera um arquivo vetores.pdf que inclui os testes e as respostas,
    a partir da concatenação de todos os arquivos de entrada.
    Observe que a tag de TITULO e BOLSISTA deve ser colocada nas
    duas primeiras linhas do primeiro arquivo de entrada informado.
"""
    print myhelp


def print_tags():
    mytags = """

    Lista de tags:

    A linha //TITULO Nome do Titulo
        deve ser a primeira linha do arquivo
    A linha //BOLSISTA Nome do Bolsita
        deve ser a segunda linha do arquivo
    Caso existam múltiplos arquivo de entrada, essas tags só devem
        ser adicionadas ao primeiro arquivo de entrada.

    //HB e //HE   Para adicionar texto que não será impresso no pdf.
    //CB e //CE   Para adicionar trecho de código.
    //TB e //TE   Para adicionar trecho de código de testes.
    //AB e //AE   Para adicionar trecho de código de respostas.

    /*S  e  S*/   Para o tílulo de uma seção numerada.
    /*S* e  S*/   Para o tílulo de uma seção não numerada.
    /*Q  e  Q*/   Para o tílulo de uma questão.
    /*Q* e  Q*/   Para o tílulo de uma questão não numerada.
    /*T  e  T*/   Para um trecho de texto a ser inserido no pdf

    /*CB e CB*/   Para um trecho que código que fica comentado no .c,
                  mas aparece como código normal no .pdf

    Voce pode gerar um arquivo de exemplo com o codigo
    ./c2pdf.py --sample > main.cpp

    O cpp gerado é compilável. Esse é o objetivo do parse,
    ter ao mesmo tempo um arquivo que pode ser compilado e testado,
    que gera um pdf para os alunos.

    Gere o arquivo main.cpp e compile com
        g++ main.cpp
    Também gere o pdf usando
        ./c2tex_v1.py  main.cpp -o main_aluno.pdf
        ./c2tex_v1.py  main.cpp --prof -o main_prof.pdf
"""
    print mytags


def get_sample():

    mysample = """
    //TITULO   Perfume de Gardenia
    //BOLSISTA Obi Wan Kenobi

    //HB
    //arquivo main.cpp

    // Essa seção entre as tags HB e HE não aparecerá no pdf gerado.
    // Ela é util para incluir códigos que queremos incluir no arquivo.c
    // e que não queremos que apareça no documento final

    // Vamos incluir os includes  para rodar os exemplos que desenvolveremos.

    #include <iostream>
    using namespace std;
    //HE

    /*S* Instruções S*/
    //HB
    //    Um texto entre as tags /*S* e S*/ representa o Título de uma
    //    não numerada. Se for   /*S  e S*/ a seção será numerada, tal
    //    qual a seção abaixo:
    //HE

    /*S  Fáceis S*/

    //HB
    //    As tags /*Q texto Q*/ e /*Q* texto Q*/ são utilizadas para os títulos
    //    das questões, podemos colocar subseções numeradas ou não numeradas.
    //HE

    /*Q Pares ou ímpares Q*/

    //HB A tag /*T texto *T/ gera o texto que será gerado no pdf //HE

    /*T
    Objetivo: Utilizar a operação de módulo ( % ) para verificar se um
            número é par ou ímpar.
    Entrada : Um número inteiro.
    Saída   : 1, se o número for par.
            0, se o número for impar.
    T*/

    //HB
    // As tags de //CB  //CE define os blocos de código
    // As tags de //TB  //TE define os blocos de testes
    // As tags de //AB  //AE define os blocos de respostas
    //HE


    //CB
    int eh_par (int num);
    //CE
    //TB
    void  test_par()
    {
        cout << "    Eh_par\\n";
        cout << (eh_par(6) == 1) << endl;
        cout << (eh_par(3) == 0) << endl;
    }
    //TE
    //AB
    int eh_par(int x){
        return x%2==0;
    }
    //AE


    //HB
    //por fim precisamos da nossa própria main para testar os códigos
    int main(){
        test_par();
        return 0;
    }
    //HE
    """
    return mysample


def mymain(argv):
    """Funcao principal."""

    if len(argv) == 1:
        print_help()
        return

    #variavel que recebe os parametros passados ao programa
    param = argv[1:]

    titulo = 'Use tag //TITULO titulo do jogo'
    bolsista = 'Use a tag //BOLSISTA bolsista'
    put_answer = False
    put_tests = True
    default_output = True
    if "--notest" in param:
        param.remove("--notest")
        put_tests = False
    if "--prof" in param:
        param.remove("--prof")
        put_answer = True
    if "--help" in param:
        print_help()
        return
    if "--tags" in param:
        print_tags()
        return
    if "--sample" in param:
        print get_sample()
        return
    if "-o" in param:
        default_output = False
        ind = param.index("-o")
        output_file_name = param[ind + 1]
        param.remove("-o")
        param.remove(output_file_name)

    if default_output:
        output_file_name = param[0]

    output_file_name = output_file_name.replace('.pdf', '').\
        replace('.cpp', '').replace('.c', '')

    print "    Incluir Testes      :{}".format(put_tests)
    print "    Incluir Respostas   :{}".format(put_answer)
    print "    Arquivo de saida    :{}".format(output_file_name + '.pdf')

    print 'Aperte enter para continuar'
    raw_input()
    texto = ""

    fileone = open(param[0])
    titulo = fileone.readline()
    bolsista = fileone.readline()
    fileone.close()

    #mescla todos os inputs
    for input_file in param:
        c_input = open(input_file)
        texto = texto + c_input.read()
        c_input.close()

    texto = parse_tags(texto, put_answer, put_tests)
    texto = texto.replace(titulo, '').replace(bolsista, '')

    titulo = titulo.replace('//TITULO', '')
    bolsista = bolsista.replace('//BOLSISTA', '')

    str_add = get_header(titulo, bolsista)

    texto = \
        '\\documentclass[11 pt]{article}\n' + \
        get_preamble() + \
        '\\begin{document}\n' + \
        str_add + \
        '\\tableofcontents{}' + \
        texto + \
        '\n\\end{document}\n'

    output_file = open(output_file_name + '.tex', 'w')
    output_file.write(texto)
    output_file.close()

    proc = subprocess.Popen(
        shlex.split('pdflatex --interaction=nonstopmode {}'.
                    format(output_file_name + '.tex')))
    proc.communicate()

    proc2 = subprocess.Popen(
        shlex.split('pdflatex --interaction=nonstopmode {}'.
                    format(output_file_name + '.tex ')))
    proc2.communicate()

    os.unlink(output_file_name + '.aux')
    os.unlink(output_file_name + '.log')
    os.unlink(output_file_name + '.toc')
    os.unlink(output_file_name + '.tex')


if __name__ == "__main__":
    mymain(sys.argv)
