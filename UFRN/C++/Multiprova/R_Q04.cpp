#include <iostream>

using namespace std;

float Area(float x1, float y1, float x2, float y2){
   float base = x2 - x1;
   float altura = y2 - y1;
   return base * altura;
}

int main(){
   float x1, y1, x2, y2;
   cin >> x1 >> y1 >> x2 >> y2;
   cout << Area(x1, y1, x2, y2); 
   return 0;
}
