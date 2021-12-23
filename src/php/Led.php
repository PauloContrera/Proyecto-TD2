<?php
include'conexion.php';

if(isset($_POST['prender1'])) {
    $Led1 =$_POST['prender1'];
    $Led2 ='1';
    $Led3 ='1';
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
     $consulta = "INSERT INTO `Led`(`LED1`, `LED2`, `LED3`, `fecha`) VALUES ('$Led1','$Led2','$Led3', '$fecha_actual')";
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
    $Led1 =$_POST['apagar1'];
    $Led2 ='1';
    $Led3 ='1';
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        $consulta = "INSERT INTO `Led`(`LED1`, `LED2`, `LED3`, `fecha`) VALUES ('$Led1','$Led2','$Led3', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
if(isset($_POST['prender2'])) {
    $Led2 =$_POST['prender2'];
    $Led1 ='1';
    $Led3 ='1';
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
     $consulta = "INSERT INTO `Led`(`LED1`, `LED2`, `LED3`, `fecha`) VALUES ('$Led1','$Led2','$Led3', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
    if(isset($_POST['apagar2'])) {
    $Led2 =$_POST['apagar2'];
    $Led1 ='1';
    $Led3 ='1';
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        $consulta = "INSERT INTO `Led`(`LED1`, `LED2`, `LED3`, `fecha`) VALUES ('$Led1','$Led2','$Led3', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
if(isset($_POST['prender3'])) {
    $Led3 =$_POST['prender3'];
    $Led2 ='1';
    $Led1 ='1';
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
     $consulta = "INSERT INTO `Led`(`LED1`, `LED2`, `LED3`, `fecha`) VALUES ('$Led1','$Led2','$Led3', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
    if(isset($_POST['apagar3'])) {
    $Led3 =$_POST['apagar3'];
    $Led2 ='1';
    $Led1 ='1';
    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        $consulta = "INSERT INTO `Led`(`LED1`, `LED2`, `LED3`, `fecha`) VALUES ('$Led1','$Led2','$Led3', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro del fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
    echo '<script>   window.history.go(-1);</script>';
}
?>