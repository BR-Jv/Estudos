#include <iostream>

using namespace std;


void ler_vet(int arr[], int size);
void imprime_vet(int arr[], int size);


int main(){
   int arr[5];
   int size = 5; 

   ler_vet(arr, size);
   imprime_vet(arr, size);

   return 0;
}

void ler_vet(int arr[], int size){
   cout << "entrei na primeira funcao" << endl;
   for(int i = 0; i < size ; i++){
      cout << "Digite os valores: ";
      cin >> arr[i];
   }

}

void imprime_vet(int arr[], int size){
   cout << "entrei na segunda funcao" << endl;
   for(int j = 0; j < size ; j++){
      cout << arr[j] << " ";
   }
}