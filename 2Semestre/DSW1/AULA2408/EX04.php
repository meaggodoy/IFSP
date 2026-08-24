<html>
    <head>
        <title>Gerenciador</title>
        <meta charset="utf-8">
    </head>
    <body>
        <?php
            echo "<h2>Dados do Cliente</h2>";
            echo "Nome: ";
            echo "<font color='blue'>";
            echo $_POST["nome"];
            echo "</font>";
            echo "<br>";
            echo "Endereço: ";
            echo "<font color='blue'>";
            echo $_POST["endereco"];
            echo "</font>";
            echo "<br>";
            echo "Cidade: ";
            echo "<font color='blue'>";
            echo $_POST["cidade"];
            echo "</font>";
            echo "<br>";
            echo "Sexo: ";
            echo "<font color='blue'>";
            echo $_POST["sexo"];
            echo "</font>";
            echo "<br>";
        ?>
        <br>
        <h2>Descrição</h2>
        <p>Este programa serve para testar o recebimento de variáveis provindas de formulário no PHP.</p>
        
        <br>
        <a href="EX04.html">Voltar</a>
    </body>
</html>