package Java;

import java.util.Scanner;

public class questão01 {
   public static void main(String[] args){
      Scanner leitor = new Scanner(System.in);
      int m , n;
      System.out.print("Digite o numero de linhas da matriz: ");
      m = leitor.nextInt();
      System.out.print("Digite o numero de colunas da matriz: ");
      n = leitor.nextInt();
      
      int matriz[][] = new int[m][n];

      //Entrada de dados  
      for(int row = 0; row < m; row++){
         for(int column = 0; column < n; column++){
            matriz[row][column] = leitor.nextInt(); 
         }
      }
      

      //Saida de dados 
      
      for(int row1 = 0; row1 < m; row1++){
         for(int column1 = 0; column1 < n; column1++){
            System.out.print( matriz[row1][column1]); 
            System.out.print(' ');
         }
         System.out.println(' ');
      }
      
   }

}

