# LED över Bluetooth
Med denna kod kan du lägga en LED på eller av med en app på din smarttelefon.

Ladda ner appen "Arduino turn LED ON&OFF" från Google Play Store. 
Para telefonen med Bluetooth chippet. 

Koppla VCC från chippet till Arduinons 5V, GND till GND,
chippets RXD till Arduinons TX, och chippets TXD till Arduinons RX.

Koppla dessutom en LED till pin 13 i serie med ett 330Ohm motstånd. 

Kopiera koden från kod.cpp filen till Arduino IDE, och ladda upp till Arduinon.
Det kan hända att du måste ta loss ledningarna från TX och RX portarna
då du laddar upp programmet. 
