This code is derived from the Arduino Due bootloader. See https://github.com/arduino/Arduino/tree/ide-1.5.x/hardware/arduino/sam/firmwares/atmega16u2 for the original source.

To setup the project and upload the Arduino usbserial application firmware to an ATMEGA32U2 using the Arduino USB DFU bootloader:
1. unpack the source into LUFA's Projects directory
2. set ARDUINO_MODEL_PID in the makefile as appropriate
3. do "make clean; make"
4. put the 16U2 into USB DFU mode:
4.a. assert and hold the 16U2's RESET line
4.b. assert and hold the 16U2's HWB line
4.c. release the 16U2's RESET line
4.d. release the 16U2's HWB line
5. confirm that the board enumerates as "ATmega16u2"
6. do "make dfu" (OS X or Linux - dfu-programmer must be installed first) or "make flip" (Windows - Flip must be installed first)

Check that the board enumerates as "Plega Node".
To enter DFU Mode connect pins 5 and 6 on P4
