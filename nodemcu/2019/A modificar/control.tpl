<html>
<head>
<title>Control</title>
<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
<div id="main">
<h1>Dispositivo 1</h1>
<p>
Si el dispositivo se encuentra conectado como interruptor, puede controlarlo desde aqui:
</p>
<form method="post" action="led.cgi">
<input type="submit" name="led" value="1">
<input type="submit" name="led" value="0">
</form>
</div>
</body></html>