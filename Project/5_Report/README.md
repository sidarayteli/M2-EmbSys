# Project Title: Smart Irrigation System
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Table of contents 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
### 1 Abstract
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


## Abstract
Smart Irrigation is an one of the Embedded system. The main goal of this work is to develop a prototype of the system that can collect the health of the soil by measuring parameters like environmental temperature and humidity, Moisture content of soil and can display all parameters. And automatically irrigation can be done using motor pumps and it is based on parameters measured from various sensors.

### Explaination
In earlier days Irrigation was too difficult because lack of technology and lack of elctricity. Nowadays it’s easy with technology and automation.
       "Irrigation is nothing but watering, It is a process of applying amount of water to land to help the production of crops". Having less amount of water itself smart irrigation system helps to grow agricultural crops in dry areas or areas with less rainfall, And it’s used for cooling livestock, Dust suppression, And protection of soil erosion and agricultural crops. This internet based embedded smart irrigation system can helps to prevent wastage of water, Where farmers can control irrigation and get the update.




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


##### HLR_04
* LLR_04.1: Irrigation can be automatically based on environment parameters. Example:- Rainfall and Increment in temperature etc.
* LLR_04.2: Based on measured data, Itself can sets the time for irrigation.
* LLR_04.3: Shall be Controllable pressure and water flow. 



## SWOT Analysis

### Strengths
* Easy to use Applications
* Useful to all farmers
* Less energy consumption

### Weaknesses
* Lack of graphical user interface
* App may be needed for easy usage

### Opportunites
* GUI can be implemented

### Threats
* Best applications are available
* May be majority of farmers willn't use because of lack of guidense

## 5W 1H
### Who
* The system can be used by farmer.
### What
* It's a smart irrigation system that works automatically.
### When
* It is available 24X7, 365 days for service.
### Where
* It can be use in fields and farms etc.
### Why
* Useful to all farmers to do irrigation without wasting of water and energy.
### How
* To run this system, Programme is written in C to prevent complication and keep things simple to the user. Microcontroller is used here to control and collect data from various sensors like temperture, Humidity and soil moisture sensor.It works based on sensor parameters, For example if temperature parameters are higher than its threshold then irrigation is takes place with the help of motor. And all sensors parameters are being displayed using LCD.



# Design
## Usecase diagram
![usecase](https://user-images.githubusercontent.com/46900710/155770366-ee2bdb72-2774-478f-9227-2937691a1a10.JPG)

## Flowchart
![flowchart2](https://user-images.githubusercontent.com/46900710/155830718-fe4051ac-5f74-48bf-851c-76f6bd31e806.JPG)



## Block diagram

![irrigation1](https://user-images.githubusercontent.com/46900710/156874998-70c45966-3866-49c0-a449-fcdbcafad91b.JPG)


### Sensors and Actuators Used

* Temperature Sensor
* Humidity Sensor
* Soil Moisture Sensor

* Actuator: Motor pump, Relay


## Applications:-

* Useful for farmers for irrigation
* Helps to protect agricultural crops
* Preventing wastage of water during irrigation
* Prevention of soil erosion
* As a Dust suppression



