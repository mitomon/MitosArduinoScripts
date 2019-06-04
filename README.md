# ArduinoScripts
This is a common repo for different small arduino projects. They weren't really worth sepearate repos themselves, so I've conglomerated them here. If any one of them becomes large enough however, I'll remove it, make a new repo for it, and add a link here.

Projects List
1. Zelda Song Player- This folder contains a header file for the pitches used in the main .ino file. It is meant to be used
with the DFRobot Input Shield for Arduino Uno and a Gravity interface Speaker in the 2nd ICSP connection. 

2. Temperature Index Trigger- This code is used in both SCARF and Liquid Cooling Device, simply change the threshold for
activation and it can be used in either one.

3.Holiday Song Player- Light up some LEDs to the tunes of the holidays! The Holiday Song Player plays classic Christmas songs from a piezo buzzer and syncs them with LED decorative lights. Each note corresponds to a different LED. This creates a nice visual effect where every time a note is played, a specific light turns on. The three songs can be selected by pressing different buttons or you can play in free play mode with the other buttons.

4.Follower Robot - Using a single ultrasonic sensor, this script allows the Elegoo Smart Car v3 to follow any flat target and stay a predetermined distance from it. It calculates the difference in distances between one side of the object and the other and adjusts accordingly. The next step from here would be to incorporate PID controls, but that is beyond the scope of reality with an Arduino Uno.
