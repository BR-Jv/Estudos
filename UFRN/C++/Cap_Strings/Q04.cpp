#include <iostream>
#include <cstring>

using namespace std;

//? Quero uma função que vai retornar quais letras aparecem na string 
string func01(char arr[], char arr2[],int size);

int main(){
   char alf[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's' ,'t' ,'u', 'v', 'w' , 'x', 'y','z'};
   char str[] = "estudos de linguagem de programacao";
   int size = strlen(str);
   int n_str[26];

   /*
   for(int y = 0; y < 26; y++){
      n_str[y] = 0;
   }

   for(int x = 0; x < size;x++){
      if(str[x] == 'a'){
         n_str[0] = n_str[0] + 1;
      }else if(str[x] == 'b'){
         n_str[1] = n_str[1] + 1;
      }else if(str[x] == 'c'){
         n_str[2] = n_str[2] + 1;
      }

   }

   for(int z = 0; z < 26; z++){
      if(n_str[z] != 0){
         cout << alf[z] <<":"<< n_str[z] << endl;
      }
   }
   */   
   return 0;
}

string func01(char arr[], char arr2[], int size){
   //arr = str 
   //size = tomanho do str
   //arr2 = alf
   char array[0];
   for(int str_indice = 0; str_indice < size; str_indice++){
      for(int alf_indice = 0;alf_indice < 26;alf_indice++){
         if(arr[str_indice] == arr2[alf_indice]){
            
         }
      } 
   }
}