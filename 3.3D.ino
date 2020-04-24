
int led2 = D7; 

void setup() {


	pinMode(led2, OUTPUT);
	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", blink);

}

void blink( const char *event, const char *data)
{
    if (strcmp(data, "wave")==0) {
        	digitalWrite(led2, HIGH);
            delay(1000);
            digitalWrite(led2, LOW);
            delay(250);
            digitalWrite(led2, HIGH);
            delay(1000);
            digitalWrite(led2, LOW);
            delay(250);
            digitalWrite(led2, HIGH);
            delay(1000);
            digitalWrite(led2, LOW);
            delay(250);
    }
    else if (strcmp(data, "pat")==0) {
        	digitalWrite(led2, HIGH);
        	delay(500);
        	digitalWrite(led2, LOW);
        	delay(500);
        	digitalWrite(led2, HIGH);
        	delay(500);
        	digitalWrite(led2, LOW);
        	delay(500);
    }
    else{}
    
}
