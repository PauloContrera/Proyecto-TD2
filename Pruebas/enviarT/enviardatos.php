<?php
$conexion = mysql_connect("localhost","root","","tutorial");
mysql_select_db("tutorial", $conexion);
mysql_query("SET NAMES 'utf8'");

$chipid = $_POST ['chipid'];
$temperatura = $_POST ['temperatura'];

mysql_query("INSERT INTO tabla (id, chipId, fecha, temperatura) VALUES (NULL, '$chipid', NULL, '$temperatura');");
// INSERT INTO `tabla`(`id`, `chipId`, `fecha`, `temperatura`) VALUES ([value-1],[value-2],[value-3],[value-4])
mysql_close();

echo "Datos ingresados correctamente.";
?>