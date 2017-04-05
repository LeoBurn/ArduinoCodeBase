                       

#define RELAY_PORT  8                        
void setup()
{    
  Serial.begin(9600);
  pinMode(RELAY_PORT, OUTPUT);       
}

void loop()
{
  //Turns Relay ON (Inverted Logic)
  digitalWrite(RELAY_PORT,0); 
  //Delay 2s (2000ms)
  delay(2000);                                     
  //Turns Relay OFF (Inverted Logic)
  digitalWrite(RELAY_PORT,1);          
  delay(2000);
   
}