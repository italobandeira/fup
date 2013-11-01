#!/bin/bash
#script args
rm __code__ 2> /dev/null
num=1 
for x in $*
do
 echo "Arquivo $num = $x"
 cat "$x" >> __code__
 let num++
done
if [ $num -eq 1 ]
then
    echo "Sintaxe: ./parse.sh input1.c input2.c ..."
    exit
fi

sed -i 's/\/\*I/\\clearpage \\section\*{ /'  __code__
sed -i 's/I\*\//}/' __code__

sed -i 's/\/\*S/\\clearpage \\section{/'  __code__
sed -i 's/S\*\//}/' __code__

sed -i 's/\/\*Q/\\subsection{/'  __code__
sed -i 's/Q\*\//}/' __code__

sed -i 's/\/\*T/\\begin{verbatim}/'  __code__
sed -i 's/T\*\//\\end{verbatim}/'  __code__

sed -i 's/\/\/CB/\\begin{lstlisting}/'  __code__
sed -i 's/\/\/CE/\\end{lstlisting}/'  __code__

echo '\documentclass[11 pt]{article}' > __code.tex
cat parse_files/preambulo.tex >> __code.tex
echo '\begin{document}' >> __code.tex
cat parse_files/header.tex >> __code.tex
cat parse_files/example.tex >> __code.tex

cat __code__ >> __code.tex
echo '\end{document}' >> __code.tex

pdflatex __code.tex >> /dev/null
rm __code__ __code.tex *.aux *.log
