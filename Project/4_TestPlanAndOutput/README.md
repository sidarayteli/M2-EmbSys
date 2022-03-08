# Testplan And Result

## * High Level Requirement Table 
![HLR](https://user-images.githubusercontent.com/46900710/156876684-4655870a-10fc-4cd5-ad06-cccc0cd543c8.JPG)


## * Low Level Requirement Table 
![LLR](https://user-images.githubusercontent.com/46900710/156876804-e5214d86-9fb4-47b8-9412-b9daa5a2469b.JPG)

### Simulide Implementation
![Final_simulation](https://user-images.githubusercontent.com/46900710/157177912-b37ec328-bdee-4426-9e1e-a83fe4a6eeea.png)
Ficture a

### Explaination
In the project smart irrigation system Arduino UNO is used as controlling unit. In above ficture 'a': push button is used as temperature sensor instead of dht11 sensor and potentiometer is used as soil moisture sensor. LCD is used for displaying environment temperature, humidity and soil moisture data's. If temperature readings are greater than the threshold temperature value and soil moisture is lesser the threshold soil moisture value(where those threshold values are fixed in code) then motor gets ON with the help of relay.

### Breadboard Implementation
![IMG_20220308_152433](https://user-images.githubusercontent.com/46900710/157217286-78448b57-d4e6-4b2a-9aa3-a78a5526be7c.jpg)

 Ficture b

### Explaination
In the project smart irrigation system Arduino UNO is used as controlling unit. In above ficture 'b': DHT11 is used to measure environent temperature and humidity. Here relay is used to control the dc motor. Green led gets on whenever the system is on for irrigation and the Red led is on whenever the system is off.
