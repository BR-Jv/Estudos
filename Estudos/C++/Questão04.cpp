#include <iostream>

using namespace std;

int main(){
   bool control = true; 
   int ordem;
   cin >> ordem;
   int m[ordem][ordem]; 

   for(int row = 0;row < ordem; row++){
      for(int column = 0; column < ordem; column++){
         cin >> m[row][column];
      }
   }

   for(int row_output = 0; row_output < ordem; row_output++){
      /*
         Se em algum momento o control == false quer dizer que algum elemento da transposta não corresponde ao elemento da matriz normal.
      */ 
      if(control){
         for(int column_output = 0; column_output < ordem; column_output++){    
            if(m[row_output][column_output] !=  m[column_output][row_output]){ //Aqui estou comparando a matriz com sua transposta
               control = false;
            }
         }
      }else {
         break;
      }
      
   }
   
   string matrizStatus = (control) ? "A matriz eh simetrica" : "A matriz nao eh simetrica";
   cout << matrizStatus;
    
   return 0;
}
