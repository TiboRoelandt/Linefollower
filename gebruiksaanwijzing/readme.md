# Gebruiksaanwijzing

### opladen / vervangen batterijen
De batterijen die gebruikt worden zijn 2 18650 li-ion batterijen. Deze worden opgeladen met een geschikte oplader. Om de batterijen te vervangen moet eerst de PCB van de auto worden verwijderd. Hierna kunnen de batterijen uit de houder worden gehaald en opgeladen. 

### draadloze communicatie
#### verbinding maken
Voor de draadloze communicatie wordt er gebruik gemaakt van een HC-05 bluetooth module. Op de smartphone wordt de app "Serial Bluetooth Terminal" gebruikt om verbinding te maken met de module. Hiermee kunnen de commando's worden doorgestuurd naar de arduino. 

#### commando's
debug [on/off] => Opvragen van de ingestelde parrameters. 

run  => Starten van de LineFollower. 

stop => Stoppen van de LineFollower.  

set cycle [µs]  => Instellen van de cycle time. Deze is ongeveer het dubbele van de calculation time.

set power [0..255]  => Instellen van de power van de motoren. 

set diff [0..1]  => Door de diff aan te passen

set kp [0..]  

set ki [0..]  
set kd [0..]  
calibrate black  
calibrate white  

### kalibratie
uitleg kalibratie  

### settings
De robot rijdt stabiel met volgende parameters:  

### start/stop button
uitleg locatie + werking start/stop button
