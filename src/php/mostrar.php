<?php 
$inc = include("conexion.php");

if ($inc) {
	$consulta = "SELECT `id`, `Temperatura`, `Humedad`, `fecha_actual` FROM `Tb_DHT22` WHERE 1";
	$resultado = mysqli_query($con,$consulta);
	if ($resultado) {
		while ($row = $resultado->fetch_array()) {
	    $id = $row['id'];
	    $Temperatura = $row['Temperatura'];
	    $Humedad = $row['Humedad'];
	    $fechareg = $row['fecha_actual'];
	}
	    ?>
        
                    <h2>Temperatura</h2>
                    <table>
                        <tr>
                            <td>Registro numero: </td>
                            <td> <?php echo $id; ?></td>
                        </tr>
                        <tr>
                            <td>Temperatura: </td>
                            <td> <?php echo $Temperatura?></td>
                        </tr>
                        <tr>
                            <td>Humedad: </td>
                            <td> <?php echo $Humedad; ?></td>
                        </tr>
                        <tr>
                            <td>Fecha Registro: </td>
                            <td> <?php echo $fechareg ?></td>
                        </tr>
                    </table>

                
	    <?php
	    
	}
}


?>