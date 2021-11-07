#include <iostream>

using namespace std;

int main(){
   int ano;
   cout << "Digite o ano: " <<endl;
   cin >> ano;

   if(ano%4 == 0 && ano%100 != 0){
      cout << "1";
   }else if(ano%400 == 0){
      cout << "1";
   }else {
      cout << "0";
   }
   

   return 0;
}


