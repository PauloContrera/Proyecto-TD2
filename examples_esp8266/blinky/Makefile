CC = xtensa-lx106-elf-gcc
CFLAGS = -I. -mlongcalls
LDLIBS = -nostdlib -Wl,--start-group -lmain -lnet80211 -lwpa -llwip -lpp -lphy -lc -Wl,--end-group -lgcc
LDFLAGS = -Teagle.app.v6.ld

blinky-0x00000.bin: blinky
	esptool.py elf2image $^

blinky: blinky.o

blinky.o: blinky.c

flash: blinky-0x00000.bin
	/home/cdlt/nodemcu/esptool/esptool.py erase_flash
	/home/cdlt/nodemcu/esptool/esptool.py write_flash 0x3fC000 ../../esp8266firmware/esp_init_data_default.bin
	/home/cdlt/nodemcu/esptool/esptool.py write_flash  -fm dout 0 blinky-0x00000.bin  0x10000 blinky-0x10000.bin

clean:
	rm -f blinky blinky.o blinky-0x00000.bin blinky-0x10000.bin
