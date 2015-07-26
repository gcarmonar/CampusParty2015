/*
 * Arduino-Linux-get-ip.ino
 * 
 * Author: Gerardo Carmona
 * Webpage: www.makeroboticsprojects.com
 * Date: July, 2015
 * 
 * About:
 * Use this code to get your Intel Galileo
 * IP addresss by printing it to the serial
 * monitor.
 */


void setup() {
  // Init serial com
  Serial.begin(9600);
}
 
void loop() {
  // Gets network interface info and sends 
  // it through the serial interface
  system("ifconfig > /dev/ttyGS0");

  // Waits 5 seconds before printing it again
  delay(5000);
}
