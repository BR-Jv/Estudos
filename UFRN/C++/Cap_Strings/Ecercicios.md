# questão 01 
Implemente uma função que recebe como parâmetro de entrada uma string e como parâmetro de saída uma outra string. A função a ser implementada deve armazenar na string de saída a string de entrada na ordem inversa. A função main deve ler uma string e exibir na tela a string computada pela função

Exemplo: 
*Informa uma frase:* 
Esta e uma frase 
*Frase invertida:* 
esarf amu a atsE

# Questão 02 
Implemente uma função que recebe como parâmetro de entrada uma string e como parâmetro de saida uma outra string. A função a ser implementada deve armazenar na string de saída a string de entrada com todas as letras maiúsculas convertidas em minúsculas e vice-versa. A função main deve ler uma string e exibir na tela a string computada pela função. 
Exemplo: 
*Informe uma frase:* 
Estudos de linguagem de programacao 
*String resultante:* 
eSTUDOS DE LINGUAGEM DE PROGRAMACAO

# Questão 03 
Um palíndromo é uma palavra/frase que pode ser lida tanto da esquerda para a direita quanto da direita para a esquerda. Implemente uma função que recebe como parâmetro de entrada uma string e retorna verdadeiro caso ela seja um palíndromo ou falso caso contrário.

[O underline representa o espaço em branco]

Considere as duas versões do problema: 
(a) *Espaços em branco são considerados como parte da string:* 
osso: é palíndromo 
subi_no_onibus: não é palíndromo 
(b) *Espaços em branco não são considerados como parte da string:* 
subi_no_onibus: é palíndromo 
subi___no__onibus: é palíndromo 

A função main deve ler ums string e exibir na tela uma mensagem informando se a string é um palíndromo ou não utilizando a função implementada.

# Questão 04 
Implemente uma função que recebe como parâmetro de entrada uma string e como parâmetro de saída um vetor de inteiros de 26 posições. A função a ser implementada deve armazenar no vetor a contagem de cada caractere minúsculo que aparece na string: no posição 0 deve ser armazenada a quantidade de 'a's, na posição 1 a quantidade de 'b's e assim por diante até a posição 25, que deve armazenar a quantidade de 'z's. A função main deve ler uma string e exibir na tela quantas vezes parece cada caractere na frase utilizando a função implementada. 
Exemplo: 

*Imforme uma frase:*
estudos de linguagem de programacao 
*Contagem de caracrteres:*
a:4 
c:1
d:3
e:4
g:3
i:1
l:1
m:2
n:1
o:3
p:1
r:2
s:2
t:1
u:2

# Questão 05 
Implemente uma função que recebe como parâmetro de entrada uma string e como parâmetro de saída uma outra string. Assumindo que na string de entrada estará o nome completo de uma pessoa(separado por um único espaço entre cada nome e sem espaços antes do primeiro ou depois do último nome), a função a ser implementada deve armazenar na string de saída as iniciais do nome seguidas de ponto e espaço. A função main deve ler uma string contendo um nome completo e exibir na tela a string computada pela função
Exemplo: 
*Informe um nome:*
Joao Francisco da Silva
*String resultante:*
J. F. d. S.

# Questão 06 
Uma string s2 é considerada uma substring de uma string s1, se s2 fizer parte de s1. Implemente uma função que recebe como parâmetros de entrada duas strigs de entrada, s1 e s2. A função a ser implementada deve retornar verdadeiro se s2 for uma substring de s1 e falso caso contrário. A função main deve ler duas strings e exibir na tela uma mensafem informando se a segunda string lida é uma substring da primeira utilizando a função implemnetada. 
Exemplos: 
---Exemplo 1---
*Informa a primeira string:* 
Estudos de linguagem de programacao
*Informe a segunda string:*
ling 
A segunda string faz parte da primeira 
---Exemplo 2----
*Informe a primeira string:*
Estudos de linguagem de programacao
*Informe a segunda string:*
A CAO
A segunda string não faz parte da primeira 

# Questão 07 
Crie um programa que realiza a separação de string considerando que pode haver mais de um espaço separando cada palavra, mais de uma espaço antes da primeira palavra e mais de um espaço após a última palavra
Exemplo: 
   *Entrada:*
   ___Estudos_de__LIP___
   *Saída:*
   Estudos
   de
   LIP