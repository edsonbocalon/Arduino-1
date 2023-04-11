// declaração de variáveis
#define portaLed1 5
#define portaLed2 4
#define portaLed3 3
#define tempo1 3000
#define tempo2 1000

void setup()
{
  pinMode(portaLed1,OUTPUT);
  pinMode(portaLed2,OUTPUT);
  pinMode(portaLed3,OUTPUT);
}

void loop()
{
	digitalWrite(portaLed1,HIGH);
  	delay(tempo1);
    desliga();
  	digitalWrite(portaLed2,HIGH);
  	delay(tempo2);
    desliga();
  	digitalWrite(portaLed3,HIGH);
  	delay(tempo1);
    desliga();
}

// Utilização de função desliga
void desliga(){
	digitalWrite(portaLed1,LOW);
  	digitalWrite(portaLed2,LOW);
  	digitalWrite(portaLed3,LOW);  
}