/*
   Vamos fazer um programa que que leia três valores e determine qual o menor deles. 
*/
var n1 = parseInt(prompt());
var n2 = parseInt(prompt());
var n3 = parseInt(prompt()); 
if(n1 < n2 && n1 < n3){
	var menor = n1;
}
if(n2 < n1 && n2 <n1){
	var menor = n2;
}
if(n3 < n2 && n3 < n1){
	var menor = n3;
}alert(menor);