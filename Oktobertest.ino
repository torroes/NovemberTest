/*---------------------------------------------------------------------------------
gjør endringer i koden 
a) legg til en if else som skriver ut i serial monitor 
   "tall a er større en tall b",
   "tall b er større en tall a",
   "tall a er lik tall b"
b) 
-----------------------------------------------------------------------------------*/

int a = 9;
int b = 8;
int sum = 0;
int led = 13;
void setup() 
    {
        Serial.begin(9600);
        pinMode(led, OUTPUT);
    }


void loop() 
    {
        if (a < b)
            {
                Serial.println("b er større en a");
                fastBlink();
            }
        else if (a > b)
            {
                Serial.println("a er større en b");
                slowBlink();
            }
        else
            {
                Serial.println("a er lik  b");
            }
        delay(1000);               
    }

    void fastBlink ()
    {
        for (int i = 0; i < 10; i++)
        {
            digitalWrite(led, HIGH);
            delay(1000);
            digitalWrite(led, LOW);
            delay(1000);
        }
    }
    void slowBlink ()
        {
            for (int i = 0; i < 20; i++)
            {
                digitalWrite(led, HIGH);
                delay(500);
                digitalWrite(led, LOW);
                delay(500);
            }
            
        }
