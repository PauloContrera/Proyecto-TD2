<!DOCTYPE html>
<html>
<head>
	<title>Registrar usuario</title>
	<meta charset="utf-8">
	<link rel="stylesheet" type="text/css" href="estilo.css">
</head>
<body>
    <form method="post">
    	<h1>¡Suscribete!</h1>
    	<input type="text" name="name" placeholder="Nombre completo">
    	<input type="email" name="email" placeholder="Email">
    	<input type="submit" name="register">
    </form>
        <?php 
        include("registrar.php");
        ?>
</body>
</html>




/*
$name = trim($_POST['name']);
            $email = trim($_POST['email']);
            $fechareg = date("d/m/y");
            $consulta = "INSERT INTO datos(nombre, email, fecha_reg) VALUES ('$name','$email','$fechareg')";
            $resultado = mysqli_query($conex,$consulta);


            if ($resultado) {
                ?> 
                <h3 class="ok">¡Te has inscripto correctamente!</h3>
               <?php
            } else {
                ?> 
                <h3 class="bad">¡Ups ha ocurrido un error!</h3>
               <?php
            }
        }   else {
                ?> 
                <h3 class="bad">¡Por favor complete los campos!</h3>
               <?php
        }
*/