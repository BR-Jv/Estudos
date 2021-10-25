#include <iostream>

using namespace std;

int main(){
   const float PI = 3.14159;
   float raio;
   float diametro;
   float circunferencia;
   float areadocirculo;

   cout << "Digite o valo do raio" << endl;
   cin >> raio;

   diametro = raio*2;
   circunferencia = (2*PI) * raio;
   areadocirculo = PI * (raio*raio);

   cout << "O valor do diametro: " << diametro << endl;
   cout << "O valor da circunferencia: " << circunferencia <<endl;
   cout << "O valor da area do circulo: " << areadocirculo << endl;
   return 0;
}