#include <iostream>

using namespace std;

int higher_number(int arr1[], int size1, int arr2[], int size2);

int main(){
   //Declaração de tamanho das array
   int size1, size2;
   cout << "Digite o tamanho do vetor1 e vetor2: " << endl;
   cin >> size1 >> size2;
   //Recolhendo os valores
   int arr1[size1], arr2[size2];
   for(int loop = 0; loop < 2; loop++){
      if(loop == 0){
         cout << "Digite os valores do primeiro vetor: " << endl;
         for(int loop_one = 0; loop_one < size1; loop_one++){
            cin >> arr1[loop_one];
         }
      }else {
         cout << "Digite os valores do segundo vetor: " << endl;
         for(int loop_two = 0; loop_two < size2; loop_two++){
            cin >> arr2[loop_two];
         }
      }
   }
   //chamada da função 
   cout << "O maior numero digitado e: "<< higher_number(arr1, size1, arr2, size2);
   return 0;
}

int higher_number(int arr1[], int size1, int arr2[], int size2) {
   int more = 0;
   for(int i = 0; i < 2;i++){ //não modifico o valor de more no segundo loop
      if(i == 0){ //loop_one
         for(int j = 0; j < size1; j++){
            if(arr1[j] > more){
               more = arr1[j];
            }
         }
      }else { //loop_two
         for(int x = 0; x < size2; x++){
            if(arr2[x] > more){
               more = arr2[x];
            }
         }
      }
   }
   return more;
}