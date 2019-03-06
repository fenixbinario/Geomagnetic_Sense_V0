# GEOMAGNETIC SENSE 

_Este sentido te permite tener una percepción del **norte** geomagnetico._

## REQUISITOS

### `Software`
* Instalar	Tarjeta:	------------------	by **Spence Konde**		[Más INFO](https://github.com/SpenceKonde/ATTinyCore).
* Instalar	Librería:	------------------	by **Adafruit**			[Más INFO](https://github.com/adafruit/Adafruit_NeoPixel).
* Instalar	Librería:	`<EasyNeoPixels.h>`	by **Evelyn Masso**		[Más INFO](https://github.com/outofambit/easy-neopixels).

### `Hardware`
* Atiny85		* 1	Unidad.
* GMAG3131		* 1 Unidad.
* WS2812		* 2 Unidades.
* Led RGB		* 1 Unidad.
* Motor			* 1 Unidades.
* Diodo			* 1 Uidades.
* 330 ohm		* 3 Unidades.
* 33 uF			* 1 Unidad.
* Power 5v		* 1 Unidad.


### `E/S`


|	Attiny85	|		POWER		|		MAG3111		|		WS2812		|		Motor		|	
|		----	|		----		|		----			|		----		|		----		|
|	PB4			|		GND			|		GND	-			|		GND	-		|		GND	-		|
|	PB8			|		VCC			|		5V	+			|		5V	+		|		5V	+		|
|	PB1 PCNINT1	|		x			|		x				|		DATA		|DATA->FlyBack Diode|
|	PB2	PCINT2	|		x			|		SCL				|		x			|		x			|
|	PB0 PCINT0	|		x			|		SDA				|		x			|		x			|	





## CÓDIGO
_Comentarios sobre las funciones y sus conexiones._

### Variables Globales

*	`MAG3110 mag = MAG3110();`


### `initialize()` Inicializa Sensor
``` c++
//Prototipo

//Definicion


//Invocar función


```

### `isCalibrated()` Devuelve `true` si el sensor esta calibrado
``` c++
//Prototipo


//Definicion

//Invocar funcion

```

### `isCalibrating()`	Devuelve `true` si el sensor esta calibrando en ese momento

``` c++
//Prototipo


//Definicion


//Invocar funcion

```

### `enterCalMode()`	Configura salida de datos en el ratio más alto.
``` c++
//Prototipo

//Definicion


//Invocar funcion

```

### `calibrate()`	Devuelve `true` si el sensor esta calibrado en ese momento
``` c++
//Prototipo


//Definicion


//Invocar funcion

```

### `readMag(int, int, int)` 
``` c++
//Prototipo

//Definicion

//Invocar funcion

```

### `readHeading()` Devuelve datos de los tres ejes
``` c++
//Prototipo
void Vibration(bool);

//Definicion


//Invocar funcion

```

### `mathMag()` Lógica y Matemáticas - Lectura del Sensor y envio de datos
``` c++
//Prototipo

//Invocar funcion

```


## DESPLIEGUE
*PASOS*
* Asegurese de tener todo el hardware, conexiones, alimentación, tarjeta y librerías. 
* Monte en una tarjeta de desarrollo las conexiones o ensamble una PCB.
* Ten cuidado con la alimentación.
* Añade un condensador electrolitico entre el PIN RESET y GND del programador.


## DATASHEET

### ATtiny 25/45/85
![x5 pin mapping](http://drazzy.com/e/img/PinoutT85a.jpg "Arduino Pin Mapping for ATtiny 85/45/25")

