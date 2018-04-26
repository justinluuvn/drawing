# --------------------------------------------------SHAPE DRAWING PROJECT------------------------------------------------------------------ 

This project aims at creating a program capable of drawing certain kind of shapes.

Table of content

1. Confiuration
2. Installation
3. Operation
4. Manifest
5. Copyright and License
6. Contact Information

1. Configuration
	This project makes use of several devices which are listed below:
	a) One Raspberry Pi 3 device.
	b) One Straight-through RJ45 cable for Raspberry Pi 3 to access the internet.
	c) One 16GB SD Card element 14 pre-installed with NOOBS for Raspberry Pi.
	d) One USB cable (type A to type B) to power the Raspberry Pi device.
	e) Readily available Internet access.
2. Installation
	a) Insert the SD card into the Raspberry device, and also plug the RJ45 cable in to access the internet.
	b) Power on the device by using the USB cable.
	c) Initialize the Raspberry device, change its default setting for network configuration.
	d) Check the email for IP address.
	e) Use Putty application to remotely interact with Raspberry device.
3. Operation
	a) Open the Putty terminal, enter the IP address received in the email and then click "Open".
	b) Log in to the device using the name "pi" and accompanying password.
	c) Go to the "appdev/drawing" folder by utilizing the command "cd" and then check the presence of all the files by the command "ls".
	d) Type in the command "make" to start the compilation process.
	e) Run the command "./drawing.a" to start executing the resulting file.
	f) Type in a value between 1 and 7 to select a choice either to draw a shape or to quit.	
	e) The shape you want is gradually drawn into the screen or the program will quit.
4. Manifest (list of files and short description of their roles)
	a) main.c
		This is the root file.
	b) drawing.c
		This is the file containing the code for several general management functions.
	c) drawing.h
		This is the header file for the whole project.
	d) triangle.c
		This is the code for drawing a triangle.
	e) circle.c
		This is the code for drawing a circle.
	f) rectangle.c
		This is the code for drawing a rectangle.
	g) square.c
		This is the code for drawing a square.
	h) hline.c
		This is the code for drawing a horizontal line.
	i) ilines.c
		This is the code for drawing two intersecting lines.
	j) makefile
		This file sets the rule for the compilation of the code and several other actions
5. Copyright and License
	Raspberry Pi is a trademark of the Raspberry Pi Foundation.
	The Bluetooth word mark and logos are registered trademarks owned by Bluetooth SIG, Inc. and any use of such
	marks by Raspberry Pi Trading Ltd is under license. 
	Other trademarks and trade names are those of their respective owners.
	Copyright of this project belongs to the person mentioned in the contact information section. Mr. Gao Chao is a contributor for assisting during the
	making of the code.		
6. Contact Information
	Tin Luu,
	Department of Information Technology
	Vaasa University of Applied Sciences
	Wolffintie 30, Vaasa, Finland
	Home: http://www.cc.puv.fi/~e1700674
	Email: e1700674(at)edu.vamk.fi
