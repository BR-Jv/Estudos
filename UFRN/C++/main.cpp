#include <iostream>

using namespace std;


int main(){
   int numero, inverso, u, d, c, cm;
   
   cin >> numero;
   u = numero%10; 
   d = (numero - u) / 10 % 10;
   c = ((numero - u) / 10 - d)/10%10;  
   cm = ((numero - u) / 10 - d) / 10;
   

   cout << "Numero: " << numero << endl;

   inverso = u*1000 + d*100 + c*10 + cm;

   cout << "Inverso: " << inverso << endl;
   
   return 0;
}

