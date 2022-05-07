#include <iostream>

using namespace std;

void status_aluno(float m);

int main(){
   float n1, n2, n3, media_a;
   cout << "Digite as notas de cada semestre: " << endl;
   cin >> n1 >> n2 >> n3;
   media_a = (n1 + n2 + n3) / 3;
   cout << "Media: " << media_a << ' ';
   status_aluno(media_a);
   
   return 0;
}

void status_aluno(float m){

   if(m >= 7.0){
      cout << "Aluno aprovado";
   }else if(m <= 3.0 ) {
      cout << "Aluno reprovado";
   }else {
      float nota_rec;
      cout << "Aluno em recuperacao" << endl;

      printf("Digite a nota da recuperacao: ");
      cin >> nota_rec;
      cout << "Nota da prova: " << nota_rec <<' ';
      
      float mediaFinal = (m+nota_rec)/2;
      
      if(mediaFinal <= 4.9){
         cout << "Aluno reprovado";
      } else {
         cout << "Aluno aprovado";
      }
      cout << " Media final: " << mediaFinal;
   }
};

