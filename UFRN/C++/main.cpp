#include <iostream>

using namespace std;

void modification(char& x);

int main(){
  char letra = 'a';
  cout << letra << endl;
  modification(letra);
  cout << letra;
  return 0;
}

void modification(char& x){
  x = 'b';
}
