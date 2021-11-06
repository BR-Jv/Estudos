#include <iostream>

using namespace std;
//Passagem de parametro por referencia
void div(int x, int y, int &q, int &r){
   q = x / y;
   r = x % y;
}
   


int main(){
   int x, y, q ,r;
   cin >> x;
   cin >> y;
   div(x, y, q, r);
   cout << "Q = " << q << endl;
   cout << "R = " << r;
   
   return 0;
}
