# Design
## Usecase diagram
![usecase](https://user-images.githubusercontent.com/46900710/155770366-ee2bdb72-2774-478f-9227-2937691a1a10.JPG)

## Flowchart
![flowchart2](https://user-images.githubusercontent.com/46900710/155830718-fe4051ac-5f74-48bf-851c-76f6bd31e806.JPG)



## Block diagram
![irrigation1](https://user-images.githubusercontent.com/46900710/156874957-12c634d9-ce12-40f3-a5a4-74673717bba3.JPG)

## Block Diagram Explaination 
In the project smart irrigation system controller is used to control various sensors(analog/digital) like temperature, Humidity sensor and soil moisture sensor. Where all parameters are collected by the controller with the help of sensors. If the temperature level is more than its threshold value then based on temperature reading the controller on the motor. Where motor is controlled by relay. Similerly if humidity level and moisture content in soil is very low or high then also controller takes respective actions like to on or of the motor which was set for irrigation. Also all parameters are displayed using LCD(Display). The power is providded to the system along with that on and off button is providded to the system for user control.


## Components Used

#### * Microcontroller :
 Used to control various sensors, Actuators and for sending and storing data’s ,etc.

#### * Temperature Sensor : 
DHT11 used as temperature sensor to measure environmental temperature. It works under supply voltage of 3.3v to 5v and it can measure temperature in the range of 0ºC(degree celcius) to 50ºC(degree celcius). It is commony used to measure both temperature and humidity of environment. It gives digital output so dht11 is an digital sensor.

#### * Humidity Sensor :
DHT11 used as humidity sensor to measure environmental humidity. It works under supply voltage of 3.3v to 5v and it can measure humidity in the range of 20% to 90%. It is commony used to measure both temperature and humidity of environment. It gives digital output so dht11 is an digital sensor.

#### * Soil Moisture Sensor : 
Soil moisture sensor is used to measure the loss of moisture in the soil over a time due to evaporation and plant uptake(water used by plant). Used to control irrigation.
It is having some specifications like works uder supply voltage of 3.3 to 5v. The soil moisture sensor is having two legs which are used to measures the volumetric content of water. And it gives both digitl as well as analog output.

#### * Display :
Helps to display various parameters like temperature, Humidity of environment and moisture content of soil. Input voltage ranges 4.7v to 5.3v supply. It can displays alphabets as well as numbers. Interfacing is done with microcontrollers.


#### * Relay :
Relay having switching voltages VAC is at 250V and 10A and VDC is at 30V and 10A. Its trigger voltage(VDC) is 12V
and trigger current is 20mA Operates under temperature range from -40°C to 85°C and humidity range of 20% to 85%
Standard interface that can be controlled by microcontroller. Here it’s used to control the actuator.


#### * Actuator : 

DC motor operates under voltage of 4.5V to 9V and load current is approximately 250mA. In DC motor there many types based on their torque value. Here it is used as motor pump to supply water to soil.




