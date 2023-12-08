# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1
bestel alle componenten uit de bill of materials  

### stap 2
Test aan de hand van de proof of concepts alle componenten. 
Indien nodig kan je de datasheets raadplegen



### stap 3
Nu gaan we de printplaat solderen. Hiervoor kan je het Layout schema raadplegen. 
![image](https://github.com/TiboRoelandt/Linefollower/assets/146442904/1562cca9-eb66-44a2-b9eb-d746d1ad9f9a)
![image](https://github.com/TiboRoelandt/Linefollower/assets/146442904/8d482793-9157-4049-b10d-7a2157a1927d)

### stap 4
Het chassis kan je 3D printen. De bestanden hiervoor vind je terug onder technische tekeningen => mechanisch. Je kan ook een basisplaat maken uit bijvoorbeeld een stuk hout dat je op maat zaagt. 
De wielen zijn aangekocht die passen op de metal gear motoren.

### stap 5
Om alles te monteren heb je M3-boutjes nodig.
Het monteren van de printplaat gebeurd rechtstreeks op het ge-3Dprinte chassis.
Plaats de sensor ongveer in het midden van de rij gaatjes die hiervoor voorzien zijn. Later kan je dan de afstand van de sensor ten opzichte van de wielen nog aanpassen om jouw linefollower te optimaliseren. 

### stap 6
Upload het programma naar jouw arduino nano. Het programma kan je vinden onder code => finaal. Let er op dat de HC-05 module tijdens het uploaden niet verbonden is met de arduino. 

### stap 7
Het instellen van de parrameters gebeurd via bluetooth en de app "Serial Bluetooth Terminal" op de smartphone. De parrameters die ik gebruikt heb zijn terug te vinden bij gebruiksaanwijzing => setting. 


Als je al bovenstaande stappen hebt volbracht is jouw auto klaar voor gebruik. Hoe je de auto verder nog insteld en gebruikt staat uitgelegd in de gebruiksaanwijzing. 
