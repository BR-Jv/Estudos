/*
    Sabendo que 1 de janeiro de 2013 foi uma terça-feira, escreva um programa que receba o número do dia do ano e diga em qual dia da semana (segunda, terça, e assim por diante) cai esse dia no ano de 2013. Se o usuário inserir um número maior que 365 apresentar a seguinte mensagem: "2013 possui apenas 365 dias".
*/
var k = parseInt(prompt());
var dia_da_semana = k%7;
if(k <= 365){
   switch(dia_da_semana){
       case 0:
           alert("segunda");
            break;
        case 1:
           alert("terça");
            break;
        case 2:
           alert("quarta");
            break;
        case 3: 
           alert("quinta");
            break;
        case 4: 
           alert("sexta");
            break;
          case 5:
           alert("sábado");
            break;
        case 6: 
           alert("domingo");
            break;         
    }
}else{
   alert("2013 possui apenas 365 dias");
}