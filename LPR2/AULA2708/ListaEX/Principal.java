package principal;

import javax.swing.JOptionPane;

public class Principal {

    public static void main(String[] args) {
        Exercicio ex = new Exercicio();
        ex.metodo1();
        ex.metodo2(5);
        
        Mostrador m = new Mostrador();
        m.mostraMensagem("amor fati");
        
        MedidorTemperatura mt = new MedidorTemperatura();
        mt.setTemperatura(26.0f);
        JOptionPane.showMessageDialog(null, "A temperatura armazenada foi: " + mt.getTemperatura());

        Cliente c = new Cliente();
        c.setNome("Maria Eduarda");
        c.setEndereco("Monte Mor");
        c.setTelefone(999999999);
        c.setEmail("teste@teste.br");
        JOptionPane.showMessageDialog(null, "Nome: " + c.getNome());
        JOptionPane.showMessageDialog(null, "Endereco: " + c.getEndereco());
        JOptionPane.showMessageDialog(null, "Telefone: " + c.getTelefone());
        JOptionPane.showMessageDialog(null, "Email: " + c.getEmail());
    }
}
