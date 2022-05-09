#include <iostream>

using namespace std;

void quadrante(float x, float y);
void eixo(float x, float y);

int main(){
   float x , y;
   cin >> x >> y;

   if(x == 0.0 && y == 0.0){
      cout << "Origem";
   }else {
      eixo(x, y);
   }
   
   return 0;
}

void quadrante(float x, float y){
   if(x > 0.0){
      if(y > 0.0){
         cout << "Q1";
      }else {
         cout << "Q4";
      }
   }else {
      if(y > 0.0){
         cout << "Q2";
      }else {
         cout << "Q3";
      }
   }
}

void eixo(float x, float y){
   if(x == 0.0){
      cout << "Eixo Y";
   }else if( y == 0.0){
      cout << "Eixo X";
   }
   else {
      quadrante(x, y);
   }

}  