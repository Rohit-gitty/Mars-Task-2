# Mars-Task-2

## (2)Controla two wheel drive mechanism using w,a,s,d keys.

The given task was to make a 2 wheel drive mwchasnism work taking the input from the keyboard keys.

Components used: For a 2 wheel drive mechanism we need 2 dc motors(12V),A motor driver(L298N),an arduino uno board,driver, connecting wires,a usb cable.

At first I researched on how to interconnect the main interface of my task the motor driver with arduino.after getting a mind map of the connections in thinkercad,then I started coding the working principle of the motors.
then interconnect arduino,motor deriver and also dc motors.then using usb cable connect the arduino uno to pc to run arduino ide.Before connecting the power supply(battery) check by giving inputs whether all statements are working by connecting with serial monitor. 

I actually did direction of rotation based approach to turn in all four directions.

Each dc motor is connected to 2 input pins if one is HIGH and the other is LOW it moves in one direction.
By this we can move forward and backward.The L298N motor driver  receives control signals from the Arduino to manage the direction and speed of the motors. Each motor is connected to two input pins (IN1, IN2 for motor 1 and IN3, IN4 for motor 2) that determine the direction of rotation.By this we can achieve the front and back movement.
the input pins 1,2,3,4 are connected to digital pins 6,7,8,9 of arduino to control the motor directions.

We can turn left or right by rotating the each motor in opposite directions which produces a change in the direction of the axle if each end of axle is connected to the each motor(basically it acts as couple generating 2 forces in opposite directions).
To turn left the left motor should turn anticlockwise and right motor should turn clockwise and vice versa to turn right.

Here this task involves keyboard based control.
So I used [Serial.available() > 0] to check whether any key is pressed in the keyboard,
Serial.read() reads the pressed key from the keyboard and compares the keys to do their respective operation using if else if ladder.
Based on the serial input received from the user through the Arduino IDE serial monitor:

Pressing 'w' sets both motors to rotate forward, moving the robot straight ahead.
Pressing 's' reverses both motors, causing the robot to move backward.
Pressing 'a' rotates the left motor forward and the right motor backward, turning the robot right.
Pressing 'd' does the opposite, turning the robot left.

Recourses:- 
https://youtu.be/Ey4xoG970Go?si=w7YnQqffbXC0KkQ6
https://roboticsbackend.com/arduino-how-to-get-a-string-from-serial-with-readstring/
