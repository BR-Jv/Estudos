/* 
   Faça um programa que recebe a idade de uma pessoa e informa se ela pode: 
   -pode votar, mas não dirigir -> idade até 17 anos
   -pode dirigir e votar -> maior de 18 anos 
   -não pode nenhum dos dois -> 16 anos. 
   Veja que quem está com 16 ou 17 vota mas não dirige.
*/
var idade = parseInt(prompt());
if(idade < 16){
	alert("não pode votar e nem dirigir")
}else{
	if(idade < 18){
    	alert("pode votar, mas não dirigir")
	}else{
    	alert("pode votar e dirigir")
    }
}