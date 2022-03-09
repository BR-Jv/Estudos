#include <iostream>

using namespace std;

int function(float arr[], int size);

int main(){
   /*
   ! size = 5
   ! arr = {5.3, 6.3, 7.8, 3.2, 9.8}   
   */
   int size;
   cout << "Digite o tamanho do vetor: ";
   cin >> size;
   float arr[size];
   cout << "Digite os elementos do vetor: ";
   for(int i = 0; i < size; i++){
      cin >> arr[i];
   }
   cout << "A quantidade de valores menores que a media: "<< function(arr, size);
   return 0;
}

int function(float arr[], int size){
   int cont = 0;
   float soma = 0;
   for(int i = 0; i < size; i++){
      soma += arr[i];
   }
   float media = soma/size;
   for(int j = 0; j < size;j++){
      if(arr[j] < media){
         cont++;
      }
   }
   
   return cont;
}