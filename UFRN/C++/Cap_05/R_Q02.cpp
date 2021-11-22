#include <iostream>

using namespace std;

char muda_caso (char x);

int main(){
   char c;
   cout << "Digite um caractere: " << endl;
   cin >> c;
   cout << "O caractere digitado foi: " << c << endl;
   cout << "O caractere digitado alterado: " <<  muda_caso(c) << endl;
   return 0;
}


char muda_caso (char c){
   int num_char = int(c);
   
   if (num_char > 90){
      num_char -= 32;
   }else {
      num_char += 32;
   }
   
   return (char)num_char;
  
}

