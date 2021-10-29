#include <iostream>

using namespace std;

int maior(int valor1, int valor2){
   int maiorNum;
   if(valor1 == valor2){
      return 1;
   }else {
      if(valor1 > valor2){
         maiorNum = valor1;
      }else {
         maiorNum = valor2;
      }
   }
   return maiorNum;
}

int main(){
   const string DATA1 = "A primeira data e mais antiga";
   const string DATA2 = "A segunda data e mais antiga";
   const string DATAIGUAL = "As datas sao iguais";
   int dia1, mes1, ano1, dia2, mes2, ano2;

   cout << "Digite a primeira data: " << endl;
   cin >> dia1 >> mes1 >> ano1;
   cout << "Digite a segunda data: " << endl;
   cin >> dia2 >> mes2 >> ano2;

   if(maior(ano1 , ano2) == ano1){
      //ano2 é mais antigo
      if(maior(mes1, mes2) == mes1){
         //mes2 é mais antigo
      }else if(maior(mes1, mes2) == 1){
         //os meses são iguais 
      }else {
         //mes1 é mais antigo
      }
   }else if(maior(ano1, ano2) == 1){
      //anos são iguais
      if(maior(mes1, mes2)== mes1){

      }else if(maior(mes1, mes2)==1){
         if(maior(dia1, dia2)==dia1){
            cout<<DATA2; 
         }else if(maior(dia1, dia2)==1){
            cout<<DATAIGUAL;
         }else {
            cout<<DATA1;
         }
      }else {

      }
   }
   else {
      //ano1 é mais antigo
   }

   return 0;
}