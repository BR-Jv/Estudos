#include <iostream>

using namespace std;

int maior(char char_1, char char_2, char char_3);

int main(){
   char c1, c2, c3;
   cout << "Digite tres caracteres: "<< endl;
   cin >> c1 >> c2 >> c3;
   cout << "O maior entre esses caracteres e o: " << (char) maior(c1, c2, c3);   
   return 0;
}

int maior(char c1, char c2, char c3){
   int maior, valor1, valor2, valor3;
   valor1 = c1;
   valor2 = c2;
   valor3 = c3;

   if(valor1 > valor2 && valor1 > valor3){
      maior = valor1;
   }else if(valor2 > valor1 && valor2 > valor3){
      maior = valor2;
   }else {
      maior = valor3;
   }

   return maior;
   
}
