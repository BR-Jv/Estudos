#include <iostream>

using namespace std;

int main(){
   const float PI = 3.14159;
   float raio;
   float diametro;
   float circunferencia;

   cout << "Digite o valo do raio" << endl;
   cin >> raio;

   diametro = raio*2;
   circunferencia = diametro * PI;

   cout << "O valor do diametro: " << diametro << endl;
   cout << "O valor da circunferencia: " << circunferencia <<endl;
   return 0;
}