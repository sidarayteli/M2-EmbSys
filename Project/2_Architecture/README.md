# Design
## Usecase diagram
![usecase](https://user-images.githubusercontent.com/46900710/155770366-ee2bdb72-2774-478f-9227-2937691a1a10.JPG)

## Flowchart
![flowchart2](https://user-images.githubusercontent.com/46900710/155830718-fe4051ac-5f74-48bf-851c-76f6bd31e806.JPG)



## Block diagram

![irrigation](https://user-images.githubusercontent.com/46900710/155770530-6354cd86-c151-4262-b7d9-458c5cfb9d7e.JPG)

## Components Used

#### * Microcontroller :
 Used to control various sensors, Actuators and for sending and storing data’s ,etc.

#### * Temperature Sensor : 
Used to measure environment temperature. 

#### * Humidity Sensor :
Used to measure environment humidity.

#### * Soil Moisture Sensor : 
Used to detect the moisture content in the soil.

#### * Display :
Helps to display various parameters like temperature, Humidity of environment and    Moisture content of soil.

#### * RTC :
Real time clock is used to set irrigation time automatically.

#### * Relay :
It’s used to control the actuator.

#### * Actuator : 
Used as motor pump to supply water to soil.

#### * Storage :
To record data’s for analysis.



## Block Diagram Explaination 
In the project smart irrigation system controller is used to control various sensors(analog/digital) like temperature, Humidity sensor and soil moisture sensor. Where all parameters are collected by the controller with the help of sensors. If the temperature level is more than its threshold value then based on temperature reading the controller on the motor. Where motor is controlled by relay. Similerly if humidity level and moisture content in soil is very low or high then also controller takes respective actions like to on or of the motor which was set for irrigation. Also all parameters are displayed using LCD(Display). The power is providded to the system along with that on and off button is providded to the system for user control.

