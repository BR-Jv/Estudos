 

# Questão 01 - (Adaptada do beecrowd/1040)
Escreva um programa que recebe como entrada três números reais, correspondente às notas de um estudante, calcule a média aritmética destas notas, e a apresente com uma casa decimal após a mensagem "Media: ". Se a média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado" na linha seguinte. Se amédia for igual ou inferior a 3.0, imprima a mensagem "Aluno reprovado". Caso contrário, o programa deve exibir a mensagem "Aluno em recuperação".

No caso do aluno estar em recuperação, o programa recebe outro valor real correspondente à nota da prova obtida pelo aluno. Imprima então mensagem "Nota da prova: " acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2) e imprima a mensagem "Aluno aprovado" caso a média final seja 5.0 ou mais, ou "Aluno reprovado", caso a média tenha ficado 4.9 ou menos. Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno. 

|Exemplo de entrada | Exemplo de saída |
|-------------------|------------------|
|8.0 6.5 7.4 | Media: 7.3 Aluno aprovado|
|2.0 4.0 7.5 8.0 | Media: 4.5 Aluno em recuperação. Nota da prova: 8.0 Aluno aprovado. Media final: 6.3 |
|1.5 4.0 3.5 | Media: 3.0 Aluno reprovado | 

# Questão 02 - (Adaptada do beecrowd/1041)
Escreva um programa que recebe dois valores reais(x , y), representando as coordenadas de um ponto em um plano cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0)
Se o ponto estiver na origem, escreva a mensagem "Origem"
Se o ponto estiver sobre um dos eixos escreva "Eixo X" ou "Eixo Y".

|Exemplo de entrada | Exemplo de saída | 
|-------------------|------------------|
| 4.5 -2.2           | Q4                |
| 0.1 0.1 | Q1 |
| 0 0 | Origem | 
| 0 1 | Eixo Y |

# Questão 03 
Um jovem decidiu viajar pelo mundo e comprou uma mochila com capacidade para 20kg de carga. Para abastecer esta mochila, o jovem deve selecionar itens de uma sequência de n objetos forncecidos. As regras de seleção adotada pelo jovem foram as seguintes: 
   1. A decisão de inserir ou não um objeto na mochila é tomada à medida em que os objetos vão sendo fornecidos na sequência. Em outras palavras, obdecendo a ordem da sequência.
   
   2. Um objeto só será incluido na mochila se na mesma já não existir um objeto com o mesmo peso.
   
   3. Mesmo que não exista na mochila outro objeto com o mesmo peso do objeto em análise, um objeto só será incluído na mochila se seu peso somado ao peso total dos itens já incluidos na mochila, não superar os 20kg.
Escreva um programa que receba do usuário um número inteiro n, representando a quantidade de itens disponíveis para serem possivelmente carregados na mochila. Em seguida, receba uma sequência de n valores inteiros, representando os pesos de cada objeto disponível para ser colocado na mochila. Para cada valor recebido, faça o carregamento do objeto na mochila, apenas se o mesmo atender à regra de seleção explicada acima. Por fim, faça a impressão do peso total dos objetos carregados na mochila, no formato apresentado na tabela abaixo.

| Entrada | Saída Esperada | 
|---------|----------------|
| 1 10    | Peso Total na Mochila: 10 |
| 1 50 |  Peso Total na Mochila: 0 |
| 2 8 8 | Peso Total na Mochila: 8 | 
| 2 10 5 | Peso Total na Mochila: 15 | 
| 3 11 8 7 | Peso Total na Mochila: 19 | 
| 3 15 8 2 | Peso Total na Mochila: 17 | 
| 4 8 2 8 1 | Peso Total na Mochila: 11 | 

# Questão 04 
Sabe-se que uma matriz quadrada A qualquer é considerada simétrica se for igual à sua transposta.
Escreva um programa que receba do usuário um número inteiro positivo, seguido dos elementos de uma matriz A de n elementos. Feito isso, o programa deve imprimir na tela a mensagem "A matriz eh simetrica", caso a matriz A seja simétrica, ou a mensagem "A matriz nao eh simetrica", em caso contrário.

![questão 04, tabela](Estudos/images/Q04.png)<br>
**importante**: O programa deve estar correto e funcionar para qualquer matriz digitada e não apenas as matrizes específicas nos exemplos.

# Questão 05
Por definição, uma matriz é dita esparsa quando possui uma grande quantidade de elementos com valor zero. No contexto desta questão, **considere uma matriz esparsa quando ela possuir mais do que 70% dos seus elementos iguais a 0.**

1. Escreva um procedimento denominado lerMatriz, que receba como parâmetros: uma matriz bidimensional de números inteiros M, e dois números inteiros nl e nc, representando respectivamente o número de linhas e de colunas efetivamente armazenados em M. Considere que M pode conter até, no máximo, 10 colunas. A função deverá preencher os elementos da matriz M com valores fornecidos pelo usuário.

