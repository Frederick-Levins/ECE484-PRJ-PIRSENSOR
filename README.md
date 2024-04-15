# ECE484-PRJ-PIRSENSOR

This is the repo of my ECE 484 Midterm chip interface. My chip is the HC-SR501 PIR sensor. The intention of this repo is to create a simple motion detection alarm system. The repo consists of a variety of files. All files' content and interoperibility are described in the wiki.


To properly run:

1.) Build IC

2.) cd to proper path on your device that holds files

3.) upload code to arduino through compile script and avr

3a.) Ensure within compile script that com port and directories are properly set up

3b.) Ensure pins are proper on arduino with IC

3c.) Ensure AVR is properly installed, path is correct, and accessible

3d.) Run command py compile_script.py 4 in command line while in proper directory

4.) Confirm upload success with command line output

5.) Test functionality


Files:

PIR.c --> Main C file that holds functionality of system

Motion_Detected.jpg --> image of IC visual ouput when motion is detected by sensor

No_Motion.jpeg --> image of IC visual ouput when motion is not detected by sensor

compile_script.py --> script to run to compile and upload through avr to arduino

pin_sheet.xlsx --> proper pin sheet to see arduino pins correleted to ports and values of megaAT




