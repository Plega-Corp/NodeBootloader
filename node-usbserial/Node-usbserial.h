#ifndef _NODE_USBSERIAL_H_
#define _NODE_USBSERIAL_H_

	/* Includes: */
		#include <avr/io.h>
		#include <avr/wdt.h>
		#include <avr/interrupt.h>
		#include <avr/power.h>

		#include "Descriptors.h"

		#include <LUFA/Drivers/Board/Board.h>
		#include <LUFA/Drivers/Board/LEDs.h>
		#include <LUFA/Drivers/Peripheral/Serial.h>
		#include <LUFA/Drivers/Misc/RingBuffer.h>
		#include <LUFA/Drivers/USB/USB.h>
		#include <LUFA/Platform/Platform.h>

	/* Macros: */
		/** LED mask for the library LED driver, to indicate TX activity. */
		#define LEDMASK_TX               LEDS_LED1

		/** LED mask for the library LED driver, to indicate RX activity. */
		#define LEDMASK_RX               LEDS_LED2

		/** LED mask for the library LED driver, to indicate that the USB interface is ready. */
		#define LEDMASK_USB_READY             (LEDS_LED1 | LEDS_LED2)


		/** LED mask for the library LED driver, to indicate that an error has occurred in the USB interface. */
		#define LEDMASK_USB_ERROR            (LEDS_LED1 | LEDS_LED2)

		/** LED mask for the library LED driver, to indicate that the USB interface is not ready. */
		#define LEDMASK_USB_NOTREADY      LEDS_LED1

		/** LED mask for the library LED driver, to indicate that the USB interface is enumerating. */
		#define LEDMASK_USB_ENUMERATING  (LEDS_LED1 | LEDS_LED2)

		#define BUFFER_NEARLY_FULL 64

	/* Function Prototypes: */
		void SetupHardware(void);

		void EVENT_USB_Device_Connect(void);
		void EVENT_USB_Device_Disconnect(void);
		void EVENT_USB_Device_ConfigurationChanged(void);
		void EVENT_USB_Device_ControlRequest(void);

		void EVENT_CDC_Device_LineEncodingChanged(USB_ClassInfo_CDC_Device_t* const CDCInterfaceInfo);
		void EVENT_CDC_Device_ControLineStateChanged(USB_ClassInfo_CDC_Device_t* const CDCInterfaceInfo);

#endif
