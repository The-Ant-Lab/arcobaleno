In this folder you can found the gcode files used to product Arcobaleno whith The Ant.

You can see the results of milling operations in this video:

Link al video

There are some key points to keep in mind before using these gcode:

	1) The spindle motor used during the milling was a 1500Kv motor
	2) Some grbl parameters was changed before the milling operation
	3) Higher feed rates have been used instead of the suggested ones

[1] The default spindle motor was a 1000Kv ones, in theory using a faster motor should allow higer feed rates but with a loss in torque.
We wanted to test it so we changed the spindle motor. The results are pretty good.
   
[2] To allow a faster milling procedures we changed some grbl parameters:

- $110=2000.000 (x max rate, mm/min)
- $111=2000.000 (y max rate, mm/min)
- $112=200.000 (z max rate, mm/min)
- $120=200.000 (x accel, mm/sec^2)
- $121=200.000 (y accel, mm/sec^2)
- $122=10.000 (z accel, mm/sec^2)

Take in mind that we don't use the max feedrate during milling but just only for fast moving.

[3] With a faster spindle motor we have tested higher feed rates.
This change only impacts the top.gcode and bottom.gcode files.
If you want change the feedrate in these file, you can open them in an text editor and change all the occurence of 'F200' with 'F90' (the default value with a spindle motor with 1000Kv).
In this manner you can use the gcode files with a slower spindle motor.

Have fun!