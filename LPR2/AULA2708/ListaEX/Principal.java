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
    }
}
