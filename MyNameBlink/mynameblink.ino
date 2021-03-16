


int led2 = D7; 

int unit = 500;

void setup() {


  
  pinMode(led2, OUTPUT);

}

void dot() {
    digitalWrite(led2, HIGH);
    delay(unit);
    digitalWrite(led2, LOW);
    delay(unit);
}

void dash() {
    digitalWrite(led2, HIGH);
    delay(unit*3);
    digitalWrite(led2, LOW);
    delay(unit);
}

void new_char() {
    delay(unit*2);
}

void new_word() {
    delay(unit*6);
}


void loop() {
  
 // N mose code (-.)
 dash();
 dot();
 
 new_char();
 
 // A mose code (.-)
 dot();
 dash();
 
 new_char();
 
 // W mose code (.--)
 dot();
 dash();
 dash();
 
 new_char();
 
  // A mose code (.-)
 dot();
 dash();
 
 new_char();
 
 // F mose code (..-.)
 dot();
 dot();
 dash();
 dot();
 
 new_word();
}

