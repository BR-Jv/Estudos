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
   int n;
   
   //Quantidade de elementos do vetor db
   cout << "Digite a quantidade de elementos do vetor db: " << endl;
   cin >> n;
   
   Carro db[n];

   //Preenchimento do vetor
   for(int i = 0; i < n; i++){
      InputValues(db, i);
   }

   //Visualizando os elementos do vetor
   for(int j = 0; j < n; j++){
      OutputValues(db, j);
   }
   
   return 0;
}


void InputValues(Carro obj[], int index){
   cout << "Digite a placa do carro: " << endl;
   cin >> obj[index].Placa;
   
   //! Tenho que fazer uma validação nesse campo 
   cout << "Digite o horario(hh-mm-ss) de entrada do carro: " << endl;
   cin >> obj[index].entrada.hora >> obj[index].entrada.min >> obj[index].entrada.seg;
   
   //! Tenho que fazer uma validação nesse campo
   cout << "Digite o horario(hh-mm-ss) de saida do carro: " << endl;
   cin >> obj[index].saida.hora >> obj[index].saida.min >> obj[index].saida.seg;

};

void OutputValues(Carro obj[], int index){
   cout << "Placa do carro: "<< obj[index].Placa << endl ;
   cout << "Horario entrada: " << obj[index].entrada.hora << ":" << obj[index].entrada.min << ":" << obj[index].entrada.seg << endl; 
   cout << "Horario saida: " << obj[index].saida.hora << ":" << obj[index].saida.min << ":" << obj[index].saida.seg << endl;
};
