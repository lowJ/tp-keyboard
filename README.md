# tp-keyboard
Goal: Create a desktop usb keyboard using a keyboard extracted from a lenovo thinkpad l420.

Process:

I am going to use a teensy ++ 2.0 as the processor along with qmk, the firmware for the keyboard. In order to figure out wiring , I am creating a break out board for a teensy and a 28 pin ffc connector.

![alt text](https://i.imgur.com/eAW1w8l.jpg?1)

![alt text](https://i.imgur.com/65hynYD.jpg?1)



Qmk:


Trackpoint:
The trackpoint module has an 8 pin flex cable, which I desoldered from the back to expose the solderpads. Note: on my first attempt I accidently ripped off one of the soler pads. I ended up re ordering trackpoints from a ThinkPad r61. This turned out for the better because the r61 trackpoint pinout was documented online, and it also fit perfectly into the l420 keyboard. 

Clock pin needs to connect to PD2 and data pin needs to connect to PD5 of the teensy

(add)

Keyboard:
The keyboard has a 28 pin ffc (26 pins are actually used) connected to it. I thought it was safe to assume that the the connections of the ffc were the rows and columns for the keyboard matrix (article below). They L420 keyboard has a total of 84 keys (not including the mouse buttons) so that means there are around 10 cols and 10 rows for the matrix. 


Helpful resources.
https://qmk.fm/ (qmk firm ware)
https://www.pjrc.com/store/teensypp.html (teensy ++ 2.0)
http://pcbheaven.com/wikipages/How_Key_Matrices_Works/ (Keyboard matrix info)
https://deskthority.net/wiki/TrackPoint_Hardware (Trackpoint module pinouts)
https://www.instructables.com/id/How-to-Make-a-USB-Laptop-Keyboard-Controller/ (Figure out pins of keyboard)
https://docs.qmk.fm/#/feature_ps2_mouse?id=the-cirtuitry-between-trackpoint-and-controller (Trackpoint wiring)
https://beta.docs.qmk.fm/for-makers-and-modders/hand_wire (Keyboard software)
