/*
   Faça um programa que recebe os coeficientes a, b e c de uma equação de segundo grau e calcula suas raízes.
*/
var a = parseInt(prompt());
var b = parseInt(prompt());
var c = parseInt(prompt());  	  
alert((-b + Math.sqrt( Math.pow(b, 2) - 4*a*c ))/(2*a)+" "+(-b - Math.sqrt( Math.pow(b, 2) - 4*a*c ))/(2*a) );