
# IoT Based Home Automation

Problem Statement- The home automation should be simulated on the picsimlab simulator, blynk iot mobile applications is used to control the devices . Should be able to control the lights, temperature of the home , inflow and outflow of water in the water tank.   
 
![alt text](https://github.com/ayushmurari/IoT-Based-Home-Automation/blob/master/Screenshots/Full%20Working.png?raw=true)
## Software Used :-
i)Arduino IDE     
ii)PICSimLab  
iii)Blynk IoT App  
iv)Null -modem Emulator

## Components Requirements :-
i)Arduino(atmega328p)  
ii)Led  
iii)CLCD  
iv)Temperature system(ADC)  
v)LDR  
vi)Serial tank(serial communication)  
vii)Ethernet Sheild  
viii)Blynk IoT app

## Working

 ### Part -1 -> Garden lights control
 * **Inputs** - LDR Sensor  
 * **Process** - READ THE LDR SENSOR VALUE, BASED ON THE READING FROM  LDR, VARY THE BRIGHTNESS OF THE LED, WHICH RESEMBLES CONTROLLING GARDEN LIGHTS BASED ON THE AVAILABILITY OF SUNLIGHT
![alt text](https://github.com/ayushmurari/IoT-Based-Home-Automation/blob/master/Screenshots/Picture1.png?raw=true)


### Part-2 ->Temperature Control System

 **Temperature system**
* **Inputs** - TEMPERATURE SENSOR.
* **Process** - Read Temperature from temperature 
                    sensor LM35
* **Output** - Display Temperature on Gauge  Widget,
![alt text](https://github.com/ayushmurari/IoT-Based-Home-Automation/blob/master/Screenshots/Picture2.png?raw=true)

**Heater / Cooler  Control System**  
* **Inputs** - BUTTON WIDGET(HEATER / COOLER BUTTON) ON  BLYNK IOT APP.
* **Process** - DETECT THE CHANGE IN THE LOGIC LEVEL
* **Output** -  IF THE BUTTON WIDGET IS AT LOGIC HIGH, TURN ON THE 
                   HEATER / COOLER.
                   IF THE BUTTON WIDGET IS AT LOGIC LOW, TURN OFF THE HEATER / COOLER    

**Threshold Temperature Control**  
* **Inputs** -   Temperature sensor 
* **Process** - Read and compare the temperature with 35 degrees
* **Output** -  if the temperature is more than 35 turn OFF the heater and send notification to Blynk IOt app and display the same on the CLCD.  
### Part-3->Display the volume of Water in the tank  
* **Inputs** - Serial tank.
* **Process** - Read the volume of the water in the tank by sending commands through serial communication.
* **Output** - Display the volume of the water on Gauge    Widget
                   Display the volume of water on CLCD.

**Inlet / Outlet Valve Control**  
* **Inputs** - Button Widget(Inlet / outlet valve button) on  Blynk iot app .
* **Process** - Detect the change in the logic level
* **Output** -  if the Button widget is at logic high, turn ON the inlet / outlet valve by sending 
                  commands through serial communication
                  if the Button widget is at logic low, turn OFF the inlet / outlet valve by sending 
                  commands through serial communication.

**Control the volume of water in the tank**  

* **Inputs** - Serial tank.
* **Process** - Read the volume of the water in the tank by sending commands through serial communication.
* **Output** -  if the volume of water in the tank is less than 2000 ltrs turn ON the inlet valve, and send notification to the blynk  mobile app and display the same on the CLCD.
![alt text](https://github.com/ayushmurari/IoT-Based-Home-Automation/blob/master/Screenshots/Picture7.png?raw=true) ![alt text](https://github.com/ayushmurari/IoT-Based-Home-Automation/blob/master/Screenshots/Picture8.png?raw=true)

## Conclusion
Using BLYNK IoT application and picsimlab simulator, we simulated home automation, where LED, temperature system, serial tank resembles  light, heater, cooler and water tank in real time.
Clcd acts like a dash board used for displaying the events, widgets from blynk IoT app like button widgets are used to control heater, cooler and inlet valve, outlet valve.

Gauge widgets to display the temperature and volume of the water.
