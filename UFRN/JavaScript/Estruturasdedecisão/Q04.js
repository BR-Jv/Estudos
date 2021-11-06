/*
    faça um programa que recebe uma data (3 inteiros, representando dia, mês e ano) e determina se essa é uma data válida. O programa deve considerar se o ano é bissexto. 
    A saída deve ser "Valida" para uma data válida e "Invalida" caso contrário. 
    Se por exemplo forem digitados os números 1, 2 e 3, eles represenatam uma data válida pois existe o dia 1 do mês 2 do ano 3. Contudo, se os números fossem 1, 13 e 3 seria inválido já que não existe o mês 13. 
    Será considerada inválida também datas com dias negativos ou dias maiores que 31. Anos negativos também serão considerados inválidos.
*/
var dia = parseInt(prompt());
var mes = parseInt(prompt());
var ano = parseInt(prompt());
var bissexto = false;
//teste de ano bissexto
if(ano%400 !== 0){
  if(ano%4 === 0 && ano%100 !== 0){
       bissexto = true;
    }
}else{
   bissexto = true;
}

if(ano > 0){
   if(mes > 0 && mes <= 12){ 
       if(bissexto === true && mes === 2){
        //se ano é bissexto e mês e fev
            if(dia > 0 && dia <= 29){
               alert("Valida");
            }else{
               alert("Invalida");
            }
        }else{
           if(mes == 2){
              if(dia > 0 && dia <= 28){
                  alert("Valida");
           }else{
                  alert("Invalida");
               }
            }else{
               if(dia > 0 && dia <= 31){
                  alert("Valida");
           }else{
                  alert("Invalida");
               }
        }
        }
    }else{
       alert("Invalida");
    }
}else{
   alert("Invalida");
}