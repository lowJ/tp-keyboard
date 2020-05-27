# tp-keyboard
The goal of this project is to make a useable desktop keyboard from the keyboard of the ThinkPad L420. I will be using qmk firmware, which is a popular tool for programming custom keyboards. I decided to choose the teensy ++ controller because it has enough I/O for the L420 matrix. Also the teensy++ is compatible with qmk's PS/2 library, which is used for the trackpoint module.  

Current work:
Add trackpoint reset circuit to pcb
Create pcb for teensy and 30 pin FFC. 
Start designing a case.

Progress made:
Decoded the keyboard matrix of the keyboard.
Tested trackpoint with qmk.
Create a dev board to test on.

![alt text](https://i.imgur.com/ec5ur1S.jpg)
This is the dev board I created and used to decode the matrix of the keyboard.

![alt text](https://i.imgur.com/eAW1w8l.jpg?1)
![alt text](https://i.imgur.com/65hynYD.jpg?1)
![alt text](https://i.imgur.com/iDEyUDH.jpg)



Qmk:


Trackpoint:
The trackpoint module has an 8 pin flex cable, which I desoldered from the back to expose the solderpads. Note: on my first attempt I accidently ripped off one of the soler pads. I ended up re ordering trackpoints from a ThinkPad r61. This turned out for the better because the r61 trackpoint pinout was documented online, and it also fit perfectly into the l420's keyboard. 

Clock pin needs to connect to PD2 and data pin needs to connect to PD5 of the teensy

(add)

Keyboard:
The keyboard has a 30 pin ffc (28 pins are actually used) connected to it. I thought it was safe to assume that the the connections of the ffc were the rows and columns for the keyboard matrix (article below). They L420 keyboard has a total of 84 keys (not including the mouse buttons) so that means there are around 10 cols and 10 rows for the matrix. 


Helpful resources.
https://qmk.fm/ (qmk firm ware)
https://www.pjrc.com/store/teensypp.html (teensy ++ 2.0)
http://pcbheaven.com/wikipages/How_Key_Matrices_Works/ (Keyboard matrix info)
https://deskthority.net/wiki/TrackPoint_Hardware (Trackpoint module pinouts)
https://www.instructables.com/id/How-to-Make-a-USB-Laptop-Keyboard-Controller/ (Figure out pins of keyboard)
https://docs.qmk.fm/#/feature_ps2_mouse?id=the-cirtuitry-between-trackpoint-and-controller (Trackpoint wiring)
https://beta.docs.qmk.fm/for-makers-and-modders/hand_wire (Keyboard software)
https://deskthority.net/wiki/MX13_SpaceSaver_Keyboard(Example of kb with teensy++ and trackpoint)

