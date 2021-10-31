#include <iostream>

using namespace std;

int antigo(int valor1, int valor2){
   int old;
   if(valor1 == valor2){
      return 1;
   }else {
      if(valor1 > valor2){
         old = valor2;
      }else {
         old = valor1;
      }
   }
   return old;
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

   if(antigo(ano1, ano2) == ano1){
      cout<<DATA1;
   }else if(antigo(ano1, ano2) == 1){
      if(antigo(mes1, mes2) == mes1){
         cout<<DATA1;
      }else if(antigo(mes1, mes2) == 1){
         if(antigo(dia1, dia2) == dia1){
            cout<<DATA1;
         }else if(antigo(dia1, dia2) == 1){
            cout<<DATAIGUAL;
         }else {
            cout<<DATA2;
         }
      }else {
         cout<<DATA2;
      }
   }else{
      cout<<DATA2;
   }
   return 0;
}
