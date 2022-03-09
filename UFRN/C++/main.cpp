#include <iostream>

using namespace std;

struct Produto {
  int codigo;
  double valor;
};

Produto maisCaro(Produto VP[], int n);

int main(){
  int n;
  cin >> n;
  Produto VP[n];
  for(int i = 0;i<n;i++){
    cin >> VP[i].codigo; 
    cin >> VP[i].valor;
  }

  Produto MC = maisCaro(VP, n);
  
  cout << MC.codigo << endl;
  cout << MC.valor;
  
  return 0;
}

Produto maisCaro(Produto VP[], int n){
  Produto mais_caro;
  mais_caro.valor = 0;

  for(int j= 0;j < n;j++){
    if(VP[j].valor > mais_caro.valor){
      mais_caro.valor = VP[j].valor;
      mais_caro.codigo = VP[j].codigo;
    }
  }

  return mais_caro;
};