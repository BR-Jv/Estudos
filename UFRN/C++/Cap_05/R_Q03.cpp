#include <iostream>

using namespace std;

bool eh_primo(int num);

int main(){
   int num;
   cout << "Digite um numero: " << endl;
   cin >> num;
   
   while(num > 0)
   {   
      if(eh_primo(num) == true){
         cout << "O numero "<< num <<" e primo" << endl;
         
      }else {
         cout << "O numero "<< num <<" nao e primo" << endl;
         
      }
      cout << "Digite um numero: " << endl;
      cin >> num;
   }

   return 0;
}

bool eh_primo(int num){
   int cont = 2;
   int div = 1;
   
   while (cont <= num)
   {
      if(num%cont == 0){
         div++;
      }
      cont++;
   }

   if(div <= 2){
      return true;
   }else {
      return false;
   }
   
   return true;
}
   