/*
   Fazer um programa para:

   1. Ler, via teclado, um número inteiro. Assuma que o usuário vai digitar um número entre 10 e 99.

   2. Imprimir no monitor os dígitos deste número (1 dígito em cada linha). Exemplo: Se o usuário digitar 29, imprimir: 2 9
*/
var n = parseInt(prompt());
var d = Math.floor((n%100)/10);
var u = (n%100)%10;
alert(d+"\n"+u)