<?php
    include("con_db.php");

    if (isset($_POST['register'])) {
        if (strlen($_POST['name']) >= 1 && strlen($_POST['email']) >= 1) {
            $name=trim($_POST['name']);
            $email=trim($_POST['email']);

            $consulta="INSERT INTO datos(nombre, email, fecha_reg) VALUES ('$name','$email','$fecha_reg')";
        
            $resultado=mysqli_query($conex,$consulta);
            if($resultado){
                ?>
                <h3 class="ok" >Todo salio bien</h3>
                <?php
            }
            else{
                ?>
                <h3 class="bad" >Algo salio mal</h3>
                <?php
            }
        }
        else{
            ?>
            <h3 class="bad" >Por favor complete los campos</h3>
            <?php
        }
    }
?>


<!-- INSERT INTO `datos`(`id`, `nombre`, `email`, `fecha_reg`) VALUES ([value-1],[value-2],[value-3],[value-4]) -->