2. Escreva uma função do tipo bool denominado esparsa, que receba como parâmetros: uma matriz bidimensional de números inteiros M, e dois números inteiros nl e nc, representando respectivamente o número de linhas e colunas efetivamente armazenados em M. A função deverá retornar o valor *true*, caso matriz M seja esparsa ou *false* em caso contrário. 

3. Implemente um programa principal que receba do usuário dois números inteiros nl e nc. Em seguida, declare uma matriz de números inteiros M, com nl linhas e nc colunas. Utilize a função lerMatriz para preencher M com valores fornecidos pelo usuário. Utiliize a função esparsa para verificar se M é uma matriz esparsa. O programa deverá imprimir na tela a mensagem "A matriz eh esparsa", caso M seja uma matriz esparsa, ou a mensagem "A matriz nao eh esparsa", em caso contrário.

![questão 05, tabela](/Estudosimages/matriz_esparsa.png)<br>

# Questão 06 
1. Defina um tipo estruturado denominado **Vetor**, que será utilizado para representar vetores no espaço R³, e que contenha os campos x, y e z, todos do tipo double.

2. Implemente uma função denominada **soma**, que receba como parâmetros duas estruturas v1 e v2, do tipo Vetor definido acima, representando dois vetores no espaço R³. A função deverá calcular e retornar(através do comando return)uma estrutura do tipo Vetor, correspondente ao resultado do soma vetorial de v1 com v2.

3. Implemente uma programa principal(função main), que receba do usuário duas estruturas do tipo Vetor: v1 e v2. Em seguida, o programa deverá declarar uma nova estrutura do tipo Vetor, denominada v3. Utiilzando a função soma definida acima, fazer com que v3 seja igual à soma vetorial de v1 com v2. Por fim, fazer a impresão de v3 na tela. 

![questão 06, tabela](/Estudos/images/Q06.png)<br>

# Questão 07 
Enquanto engenheiro, você precisa desenvolver um sistema para controlar a entrada e saída de carros em um estacionamento. 

1. Defina um tipo estruturado denominado Horario, que contenha os seguintes membros: 
hora, do tipo inteiro, 
minuto, do tipo inteiro,
segundo, do tipo inteiro. 

2. Defina um tipo estruturado denominado Carro, que contenha os seguintes membros:
placa, do tipo string
entrada, do tipo Horario
saida, do tipo Horario 

3. No programa principal (função main), receba do usuário um número inteiro n. Em seguida, crie um vetor denominado BancoDeDados com capacidade para armazenar n elementos do tipo Carro. Preencha cada elemento do vetor com informações fornecidas pelo usuário.

4. Considerando-se que as informações contidas no vetor BancoDeDados não estão ordenadas sob qualquer aspecto e assumindo que os carros não podem pernoitar no estacionamento (todos os carros devem sair antes da meia noite da data de entrada), imprima na tela a placa do carro que permaneceu por mais tempo no estacionamento. Se dois ou mais carros permanecerem no estacionamento por um mesmo período de tempo, e esse for o maior período de permanência dentre os demais carros, deverá ser impressa na tela a placa do carro que primeiro aparece no vetor BancoDeDados.

![questão 07, tabela](/Estudos/images/Q07.png)<br>

# Questão 08
1.	Implemente uma função denominada contar, que receba como parâmetros duas palavras, s1 e s2, sem espaços em branco ou caracteres simbólicos. A função deve retornar quantos caracteres de s1 aparecem em s2, considerando as aparições repetidas.

2.	Escreva um programa principal (função main) que receba do usuário duas palavras s1 e s2. Considere que o usuário fornecerá palavras contendo apenas caracteres alfabéticos, sem espaços em branco. Em seguida, utilize a função contar para calcular quantos caracteres de s1 aparecem em s2. Por fim, imprima na tela o valor calculado.

Exemplos:<br>
Se s1 = "bola" e s2 = "boi", o resultado da função deve ser 2, pois o primeiro e o segundo caracteres de s1 aparecem uma vez cada em s2.<br>
Se s1 = "banana" e s2 = "bonde", o resultado da função deve ser 3, pois o primeiro, o terceiro e o quinto caracteres de s1 aparecem uma vez cada em s2.<br>
Se s1 = "bola" e s2 = "biobio", o resultado da função deve ser 4, pois o primeiro e o segundo caracteres de s1 aparecem duas vezes cada em s2.<br>
Veja abaixo alguns exemplos de possíveis entradas e as respectivas saídas esperadas para o programa.

![questão 08, tabela](/Estudos/images/Q08.png)<br>

# Questão 09 
Escreva um programa que receba do usuário duas strings s1 e s2. Considere que o usuário sempre fornecerá uma string s2 com tamanho menor ou igual ao de s1. Caso a string s2 esteja integralmente contida na string s1, modifique s1 de forma a remover todas as possíveis ocorrências de s2 em s1. Caso a string s2 não esteja contida na string s1, s1 deverá permanecer inalterada. Por fim, faça a impressão da string modificada s1 na tela.

![questão 09, tabela](/Estudos/images/Q09.png)<br>
