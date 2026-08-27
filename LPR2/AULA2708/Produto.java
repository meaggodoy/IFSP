package loja;

public class Produto {
    private String descricao;
    private float valor;
    private String marca;
    
    public Produto(){
        descricao = "";
        valor = 0f;
    }
    
    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }
    public String getDescricao() {
        return descricao;
    }
    
    public void setValor(float valor) {
        this.valor = valor;
    }
    public float getValor() {
        return valor;
    }
    
    public void setMarca(String marca) {
        this.marca = marca;
    }
    public String getMarca() {
        return marca;
    }
}
