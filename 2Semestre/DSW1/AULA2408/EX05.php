<html>
    <head>
        <title>Exemplo 1 - Bloco Switch</title>
        <meta charset="utf-8">
    </head>
    <body>
        <h2>Uso de Switch em PHP</h2>
        <br>

        <?php
            $a = 1;
            switch ($a) {
                case 0:
                    echo '$a é igual a 0';
                    break;
                case 1:
                    echo '$a é igual a 1';
                    break;
                case 2:
                    echo '$a é igual a 2';
                    break;
                default:
            }

            echo "<br>";
            echo "\$a é igual a $a";
        ?>

        <br>
        <a href="index.html">Voltar</a>
    </body>
</html>