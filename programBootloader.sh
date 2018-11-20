# programBootloader.sh
# pass the file to be prgrammed as an argument
# E.g. programBootloader Arduino-usbserial-uno.hex
dfu-programmer atmega16u2 erase
dfu-programmer atmega16u2 flash $1
dfu-programmer atmega16u2 reset
