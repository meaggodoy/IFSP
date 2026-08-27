package loja;

public class NotaFiscal {
    private Produto p;
    
    public void adicionarProduto(Produto p) {
        this.p = p;
        
        System.out.println("NF -> Produto adicionado com sucesso!");
        System.out.println("NF -> Descricao do produto: " + p.getDescricao());
    }
}
