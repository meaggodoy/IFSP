const btn_saudacao = document.querySelector('#saudacao');
const input_nome = document.querySelector('#nome');
const texto_saudacao = document.querySelector('#p_saudacao');

btn_saudacao.onclick = function() {
    event.preventDefault();

    if (input_nome.value === ""){
        alert("Digite seu nome para a saudação!");
    } else {
        texto_saudacao.innerText = "Olá, " + input_nome.value + "!";
    }
}


const btn_tema = document.querySelector('#tema');
const tema_escuro = document.querySelector('#main');
const tema_escuro_footer = document.querySelector('#footer');

btn_tema.onclick = function(event) {
    event.preventDefault();
    tema_escuro.classList.toggle("modo_escuro");
    tema_escuro_footer.classList.toggle("modo_escuro_footer");
}