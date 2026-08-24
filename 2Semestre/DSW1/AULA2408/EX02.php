<html>
    <head>
        <title>Exemplo 1 - Uso de Funções</title>
    <meta charset="utf-8">
    </head>
<body>
    <h2>Uso de funções em PHP</h2>
    <br>

    <?php
        function soma ($a,$b) {
            $c = $a + $b;
            return $c;
        }
        
        $a = 5;
        $b = 10;
        echo "A funcao soma() aplicada aos valores $a e $b resulta em: ".soma($a,$b);
    ?>

    <br>
    <a href="index.html">Voltar</a>
</body>
</html>