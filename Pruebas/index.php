<!DOCTYPE html>
<html>
<head>
 <title>Formulario</title>
 <link rel="stylesheet" href="main.css">
</head>
<body>
<form method="POST">
 <h1>DATOS</h1>
 <input type="text" name="name" >
 <input type="email" name="email" >
 <input type="submit" name="Enviar" >
 </form>
 <?php
    include("register.php");
 ?>

</body>
</html>