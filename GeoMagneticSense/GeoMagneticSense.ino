/*
 Name:		GeoMagneticSense.ino
 Created:	06/03/2019 21:54:08
 Author:	@fenixbinario	|	www.fenixbinario.com

 Norte en el eje X

 Z-----X 
 |
 |
 Y

*/


#include <SparkFun_MAG3110.h>
#include <EasyNeoPixels.h>

MAG3110 mag = MAG3110(); //Instantiate MAG3110

void setup() {

	mag.initialize(); //Initialize the MAG3110
}

void loop() {

	int x, y, z;

	if (!mag.isCalibrated()) //If we're not calibrated
	{
		if (!mag.isCalibrating()) //And we're not currently calibrating
		{
			//Entering calibration mode
			mag.enterCalMode(); //This sets the output data rate to the highest possible and puts the mag sensor in active mode
		}
		else
		{
			//Must call every loop while calibrating to collect calibration data
			//This will automatically exit calibration
			//You can terminate calibration early by calling mag.exitCalMode();
			mag.calibrate();
		}
	}
	else
	{
		//Calibrated!
	}
	mag.readMag(&x, &y, &z);


	mag.readHeading();

	delay(100);
}
