import java.util.Scanner;

public class Questao02 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		boolean motor = false;
		
		System.out.println("Informe o estado do motor (true/false): ");
		motor = scanner.nextBoolean();
        
        System.out.println("O motor estah: " + motor);
        scanner.close();
	}
}
