/*
Escreva um programa que recebe um número real referente a uma medida em metros e imprima esta medida em: pés, jardas e milhas. 
- Considere que um pé equivale à 0.3048 metros; 
-  Uma jarda equivale à 0.9144 metros; 
- Uma milha equivale à 1604.38 metros. 
*/
var metros = parseFloat(prompt("Digite um número em metros:"));
var pes = metros/0.3048;
var jardas = metros/0.9144;
var milhas = metros/1604.38;
alert("pes: "+pes+"\n"+"jardas: "+jardas+"\n"+"milhas: "+milhas);