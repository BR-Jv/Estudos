#include <iostream>

using namespace std;

const int M = 10; 
 
void lerMatriz(int matriz[][M] ,int nl, int nc);
bool esparsa(int matriz[][M], int nl, int nc);

int main(){
   //nl = número de linhas; nc = número de colunas;
   int matriz[M][M], nl, nc;
   cin >> nl >> nc;
   lerMatriz(matriz, nl, nc);

   if(esparsa(matriz, nl, nc)){
      cout << "matriz eh esparsa";
   }else{
      cout << "matriz nao eh esparsa";
   }
   return 0;
}

void lerMatriz(int matriz[][M] , int nl, int nc){
   for(int row = 0; row < nl; row++){
      for(int column = 0; column < nc; column++){
         cin >> matriz[row][column];
      }
   }
}

bool esparsa(int matriz[][M], int nl, int nc){
   int calc, total_elementos;
   int zeros = 0;

   //Contagem de zeros dentro da matriz   
   for(int row = 0; row < nl; row++){
      for(int column = 0; column < nc; column++){
         if(matriz[row][column] == 0){
            zeros++; 
         } 
      }   
   }

   total_elementos = nl * nc; 
   calc = zeros*100/total_elementos; //Porcentagem de zeros dentro da matriz

   if(calc > 70){
      return true;
   }else{
      return false;
   }
   
}
