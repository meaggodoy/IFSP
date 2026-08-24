<html>
    <head>
        <title>Exemplo 1 - Bloco Switch</title>
        <meta charset="utf-8">
    </head>
    <body>
        <h2>Uso de Switch em PHP</h2>
        <br>
        
        <?php
            $a = "PHP";
            switch ($a) {
                case "PHP":
                    echo $a, ' é igual a PHP';
                    break;
                case "Java":
                    echo '$a é igual a Java';
                    break;
                case "Curso":
                    echo '$a é igual a Curso';
                    break;
                default:
                    echo 'Curso não informado.';
            }
        ?>
    </body>
</html>