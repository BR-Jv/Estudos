#include <iostream>

using namespace std;

float media(float arr[], int size_arr);

int main(){
   float arr[4] = {5.0, 7.5, 8.5, 7.5};
   cout << media(arr, 4);
   return 0;
}

float media(float arr[], int size_arr){
   float soma;
   for(int i = 0; i < size_arr; i++){
      soma += arr[i];
   }
   return soma/size_arr;
}