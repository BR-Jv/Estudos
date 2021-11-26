# Questão 01
Implemente um programa que receba como entrada duas datas (dia, mês e ano) e imprima na tela qual das duas datas é a mais antiga. Assuma que serão digitados dias entre 1 e 31 e meses entre 1 e 12.

**Exemplo de entrada:**
dia|mês|ano
:---:|:---:|:---:
11 |9  |1999 
10 |9  |1999
23 |7  |2016 
23 |7  |2016
1  |1  |2010 
1  |1  |2011

**Exemplo de saída:** 

A segunda data e mais antiga.<br>
As datas são iguais.<br>
A primeira data e mais antiga.

# Questão 02 
Escreva um programa que receba do usuário um número inteiro e imprima na tela o dobro.

# Questão 03 
Faça um programa que a cada dois inteiros lidos imprima sua respectiva soma. Cada resultado em uma linha.

**Exemplo:**
valor 1| valor 2 | saída
---|---|---
1  |2 | 3
3  |4 | 7
5  |6 | 11

# Questão 04 
Faça um programa que, ao ler 4 números (x1, y1, x2, y2) e considerando (x1, y1) e (x2, y2) como as coordenadas dos vértices opostos de um retângulo, calcule e imprima a sua área.

**Exemplo:**
x1|y1|x2|y2 | saída 
:---:|:---:|:---:|:---:|:---:
1 |2 |3 |4 | 4
2 |5 |2 |5 | 0
3 |3 |4 |4 | 1

# Questão 05 
Escreva um programa que recebe do usuário um número inteiro representando um ano válido qualquer, e imprima na tela o valor 1 caso esse ano seja bissexto e o valor 0, caso contrário.<br>
 
Um ano é bissexto se for divisível por 4, mas não por 100. Um ano também é bissexto se for divisível por 400.
<br>
Exemplo: 
Entrada | Saída
:---:|:---:
2      |0
4      |1
100    |0
400    |1
200    |0
204    |1

# Questão 06 
Escreva um programa que receba do usuário dois números inteiros. O primeiro número inteiro deve representar a quantidade total de cabeças dos animais existentes no cercado. O segundo número inteiro deve representar a quantidade total de patas dos animais existentes no cercado. Após o recebimento dos dados de entrada, o programa deve calcular e imprimir na tela as quantidades de coelhos e patos existentes no cercado, no seguinte formato:
No cercado existem XXX coelhos e YYY patos.
sendo XXX a quantidade de coelhos e YYY a quantidade de patos.

Exemplo: 

Entrada | Saída
---     |---
1 2     |No cercado existem 0 coelhos e 1 patos.
1 4     |No cercado existem 1 coelhos e 0 patos.
2 6     |No cercado existem 1 coelhos e 1 patos.
3 8     |No cercado existem 1 coelhos e 2 patos.
3 10    |No cercado existem 2 coelhos e 1 patos.
4 12    |No cercado existem 2 coelhos e 2 patos. 

# Questão 07
Utilizando o operador condicional ternário, escreva um programa que receba do usuário um número inteiro x. Em seguida, crie uma variável y do tipo inteiro e atribua a essa variável o valor da função f abaixo. Faça a impressão da variável y.

y = f(x) = 
      3x + 1, se x < 0 ; 
      5x + 2, se x >= 0;

Como exemplo, ao receber as entradas presentes na tebela abaixo, o programa deve apresentar na tela as saídas correspondentes

Entrada | Saída
:---:|:---:
-10     | -29
0       | 2
10      | 52

# Questão 08
Considerando-se uma variável x do tipo real, escreva um programa que recebe do usuário o valor de x e imprime na tela o valor da função f(x) definida abaixo: 
      f(x) = 
            2x+1, se x < 0
            1, se x = 0
            5x+10, se x > 0
como exemplo, ao receber as entradas presentes na tabela abaixo, o programa deve apresentar na tela as saídas correspondentes.
 
Entrada | Saída
:---:|:---:
-1      |   -1
0       |   1
1       |   15
2       |   20

# Questão 09 
Escreva um programa que receba do usuário dois números inteiros positivos, calcule e imprima na tela o valor do MDC entre eles

Exemplo: 
Entrada|Saída
---|---
12  9| 3
450 15| 15
63 77| 7
143 187|11   

# Questão 10
Implemente uma função que calcula e retorna o valor se sen(x) por meio da aproximação apresentada abaixo, sendo x seu parâmetro: 

sen(x) = x¹/1! - x³/3! + x<sup>5</sup>/5! - x<sup>7</sup>/7! ...

utilize os 10 primeiros termos da série para fazer a aproximação. Use sua função criada em um programa que lê do usuário vários valores em radianos, calculando e mostrando o valor do seno para cada um destes valores. A leitura deverá ser finalizada quando um valor negativo for informado.
