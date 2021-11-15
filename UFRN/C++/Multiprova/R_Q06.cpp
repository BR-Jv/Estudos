#include <iostream>

using namespace std;

int main(){
   int total_cabecas, total_patas;
   if(total_cabecas >= 2){ //! Número de cabeças é igual ou maior que 2  
      switch (total_cabecas) //* número de cabeças 
      {
      case 2:
         if(total_patas == 4){
            cout << "No cercado existem 0 coelhos e 2 patos.";
         }else if(total_patas == 6){
            cout << "No cercado existem 1 coelhos e 1 patos.";
         }else if(total_patas == 8){
            cout << "No cercado existem 2 coelhos e 0 patos.";
         }
         break;
      case 3:
         if(total_patas == 6){
            cout << "No cercado existem 0 coelhos e 3 patos.";
         }else if(total_patas == 8){
            cout << "No cercado existem 1 coelhos e 2 patos.";
         }else if(total_patas == 10){
            cout << "No cercado existem 2 coelhos e 1 patos.";
         }else if(total_patas == 12){
             cout << "No cercado existem 4 coelhos e 0 patos.";
         }
         break;
      case 4:
         if(total_patas == 8){
            cout << "No cercado existem 0 coelhos e 4 patos.";
         }else if(total_patas == 10){
            cout << "No cercado existem 1 coelhos e 3 patos.";
         }else if(total_patas == 12){
            cout << "No cercado existem 2 coelhos e 2 patos.";
         }else if(total_patas == 14){
             cout << "No cercado existem 3 coelhos e 1 patos.";
         }else if(total_patas == 16){
            cout << "No cercado existem 4 coelhos e 0 patos.";
         }
         break;
      default:
         break;
      }
   }else{ //! número de cabeças é igual a 1
      switch (total_patas) //*números de patas
      {
      case 2:
         cout << "No cercado existem 0 coelhos e 1 patos.";
         break;
      case 4:
         cout << "No cercado existem 1 coelhos e 0 patos.";
         break;
      default:
         break;
      }
      
   }
   return 0;
}
