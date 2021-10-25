#include <iostream>

using namespace std;

int main(){
   float peso;
   float altura;
   float imc;

   cout << "Digite seu peso:" << endl;
   cin >> peso;
   cout << "Digite sua altura:" << endl;
   cin >> altura;

   imc = peso / (altura*altura);

   cout << "Seu IMC:" << imc << endl;
   if (imc < 18.5){
      cout << "Abaixo do peso" << endl;
   }else if (imc > 18.5 && imc < 24.9){
      cout << "Normal" << endl;
   }else if (imc > 25 && imc < 29.9){
      cout << "Acima do peso" << endl;
   }else {
      cout << "Obeso" << endl;
   }
   
   return 0;
}
