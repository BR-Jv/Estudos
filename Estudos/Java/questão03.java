package Java;

import java.util.Scanner;

public class questão03 {
   public static void main(String[] args){
      Scanner leitor = new Scanner(System.in);
      
      double a, b ,c, delta, rootOne, rootTwo;
      
      System.out.println("Type three values: ");
      a = leitor.nextFloat();
      b = leitor.nextFloat();
      c = leitor.nextFloat();
      leitor.close();
      
      delta = Math.pow(b, 2) - (4*a*c);
      
      if(2*a == 0 || delta < 0){
         System.out.println("Impossível calcular");
      }else {
         rootOne= -b + Math.sqrt(delta);
         rootTwo= -b - Math.sqrt(delta);
         System.out.printf("R1 = %.5f%n", rootOne / (2*a));
         System.out.printf("R2 = %.5f%n", rootTwo / (2*a));
      }

   }

}