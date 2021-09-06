<?php

$conexion=mysql_connect("192.168.56.1", "root");
mysql_select_db("prueba", $conexion);
mysql_query("SET NAMES 'utf8'");

$chipid=$_POST ['chipid'];
$temperatura=$_POST ['temperatura'];

mysql_query("INSERT INTO 'prueba'.'datos'('id','chipid','fecha','temperatura')VALUES (NULL, '$chipid', CURRENT_TIMESTAMP,'$temperatura');");
mysql_close();

echo "Datos ingresados correctamente"

?>