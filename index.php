<!DOCTYPE html>
<html lang="es">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="src/css/main.css">
    <title>Proyecto TD2</title>
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Open+Sans&family=Orbitron&family=Roboto&display=swap" rel="stylesheet">
    <link rel="shortcut icon" href="src/images/icons/coding.png">
</head>
<body>
    <div class="fondo">

        <div class="grilla-filas">
            <div class="titulo">
                <h1>Control de luces y visualizacion de temperatura <br> con el ESP8266 Nomencu</h1>
            </div>
            <div class="divisor">
                <div class="led">
                    <h2>Control de luces</h2>
                    <div class="led-luces">
                        <h3>Luz numero 1</h3>
                        <form action="src/php/EspPost.php" method="POST">
                            <input type="submit" name="prender1" value="Encender">
                            <input type="submit" name="apagar1" value="Apagar">
                        </form>
                        <h3>Luz numero 2</h3>
                        <form action="src/php/EspPost.php" method="POST">
                            <input type="submit" name="prender2" value="Encender">
                            <input type="submit" name="apagar2" value="Apagar">
                        </form>
                        <h3>Luz numero 3</h3>
                        <form action="src/php/EspPost.php" method="POST">
                            <input type="submit" name="prender3" value="Encender">
                            <input type="submit" name="apagar3" value="Apagar">
                        </form>
                    </div>
                </div>
                <div class="visual">
                <?php 
                  include("src/php/mostrar.php");
                  ?>
                  </div>
            </div>
        </div>
        <footer class="pie">
            <h3>Hecho por Paulo Contrera y Ismael Sinchicay. </h3>
            <div class="redes">
                <h3>En el icono de Github encontrar todo el codigo</h3>
            
            <a href="https://api.whatsapp.com/send/?phone=5492634203042&text=Hola+Paulo.++Me+gustiria+hacerte+una+consulta">
                <img src="src/images/icons/github.svg" alt=""></a>
            </div>
          </footer>

    </div>

</body>
</html>