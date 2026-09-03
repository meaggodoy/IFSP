package principal;

public class Cliente {
    private String nome;
    private String endereco;
    private int telefone;
    private String email;
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }
    
    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }
    public String getEndereco() {
        return endereco;
    }
    
    public void setTelefone(int telefone) {
        this.telefone = telefone;
    }
    public int getTelefone() {
        return telefone;
    }
    
    public void setEmail(String email) {
        this.email = email;
    }
    public String getEmail() {
        return email;
    }
}
