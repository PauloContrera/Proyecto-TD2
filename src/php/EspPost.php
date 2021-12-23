<?php
include'conexion.php';


if ($con) {
    $consulta = "SELECT `id`, `LED1`, `LED2`, `LED3`, `fecha` FROM `Led` WHERE 1";
	$resultado = mysqli_query($con,$consulta);
    if ($resultado) {
		while ($row = $resultado->fetch_array()) {
	    $estado1 = $row['LED1'];
        $estado2 = $row['LED2'];
        $estado3 = $row['LED3'];
	}
    
    if(isset($_POST['aux'])) {
        $aux = $_POST['aux'];
    }
    if($aux==60){
    if(isset($_POST['temperatura'])) {
        $temperatura = $_POST['temperatura'];
    }
 
    if(isset($_POST['humedad'])) { 
        $humedad = $_POST['humedad'];
    }

    date_default_timezone_set('america/argentina/buenos_aires');
    $fecha_actual = date("Y-m-d H:i:s");
    
        echo " Temperaura : ".$temperatura."    Humedad : ".$humedad."  Fecha:"  .$fecha_actual."\n\n";

        $consulta = "INSERT INTO Tb_DHT22(Temperatura, Humedad, fecha_actual) VALUES ('$temperatura','$humedad', '$fecha_actual')";
        $resultado = mysqli_query($con, $consulta);
        if ($resultado){
            echo "El registro en la base de datos fue exitoso";
        } else {
            echo "Ups! El registro en la Base de datos no pudo subirse";
        }
}
   else{
        echo $estado1.$estado2.$estado3;
    }
 
    
} else {
    //echo "Ups! No puedo conectarse con la Base de datos";   
}}

