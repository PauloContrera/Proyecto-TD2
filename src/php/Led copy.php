<?php
include'conexion.php';

if(isset($_POST['prender1'])) {
    $Led =$_POST['prender1'];
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
     $consulta = "INSERT INTO Led(LED1, fecha) VALUES ('$Led', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
            echo $consulta;
            echo $resultado;
        }
    echo '<script>   window.history.go(-1);</script>';
}
    if(isset($_POST['apagar1'])) {
    $Led =$_POST['apagar1'];
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        $consulta = "INSERT INTO Led(LED1, fecha) VALUES ('$Led', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
if(isset($_POST['prender2'])) {
    $Led =$_POST['prender2'];
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
     $consulta = "INSERT INTO Led(LED2, fecha) VALUES ('$Led', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
    if(isset($_POST['apagar2'])) {
    $Led =$_POST['apagar2'];
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        $consulta = "INSERT INTO Led(LED2, fecha) VALUES ('$Led', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
if(isset($_POST['prender3'])) {
    $Led =$_POST['prender3'];
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
     $consulta = "INSERT INTO Led(LED3, fecha) VALUES ('$Led', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
    if(isset($_POST['apagar3'])) {
    $Led =$_POST['apagar3'];
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        $consulta = "INSERT INTO Led(LED3, fecha) VALUES ('$Led', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
?>