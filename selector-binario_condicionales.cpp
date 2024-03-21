int size = 4; // definimos el número de bits 
int i1 = 9; // num de pin de entrada 1 para condcionales 
int i2 = 8; // num de pin de entrada 2 para condcionales 
int o1 = 10; // num del pin de salida

// Inicializamos cada uno de los pines a utilizar
void setup()
{
  Serial.begin (9600) ; // abre consola serial
  for (int i = 4; i <= 9 ; i++){
    pinMode(i, INPUT);
  }
  pinMode(10, OUTPUT);
}

// Condicional NOT
void notF(){
  if (digitalRead (i1)==HIGH){ // pregunta si la entrada 7 recibe un 1
   		digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (o1 ,HIGH) ; // manda un 0=1 al pin 11
    }
}

// Condicional AND
void andF(){
  if (digitalRead (i1)==HIGH && digitalRead (i2)==HIGH){ // pregunta si ambas entradas reciben un 1
   		digitalWrite (o1 ,HIGH) ; // manda un 1 al pin 11
	}
    else{
     digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
    }
}

// Condicional NAND
void nandF(){
  if (digitalRead (i1)==HIGH && digitalRead (i2)==HIGH){ // pregunta si ambas entradas reciben un 1
   		digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (o1 ,HIGH) ; // manda un 1 al pin 11
    }
}

// Condicional OR
void orF(){
  if (digitalRead (i1)==HIGH || digitalRead (i2)==HIGH){ // pregunta si cualquiera de las entradas recibe 1
   		digitalWrite (o1 ,HIGH) ; // manda un 1 al pin 11
	}
    else{
     digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
    }
}

// Condicional NOR
void norF(){
  if (digitalRead (i1)==HIGH || digitalRead (i2)==HIGH){ // pregunta si cualquiera de las entradas recibe 1
   		digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (o1 ,HIGH) ; // manda un 1 al pin 11
    }
}

// Condicional XOR
void xorF(){
  	if ((digitalRead (i1)==HIGH && digitalRead (i2)==LOW) || 
        (digitalRead (i1)==LOW && digitalRead (i2)==HIGH)){ // pregunta si una de las entradas es 1, excluyendo mutuamente 
   		digitalWrite (o1 ,HIGH) ; // manda un 1 al pin 11
	}
    else{
     digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
    }
}

// Condicional XNOR
void xnorF(){
  	if ((digitalRead (i1)==HIGH && digitalRead (i2)==LOW) || 
        (digitalRead (i1)==LOW && digitalRead (i2)==HIGH)){ // pregunta si una de las entradas es 1, excluyendo mutuamente 
   		digitalWrite (o1 ,LOW) ; // manda un 0 al pin 11
	}
    else{
     digitalWrite (o1 ,HIGH) ; // manda un 1 al pin 11
    }
}

// Función para convertir las entradas binarias del DIP switch
// a un número decimal fácil de interpretar
int condSelect(){
  int c = 	digitalRead(7) * 8 +
  			digitalRead(6) * 4 +  
    		digitalRead(5) * 2 +
    		digitalRead(4);
   return c;
}
       
void loop(){
  int s = 15;
  
  // Llamada a la función que convierte la entrada binaria a decimal
  s = condSelect();
  
  // switch case para cada posible opción dada por la entrada binaria
  switch(s){
  	case 1:
    	notF();
    	break;
    case 2:
    	andF();
    	break;
    case 3:
    	nandF();
    	break;
    case 4:
    	orF();
    	break;
    case 5: 
    	norF();
    	break;
    case 6:
    	xorF();
    	break;
    case 7:
    	xnorF();
  }
  //delay(1000);
}