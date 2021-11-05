/*---------------------------------------------------------------------------------
gjør endringer i koden slik at vi får en enkel alarm sentra med en bryter som aktiverer alarmen 
og en PIR som utløser alarmen
a) Hvis det går en alarm skal en lysdiode lyse
b) hvis alarsentralen er av skal en grønn lysdiode lyse detektoren utløser da ikke en alarm.
   hvis alarmsentralen er aktivert med bryteren skal detektoren kunne utløse en alarm og en rød lysdiode skal lyse.
c) hvis alarsentralen er av skal en grønn lysdiode lyse, detektoren utløser da ikke en alarm.
   hvis alarsentralen er på skal en gul lysdiode lyse, detektoren utløser da en alarm 
   og en rød lysdiode skal blinke 10 ganger.
   På og av knappen skal her være en pushbutton.
   hvis alarmen utløses skal du kunne avbryte med en pushbutton.
-----------------------------------------------------------------------------------*/


void setup() 
    {
        Serial.begin(9600);
       
    }



 
void loop() 
    {
        
    }
