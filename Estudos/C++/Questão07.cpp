#include <iostream>

using namespace std;

struct Horario {
   int hora, min, seg;
};

struct Carro {
   string Placa;
   Horario entrada, saida;
};

void InputValues(Carro obj[], int index);

void OutputValues(Carro obj[], int index);

int main(){
   /*
   int n, len; //Tamanho do meu Vetor
   Carro dbCar[n]; //"Banco de Dados" armazenando objetos do tipo Carro.
   cout << "Digite um valor para n: ";
   cin >> n;
   len = sizeof(dbCar)/sizeof(dbCar[0]);
   for(int i = 0; i < len; i++){
      dbCar[i].Placa;
      
   }   
   */
   
   Carro arr[3];
   
   InputValues(arr, 0);
   OutputValues(arr, 0);

   return 0;
}


void InputValues(Carro obj[], int index){
   cout << "Digite a placa do carro: " << endl;
   cin >> obj[index].Placa;
   cout << "Digite o horario(hh-mm-ss) de entrada do carro: " << endl;
   cin >> obj[index].entrada.hora >> obj[index].entrada.min >> obj[index].entrada.seg;
   cout << "Digite o horario(hh-mm-ss) de saida do carro: " << endl;
   cin >> obj[index].saida.hora >> obj[index].saida.min >> obj[index].saida.seg;

};

void OutputValues(Carro obj[], int index){
   cout << "Placa do carro"<< endl << obj[index].Placa;
};
