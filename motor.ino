void move( int duration ) {
  boolean dir = duration > 0;
  
  digitalWrite( motor1A, !dir );
  digitalWrite( motor2A, dir );
  digitalWrite( motor1B, dir );
  digitalWrite( motor2B, !dir );

  delay( abs( duration ) );
  stop();
}

void turn( int duration ) {
  boolean dir = duration > 0;
  
  digitalWrite( motor1A, !dir );
  digitalWrite( motor2A, dir );
  digitalWrite( motor1B, !dir );
  digitalWrite( motor2B, dir );

  delay( abs( duration ) );
  stop();
}

void stop() {
  digitalWrite( motor1A, LOW );
  digitalWrite( motor1B, LOW );
  digitalWrite( motor1B, LOW );
  digitalWrite( motor2B, LOW );
}

void setSpeed( unsigned int spd ) {
  spd = map( spd, 0, 255, 0, 100 );
  analogWrite( motor1EN, spd );
  analogWrite( motor2EN, spd );
}
