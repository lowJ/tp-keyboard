# MCU name
MCU = at90usb1286

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = halfkay

# Build Options
#   comment out to disable the options.
#
BACKLIGHT_ENABLE = no
BOOTMAGIC_ENABLE = no 	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes   # Mouse keys
EXTRAKEY_ENABLE = yes 	# Audio control and System control
CONSOLE_ENABLE = yes  	# Console for debug
COMMAND_ENABLE = no     # Commands for debug and configuration
NKRO_ENABLE = yes		    # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no    # Enable keyboard underlight functionality
MIDI_ENABLE = no 		    # MIDI controls
UNICODE_ENABLE = no 		# Unicode
BLUETOOTH_ENABLE = no   # Enable Bluetooth with the Adafruit EZ-Key HID
#added
PS2_MOUSE_ENABLE = yes
PS2_USE_USART = yes


LAYOUTS = 66_ansi 66_iso
