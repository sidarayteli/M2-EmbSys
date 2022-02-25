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

* This internet based embedded smart irrigation system can helps to prevent wastage of water, Where farmers can control irrigation and get the update.


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
![usecase](https://user-images.githubusercontent.com/46900710/155770238-719f7f02-2b5f-4268-aec7-cc95d02ea485.JPG)




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



## Requirements

### High Level Requirements:

* HLR_01: Shall measure the data of engine temperature.
* HLR_02: Shall collect the data of alcohol content of driver.
* HLR_03: Shall collect the distance around the vehicle.
* HLR_04: Shall upload the collected data.


### Low Level Requirements:

##### HLR_01 
* LLR_01.1: It may measure humidity of environment along with temperature of the vehicle.

##### HLR_02
* LLR_02.1: Shall detect alcoholic content of driver and send it to cloud .

##### HLR_03
* LLR_03.1: It shall upload collected  distance (around the vehicle) to cloud storage.

##### HLR_04
* LLR_04.1: It can upload all parameters to cloud and where differents graphs or pai charts are created to analysis the data.
* LLR_04.2: It may have individual fields in cloud for storing of different parameters.

## SWOT Analysis

### Strengths
* Easy to place in all vehicles
* Useful to all customers,Lic companies and for cops

### Weaknesses
* Lack of Black box saftey 
* Deadlines
* App may be needed for easy monitoring

### Opportunites
* GUI can be implemented

### Threats
* It may leads more cost to vehicle

## 4W 1H
### Who
* The system can be placed in vehicles.
### What
* It's a Black box for vehicle that works automatically.
### When
* It is available untill and unless vehicle exist.
### Where
* It can be used in vehicles.
### How
* Programme is written in C to prevent complication and keep things simple to the user, And monitoring is provided to user.



## Block diagram:

![blackbox](https://user-images.githubusercontent.com/46900710/155764878-82cc36b8-73fa-4d5e-acb5-722ec1c0a87f.JPG)



### Sensors and Actuators Used

* Temperature Sensor
* Humidity Sensor
* Alcoholic Sensor
* Ultrasonic Sensor


## Applications:-

*	Useful for all LIC companies
* Helps to cops to catch false insurence claimers
*	Used in all vehicles

