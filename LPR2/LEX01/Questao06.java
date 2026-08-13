import java.util.Scanner;

public class Questao06 {
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
	    
		int[] vetor = new int [3];
		
		for (int i = 0; i < 3; i++) {
		    System.out.println("Informe o valor: ");
		    vetor[i] = scanner.nextInt();
		}
		
        for (int i = 0; i < 3; i++) {
		    System.out.println("Posicao " + i + ": " + vetor[i]);
		}
        
        scanner.close();
	}
}
