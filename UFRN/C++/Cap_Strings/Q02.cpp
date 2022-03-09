#include <iostream>
#include <cstring>

using namespace std;

/*
!Essa questão está incompleta 
?Entre 65 e 90 os caracteres são maiúsuclos 
?Entre 97 e 122 os caracteres são minúsculos
?A diferença entre maiúculas e minúsculas e de 32 
*/

int main(){
   char arr[] = "Estudos de linguagem de programacao";
   int size;
   size = strlen(arr) - 1;
   //Array transformado 
   char arr_t[size+1];
   int cont = 0;

   for(int i = 0; i <= size; i++){
      if( int(arr[i]) >= 65 && int(arr[i]) <= 90 ){
         arr_t[cont] = char( int(arr[i]) + 32 );
      }else if( int(arr[i]) >= 97 && int(arr[i]) <= 122 ){
         arr_t[cont] = char( int(arr[i]) - 32 );
      }else if( int(arr[i]) == 32 ){
         arr_t[cont] = arr[i];
      }    
      cont++;
   }

   cout << "Array digitada: " << arr << endl;
   cout << "Array transformada: " << arr_t;

   return 0;
}