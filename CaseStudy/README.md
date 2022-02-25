# CaseStudy 1
# Title: Smart Irrigation System
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Table of contents |
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 1 Explaination
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 2 Requirements
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#### 2.1 High Level Requirement
#### 2.2 Low Level Requirement
#### 2.3 Swot analysis
#### 2.4 4W 1H
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 3 Block diagram
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 4 Components used
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 5 Applications
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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


## SWOT Analysis

### Strengths
* Easy to use Applications
* Useful to all farmers
* Less energy consumption

### Weaknesses
* Lack of graphical user interface
* Deadlines
* App may be needed for easy usage

### Opportunites
* GUI can be implemented

### Threats
* Best applications are available
* May be majority of farmers willn't use because of lack of guidense

## 4W 1H
### Who
* The system can be used by farmer.
### What
* It's a smart irrigation system that works automatically.
### When
* It is available 24X7, 365 days for service.
### Where
* It can be use in fields and farms etc.
### How
* To run this system, Programme is written in C to prevent complication and keep things simple to the user.



## Usecase diagram
![SUB1](https://user-images.githubusercontent.com/46900710/155594572-7849bac1-9b46-4336-9d7a-1e1a6169b733.JPG)



## Block diagram:

![irrigation](https://user-images.githubusercontent.com/46900710/155594702-7dd60a56-f18e-42e2-b1ef-0c857c2cfecf.JPG)

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

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# CaseStudy 2

# Title: Black Box For Vehicles
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Table of contents       
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 1 Explaination
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 2 Requirements
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#### 2.1 High Level Requirement
#### 2.2 Low Level Requirement
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 3 Block diagram
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 4 Components used
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 5 Applications
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


## Explaination:
The main goal of this work is to develop a prototype of an event data recorder. Black box is the vehicle data record that collects the status of the vehicle by recording the
temperature of the engine. It also has a feature of location tracking to determine the location of the vehicle, which will help when a side/head-on collision has occurred.
This particular design will allow analysts to determine whether the cause of the accident was due to problems in the vehicle, or was the driver’s
mistake. The recorded data is stored in cloud storage.In this prototype temperature and humidity sensors, ultrasonic sensor, and alcoholic sensor are used to collect the data like temperature, humidity, obstacle detection, and alcoholic content of driver respectively.

