#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char str[] = "subi no onibus";
   
   int size = strlen(str)-1;
   //array inversa
   int cont = 0;
   char str_inv[size+1];
   for(int i = size; i >= 0; i--){
      str_inv[cont] = str[i];
      cont++;
   }
   str_inv[cont] = '\0';

   cout << "A frase base: " << str << endl;
   cout << "A inversa: " << str_inv <<endl;
   int comparacao = strcmp(str, str_inv);
   

   if(comparacao == 0){
      cout << "A frase " << str << " e um polindromo";
   }else {
      cout << "As frases: "<< str << " e " << str_inv << " nao sao polindromos.";
   }

   return 0;
}