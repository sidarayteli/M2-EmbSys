# Title: Smart Irrigation System

## Explaination:
* Smart Irrigation is an one of the Embedded system.

* Irrigation is nothing but watering, It is a process of applying amount of water to land to help the production of crops.

*	Earlier days Irrigation was too difficult because lack of technology. Nowadays it’s easy with technology and automation.

* Having less amount of water itself smart irrigation system helps to grow agricultural crops in dry areas or areas with less rainfall.

* It’s used for cooling livestock, Dust suppression, And protection of soil erosion and agricultural crops.

* This internet based embedded smart irrigation system can helps to prevent wastage of water, Where farmers can control irrigation and get the update of soil in home itself.


## Requirements

### High Level Requirements:

* HLR_01: Shall detect soil moisture.
* HLR_02: Need to detect environment temperature and humidity.
* HLR_03: Shall Display all parameters.
* HLR_04: Shall be automatic irrigation.


### Low Level Requirements:

##### HLR_01 
* LLR_01.1: If water content in soil is low, Watering shall take place.

##### HLR_02
* LLR_02.1: Irrigation shall be done based on environment parameters like temperature and humidity.

##### HLR_03
* LLR_03.1: Based on parameters, User may interrupt purposely.
* LLR_03.2: Show indication light whether the system is ON or OFF.
* LLR_03.3: Recording of all data shall be done for analysis.

##### HLR_04
* LLR_04.1: Irrigation can be automatically based on environment parameters. Example:- Rainfall and Increment in temperature etc.
* LLR_04.2: Based on measured data, Itself RTC can sets the time for irrigation.
* LLR_04.3: Shall be Controllable pressure and water flow. 




## Block diagram:


![irrigation](https://user-images.githubusercontent.com/46900710/154912134-31fa7b85-5001-441a-b280-1d7456cc7422.JPG)

### Sensors and Actuators Used

* Temperature Sensor
* Humidity Sensor
* Soil Moisture Sensor

* Actuator: Motor pump


## Applications:-

*	Useful for farmers for irrigation
* Helps to protect agricultural crops
*	Preventing wastage of water during irrigation
*	Prevention of soil erosion
*	As a Dust suppression



