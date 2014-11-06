#define motor1A   2
#define motor1B   4
#define motor1EN  3

#define motor2A   5
#define motor2B   7
#define motor2EN  6

void setup() {
  pinMode( motor1A, OUTPUT );
  pinMode( motor1B, OUTPUT );
  pinMode( motor1EN, OUTPUT );
  
  pinMode( motor2A, OUTPUT );
  pinMode( motor2B, OUTPUT );
  pinMode( motor2EN, OUTPUT );

  setSpeed( 50 );
}

void loop() {
  
}
