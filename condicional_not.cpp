 // NOT

void setup (){
	pinMode(7 , INPUT) ; // configura el pin 7 como entrada
	pinMode(11 ,OUTPUT) ; // configura el pin 11 como salida
}
void loop (){
  	if (digitalRead (7)==HIGH){ // pregunta si la entrada recibe un 1
   		digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
    }
}