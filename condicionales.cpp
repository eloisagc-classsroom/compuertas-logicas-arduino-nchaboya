void setup (){
  	pinMode(6 , INPUT) ; // configura el pin 6 como entrada
	pinMode(7 , INPUT) ; // configura el pin 7 como entrada
	pinMode(11 ,OUTPUT) ; // configura el pin 11 como salida
}

// Condicional NOT
void notF(){
  if (digitalRead (7)==HIGH){ // pregunta si la entrada 7 recibe un 1
   		digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (11 ,HIGH) ; // manda un 0=1 al pin 11
    }
}

// Condicional AND
void andF(){
  if (digitalRead (6)==HIGH && digitalRead (7)==HIGH){ // pregunta si ambas entradas reciben un 1
   		digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
	}
    else{
     digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
    }
}

// Condicional NAND
void nandF(){
  if (digitalRead (6)==HIGH && digitalRead (7)==HIGH){ // pregunta si ambas entradas reciben un 1
   		digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
    }
}

// Condicional OR
void orF(){
  if (digitalRead (6)==HIGH || digitalRead (7)==HIGH){ // pregunta si cualquiera de las entradas recibe 1
   		digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
	}
    else{
     digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
    }
}

// Condicional NOR
void norF(){
  if (digitalRead (6)==HIGH || digitalRead (7)==HIGH){ // pregunta si cualquiera de las entradas recibe 1
   		digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
    }
}

// Condicional XOR
void xorF(){
  	if ((digitalRead (6)==HIGH && digitalRead (7)==LOW) || 
        (digitalRead (6)==LOW && digitalRead (7)==HIGH)){ // pregunta si una de las entradas es 1, excluyendo mutuamente 
   		digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
	}
    else{
     digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
    }
}

// Condicional XNOR
void xnorF(){
  	if ((digitalRead (6)==HIGH && digitalRead (7)==LOW) || 
        (digitalRead (6)==LOW && digitalRead (7)==HIGH)){ // pregunta si una de las entradas es 1, excluyendo mutuamente 
   		digitalWrite (11 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (11 ,HIGH) ; // manda un 1 al pin 11
    }
}

void loop (){
  //notF();
  //andF();
  //nandF();
  //orF();
  //norF();
  //xorF();
  xnorF();
}

