// Motor B connections
#define ENB 5
#define IN3 7
#define IN4 6

void off(){
   analogWrite(ENB, 0);  //Low PWM signal
}

void forward(){
    digitalWrite(IN3, HIGH);
	  digitalWrite(IN4, LOW);

    // Accelerate from zero to maximum speed
	  for (int i = 0; i <= 255; i++) {
		  analogWrite(ENB, i);
      delay(5);
	  }

}

void backward(){
    digitalWrite(IN3, LOW);
	  digitalWrite(IN4, HIGH);

    // Accelerate from zero to maximum speed
	  for (int i = 0; i <= 255; i++) {
		  analogWrite(ENB, i);
      delay(5);
	  }

}

void brake(){
    digitalWrite(IN3, HIGH);
	  digitalWrite(IN4, HIGH);
    
    /*------------------------------
    can also use this to brake/stop the motor
    ---------------------------------
     digitalWrite(IN3, LOW);
	   digitalWrite(IN4, LOW);

    ------------------------------*/ 
       
}


void setup() {
 // Set all the motor control pins to outputs
	pinMode(ENB, OUTPUT);
	pinMode(IN3, OUTPUT);
	pinMode(IN4, OUTPUT);
	
  //Make ensure the motor turned off initially
	off();
}

void loop() {

   //FORWARD -> STOP -> BACKWARD -> STOP
   forward();
   brake();
   delay(500);

   backward();
   brake();
   delay(500);
}

