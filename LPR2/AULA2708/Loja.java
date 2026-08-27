package loja;

import javax.swing.JOptionPane;

public class Loja {
    public static void main(String[] args) {
        Produto p = new Produto();
        
        String descricao = JOptionPane.showInputDialog(null, "Digite a descrição do produto:");
        float valor = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite o valor do produto:"));
        String marca = JOptionPane.showInputDialog(null, "Digite o nome da marca:");
        
        p.setDescricao(descricao);
        p.setValor(valor);
        p.setMarca(marca);
        
        System.out.println("Descricao do produto: " + p.getDescricao());
        System.out.println("Valor do produto: " + p.getValor());
        System.out.println("Marca do produto: " + p.getMarca());
        
        JOptionPane.showMessageDialog(null, "Descricao do produto: " + p.getDescricao());
        
        NotaFiscal nf = new NotaFiscal();
        nf.adicionarProduto(p);
    }
}
