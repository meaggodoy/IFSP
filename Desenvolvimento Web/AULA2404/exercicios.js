//Exercício 01:
let idade = 15;
const p_ex01 = document.querySelector('#ex01');
if (idade >= 18) {
    console.log("Maior de idade.");
    p_ex01.innerText = "EX01: Maior de idade.";
} else {
    console.log("Menor de idade.");
    p_ex01.innerText = "EX01: Menor de idade.";
}

//Exercício 02: Para facilitar a validação, coloca-se a maior medida primeiro
let nota = 7;
const p_ex02 = document.querySelector('#ex02');
if (nota >= 9) {
    console.log("Excelente!");
    p_ex02.innerText = "EX02: Excelente.";
} else if (nota >= 6 && nota < 9) { 
    console.log("Aprovado.");
    p_ex02.innerText = "EX02: Aprovado.";
} else {
    console.log("Reprovado.");
    p_ex02.innerText = "EX02: Reprovado.";
}

//Exercício 03:
let tema = "escuro";
const p_ex03 = document.querySelector('#ex03');
switch (tema) {
    case "claro":
        console.log("Tema claro.");
        p_ex03.innerText = "EX03: Tema claro.";
        break;
    case "escuro":
        console.log("Tema escuro.");
        p_ex03.innerText = "EX03: Tema escuro.";
        break;
    case "azul":
        console.log("Tema azul.");
        p_ex03.innerText = "EX03: Tema azul.";
        break;
    default:
        console.log("Tema não reconhecido.");
        p_ex03.innerText = "EX03: Tema não reconhecido.";
}

//Exercício 04:
const p_ex04 = document.querySelector('#ex04');
let resultadoFor = "";
for (let i = 1; i <= 10; i++) {
    console.log("For:", i);
    resultadoFor += i + " ";
}
p_ex04.innerText = "EX04: " + resultadoFor;

//Exercício 05:
const p_ex05 = document.querySelector('#ex05');
function saudacao(nome) {
    return "Olá, " + nome + "!";
}
let saudacao1 = saudacao("Maria Eduarda");
let saudacao2 = saudacao("Eduardo");
console.log(saudacao1);
console.log(saudacao2);
p_ex05.innerText = "EX05: " + saudacao1 + " | " + saudacao2;

//Exercício 06:
const btn_ex06 = document.querySelector('#btn_ex06');
const p_ex06 = document.querySelector('#p_ex06');
btn_ex06.addEventListener('click', function() {
    p_ex06.innerText = "EX06: Texto alterado!";
});

//Exercício 07:
const form_ex07 = document.querySelector('#form_ex07');
const msg_ex07 = document.querySelector('#msg_ex07');
form_ex07.addEventListener('submit', function(event) {
    const nome = document.querySelector('#nome_ex07').value;
    const email = document.querySelector('#email_ex07').value;

    if (nome === "" || email === "") {
        event.preventDefault();
        alert("Atenção: Preencha todos os campos obrigatórios!");
        msg_ex07.innerText = "Erro: Nome e E-mail não podem ficar vazios.";
    } else {
        event.preventDefault();
        msg_ex07.innerText = "Sucesso: Formulário válido!";
    }
});

//Exercício 08:
const pai_ex08 = document.querySelector('#pai_ex08');
const btn_ex08 = document.querySelector('#btn_ex08');

pai_ex08.addEventListener('click', function() {
    console.log("EX08 - Área pai.");
});

btn_ex08.addEventListener('click', function(event) {
    event.stopPropagation();
    console.log("EX08 - Botão filho.");
});

//Exercício 09:
const btn_ex09 = document.querySelector('#btn_ex09');
btn_ex09.addEventListener('click', function() {
    document.cookie = "preferenciaTema=escuro; path=/";
    console.log("Cookie armazenado:", document.cookie);
    alert("Preferência salva! Verifique o console.");
});