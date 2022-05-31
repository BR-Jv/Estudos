#include <iostream>

using namespace std;

bool checkArray(int array[], int length, int value);

int main(){
   int numObjetos, pesoObjeto;
   int pesoFinal = 0; //! PesoMochila

   cin >> numObjetos; //indica a quantidade da sequência
   int mochila[numObjetos]; 
   
   for(int x = 0; x < numObjetos; x++){
      cin >> pesoObjeto; //Peso do objeto atual

      if( checkArray(mochila, numObjetos, pesoObjeto) ){
         continue;
      }else {
         if(pesoFinal + pesoObjeto <= 20){
            mochila[x] = pesoObjeto;
            pesoFinal += pesoObjeto;
         }else {
            continue;
         }
      }
   };

   cout << "Peso Total na Mochila:" << pesoFinal;
   
   return 0;
}

//? Essa função verifica se o value está contido na array
bool checkArray(int array[], int length, int value) {
   for(int x = 0; x < length; x++){  
      if(array[x] == value){ 
         return true;
      }
   }
   return false;
}
