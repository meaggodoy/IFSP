import java.util.Scanner;

public class Questao01 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		float salario = 0.00f;
		
		System.out.println("Informe seu salario: ");
		salario = scanner.nextFloat();
        
        System.out.println("O salario eh: " + salario);
        scanner.close();
	}
}
