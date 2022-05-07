 

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
