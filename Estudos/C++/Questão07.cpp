#include <iostream>

using namespace std;

struct Horario {
   int hora, min, seg;
};

struct Carro {
   string Placa;
   Horario entrada, saida;
};

void OutputValues(Carro obj[], int index);

void HorarioEntrada(Carro obj[], int index,bool &key);

void HorarioSaida(Carro obj[], int index);

int main(){
   int n;
   bool key = true; //Usada para saber se a função HorarioSaida e outputvalues devem ser executados;
   
   cout << "Digite a quantidade de elementos do vetor db: " << endl;
   cin >> n;
   
   Carro db[n];

   //Preenchimento do vetor
   for(int i = 0; i < n; i++){
      HorarioEntrada(db, i, key);
      if(key){
         HorarioSaida(db, i);
      }else{
         cout << "Algo deu errado no horario de entrada.";
      }
   }

   //Visualizando os elementos do vetor
   if(key){
      for(int j = 0; j < n; j++){
         OutputValues(db, j);
      }
   }else {
      cout << " Programa finalizado antes do previsto.";
   };
   
   return 0;
}

void HorarioSaida(Carro obj[], int index){
   int hora, min, seg;

   cout << "Digite o horario(no formato, hh-mm-ss) de saida do carro: " << endl;
   
   //Iniciei a validação por hora.
   cin >> hora;
   if(hora >= 0 && hora <= 23){
      obj[index].saida.hora = hora;
      //Sendo hora um valor válído, eu faço a validação do minuto em seguida.
      cin >> min;
      if(min >= 0 && min <= 59){
         obj[index].saida.min = min;
         //Seguindo a lógica anterior, o próximo passo é validar os segundos.
         cin >> seg;
         if(seg >= 0 && seg <= 59){
            obj[index].saida.seg = seg;
         }else {
            cout << "Erro, hora inválido.";
         }
      }else {
         cout << "Erro, hora inválido.";
      }
   }else {
      cout << "Erro, hora inválido.";
   }
}

//Segue a mesma lógica de HorarioSaida()
void HorarioEntrada(Carro obj[], int index,bool &key){
   int hora, min, seg;

   cout << "Digite a placa do carro: " << endl;
   cin >> obj[index].Placa;

   cout << "Digite o horario(no formato, hh-mm-ss) de entrada do carro: " << endl;
   
   //Iniciei a validação por hora.
   cin >> hora;
   if(hora >= 0 && hora <= 23){
      obj[index].entrada.hora = hora;
      //Sendo hora um valor válído, eu faço a validação do minuto em seguida.
      cin >> min;
      if(min >= 0 && min <= 59){
         obj[index].entrada.min = min;
         //Seguindo a lógica anterior, o próximo passo é validar os segundos.
         cin >> seg;
         if(seg >= 0 && seg <= 59){
            obj[index].entrada.seg = seg;
         }else {
            cout << "Erro, hora invalido."<< endl;
            key = false;
         }
      }else {
         cout << "Erro, hora invalido."  << endl;
         key = false;
      }
   }else {
      cout << "Erro, hora invalido."<< endl;
      key = false;
   }
}

void OutputValues(Carro obj[], int index){
   cout << "Placa do carro: "<< obj[index].Placa << endl ;
   cout << "Horario entrada: " << obj[index].entrada.hora << ":" << obj[index].entrada.min << ":" << obj[index].entrada.seg << endl; 
   cout << "Horario saida: " << obj[index].saida.hora << ":" << obj[index].saida.min << ":" << obj[index].saida.seg << endl;
};
