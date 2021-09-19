<?php
     $conex = mysqli_connect("localhost","root","","proyecto"); 

//8bP5gz$/68e-h2Z

        

            $nombre = trim($_GET['nombre']);
            $temperatura = trim($_GET['temperatura']);
            $fechareg = date("d/m/y");
            $consulta = "INSERT INTO temperatura(chipid, temperatura, fecha_reg) VALUES ('$nombre','$temperatura','$fechareg')";
            $resultado = mysqli_query($conex,$consulta);
            if ($resultado) {
                echo '
            <script>
            alert("El mensaje se envio correctamente");
            window.history.go(-1);
            </script>';
            }else{
                echo '
                <script>
                alert("Ups, no se puedo guardar en la Base de Datos");
                window.history.go(-1);
                </script>';
            }



            
            
    





?>





