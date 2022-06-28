#include <iostream>

using namespace std;

struct Vetor {
   double x;
   double y;
   double z;
};


Vetor soma(Vetor v1, Vetor v2);

int main(){
   Vetor v1, v2, vsoma;
   cout << "Coordenadas do vetor1: "<< endl;
   cin >> v1.x >> v1.y >> v1.z;
   cout << "Coordenadas do vetor2: "<< endl;
   cin >> v2.x >> v2.y >> v2.z;
   vsoma = soma(v1, v2);
   cout <<"Coordenadas de v1 + v2:" << endl;
   cout << "x: "<< vsoma.x << " y: " << vsoma.y << " z: " << vsoma.z;
   return 0;
}

Vetor soma(Vetor v1, Vetor v2){
   Vetor somaVetor;
   somaVetor.x = v1.x + v2.x;
   somaVetor.y = v1.y + v2.y;
   somaVetor.z = v1.z + v2.z;
   return somaVetor;
}
