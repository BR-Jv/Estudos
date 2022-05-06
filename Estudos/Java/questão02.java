package Java;

import java.util.Scanner;

public class questão02 {
//Esse algoritmo pode ser melhorado !
   
   public static void main(String[] args){
      Scanner leitor = new Scanner(System.in);
      int a[][] = new int[3][4];
      int b[][] = new int[3][2];
      int c[][] = new int[3][6];
      
      //Uma função pode ser usada para preencher essas matrizes 
      System.out.println("Insira os elementos da matriz a: ");
      for(int x = 0; x < 3;x++){
         for(int y = 0; y < 4; y++){
            a[x][y] = leitor.nextInt(); 
         }
      }
      System.out.println("Insira os elementos da matriz b: ");
      for(int x1 = 0; x1 < 3;x1++){
         for(int y1 = 0; y1 < 2; y1++){
            b[x1][y1] = leitor.nextInt(); 
         }
      }
   
      for(int linha = 0; linha < 3;linha++){
         for(int coluna = 0; coluna < 6; coluna++){
            if(coluna < 4 ){
               c[linha][coluna] = a[linha][coluna];
            } else {
               c[linha][coluna] = b[linha][coluna-4];
            } 
         }
      }

      //Uma função para mostrar a matriz 
      for(int row = 0; row < 3;row++){
         for(int column = 0; column < 6; column++){
            System.out.print(c[row][column]);
            System.out.print(' '); 
         }
         System.out.println(' ');
      }

   }

}
