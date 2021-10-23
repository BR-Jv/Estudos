#Atividades do capítulo 2 - Tipos, Variáveis, Constantes e Operadores 

1. Descreva textualmente o que cada item faz.
Ex: media = (n1 + n2 + n3 + n4 + n5)/5; -> calcula a média aritmética entre cinco variáveis de tipo desconhecido e armazena o resultado em uma variável chamada media.

(a) int x;
(b) float salario = 1000.0; 
(c) char c = 'z';
(d) bool achou = false;
(e) float X, Y, Z;
(f) int a = 1, b = 2;
(g) cout < < "Programacao" < < endl;
(h) cin > > tamanho;
(i) cout < < "Eu tenho " < < anos < < "de idade\n";
(j) cin > > X > > Y > > Z;
(k) A = 17%5;
(l) media = (n1 + n2 + n3 + n4)/4;
(m) j = j + 1;
(n) j++;
(o) a > b;
(p) a || b;
(q) a <= x && x <= b;
(r) s == `m' || s == `M';
(s) a = b == c;

2. Indique o que será impresso em cada um dos comandos de saída (cout) a seguir:
(a) cout < < pow(3,2) + 1 < < endl;
(b) cout < < 5 + 0.5 < < endl;
(c) cout < < 'a' < < endl;
(d) cout < < (int) 'a' < < endl;
(e) cout < < 1 + '1' < < endl;
(f) cout < < (char) ('a' + 5) < < endl;
(g) cout < < (char) (1 + '1') < < endl;
(h) cout < < (5 > 3) < < endl;
(i) cout < < (2 || 1) < < endl;
(j) cout < < (0 && 'K') < < endl;
(k) cout < < (2 < 5 && 15/3 == 5)< < endl;
(l) cout < < ('j' + 3 > 'z' || 'z'> 'a') < < endl;

3. Escreva um programa que leia o raio de um círculo e informe o *diâmetro*, a *circunferência* e
a *área do círculo*.

4. Escreva um programa que leia um número inteiro de 5 dígitos, separe o número em dígitos
individuais e imprima os dígitos separados um do outro por três espaços cada um. Por
exemplo, se o número lido for 42139, seu programa deverá imprimir:
4 2 1 3 9

5. Calcula-se o IMC (Índice de Massa Corporal) de uma pessoa por meio da seguinte equação:

IMC = (Peso, em quilograma) / (altura, em metros)² 

Crie uma aplicação para calcular o IMC de uma pessoa. Essa aplicação deverá ler a partir do teclado o peso do usuário em Kg e a altura em m, imprimindo o valor calculado do IMC. Sua aplicação também deverá imprimir na tela a seguinte tabela:
VALORES DE IMC
Abaixo do peso: menor que 18,5;
Normal: entre 18,5 e 24,9;
Acima do peso: entre 25 e 29,9;
Obeso: 30 ou mais.

6. Crie uma aplicação que calcule a sua despesa diária com o automóvel, para que você possa
estimar quanto dinheiro poderia economizar com o transporte solidário, que também tem
outras vantagens, como reduzir as emissões de carbono e congestionamentos. A aplicação
deverá solicitar as seguintes informações ao usuário:
(a) Total de quilômetros dirigidos por dia;
(b) Custo por litro de combustível;
(c) Média de quilômetros por litro;
(d) Preço de estacionamento por dia;
(e) Gasto diário com pedágios.

7. Desenvolva um programa em C++ que determina a quantidade de crédito de um cliente em
uma loja de departamentos. Os seguintes dados estão disponíveis para cada cliente:
(a) Número da conta;
(b) Saldo no início do mês;
(c) Total de todos os débitos deste cliente no mês;
(d) Total de todos os créditos aplicados à conta deste cliente no mês;
(e) Limite de crédito autorizado.
