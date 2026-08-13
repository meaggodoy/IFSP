import java.util.Scanner;

public class Questao07 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        Participante[] participantes = new Participante[10];
        
        for (int i = 0; i < participantes.length; i++) {
            System.out.println("\nParticipante " + (i + 1) + ":");
            
            System.out.print("Digite o nome: ");
            String nome = scanner.nextLine();
            
            System.out.print("Digite o CPF: ");
            String cpf = scanner.nextLine();
            
            participantes[i] = new Participante(nome, cpf);
        }
        
        System.out.println("\n=== PARTICIPANTES CADASTRADOS ===");
        for (int i = 0; i < participantes.length; i++) {
            System.out.println((i + 1) + ". Nome: " + participantes[i].getNome() + " | CPF: " + participantes[i].getCpf());
        }
        
        scanner.close();
    }

    public static class Participante {
        private String nome;
        private String cpf;

        public Participante(String nome, String cpf) {
            this.nome = nome;
            this.cpf = cpf;
        }

        public String getNome() {
            return nome;
        }

        public String getCpf() {
            return cpf;
        }
    }
}
