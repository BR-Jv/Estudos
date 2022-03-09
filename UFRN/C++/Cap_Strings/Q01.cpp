#include <iostream>
#include <cstring>

using namespace std;

string inversa(char arr[]);


int main(){
   char arr[250];
   cout << "Digite uma frase: ";
   cin.getline(arr, 250);
   
   cout << "Frase digitada: " << arr <<endl;
   cout << "Frase invertida: " << inversa(arr);
   return 0;
}


string inversa(char arr[]){
   int size;
   size = strlen(arr)-1;
   char arr_inv[size+1];
   int cont = 0;
   for(int i = size; i >= 0; i--){
     arr_inv[cont] = arr[i];
     cont++;
   }
   arr_inv[cont] = '\0';
   return arr_inv;
}
