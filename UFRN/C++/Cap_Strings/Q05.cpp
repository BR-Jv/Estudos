#include <iostream>
#include <cstring>

using namespace std;
string function(string arg, int len);

int main(){
   int len;
   char nome[30];
   printf("Digite um nome: ");
   cin.getline(nome, 30);
   len = strlen(nome);
   function(nome, len);
   
   return 0;
}

string function(string arr, int len){
   
   for(int x = 0; x < len;x++){

      if(int(arr[x]) >= 65 && int(arr[x]) <= 90){
         cout << arr[x] << ". ";
      }else {
         if(int(arr[x]) == 32 && int(arr[x+1]) >= 97){
         cout << arr[x+1] << ". ";
         }
      }
      
   }

}