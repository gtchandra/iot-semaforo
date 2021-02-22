
#define RED1 2
#define YEL1 3
#define GRE1 4
#define RED2 11 
#define YEL2 12
#define GRE2 13
#define TIMERED 5000
#define TIMESTOP 2000


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(YEL1, OUTPUT);
  pinMode(GRE1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(YEL2, OUTPUT);
  pinMode(GRE2, OUTPUT);

  
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(GRE2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay (TIMERED);
  digitalWrite(YEL2,HIGH);
  delay(TIMESTOP);
    
  digitalWrite(RED1, LOW);
  digitalWrite(GRE1, HIGH);
  digitalWrite(GRE2, LOW);
  
  digitalWrite(RED2,HIGH);
  digitalWrite(YEL2,LOW);
  delay (TIMERED);
  digitalWrite(YEL1, HIGH);
  delay(TIMESTOP);
  digitalWrite(YEL1, LOW);
  digitalWrite(RED2, LOW);
  digitalWrite(GRE1, LOW);

}
