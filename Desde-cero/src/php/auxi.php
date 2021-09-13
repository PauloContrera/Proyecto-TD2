

if (strlen($_POST['nombre']) >= 1 && strlen($_POST['temperatura']) >= 1) {

}else{
        echo '
        <script>
        alert("Ups! Ingrese valores en la casilla ");
        window.history.go(-1);
        </script>';
    }