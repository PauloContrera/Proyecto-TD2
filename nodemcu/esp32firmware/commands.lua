wifi.start()
wifi.setmode(wifi.STATION)

station_cfg={}
station_cfg.ssid="Nombre_AP"
station_cfg.pwd="Contraseña_AP"
station_cfg.save=false
wifi.sta.config(station_cfg)
