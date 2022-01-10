#include <iostream>

using namespace std; 

int function(char arr[], int size, char x);

/*
   ?Agora eu quero escolher o tamanho do vetor e quais são os seus caracteres.
   ?Quero escolher qual caractere vai ser procurado. 
*/
int main(){
   cout << "O programa iniciou" << endl;
   
   int size;
   cout << "Qual o tamanho do array ? ";
   cin >> size;
   
   char arr[size]; 
   cout << "ensira os caracteres do array: " << endl;
   for(int i = 0;i < size;i++){
      cin >> arr[i];
   }
   
   char search;
   cout << "Qual caractere deve ser procurado ? ";
   cin >> search;

   cout << "O caractere sendo procurado: " << search << endl;
   cout << "A quantidade de vezes que aparece na array: " << function(arr, size, search);  
   return 0;
}

int function(char arr[], int size, char x){
   int cont = 0;
   for(int i = 0;i<size;i++){
      if(arr[i] == x){
         cont++;
      }
   }
   return cont;
}