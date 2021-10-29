#include <iostream>

using namespace std;

int soma(int valor1, int valor2){
   return valor1 + valor2;
}

int main(){
   int n1, n2;
   cin >> n1 >> n2;
   cout<<soma(n1, n2);
   return 0;
}