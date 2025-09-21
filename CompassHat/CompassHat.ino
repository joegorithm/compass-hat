#include <Wire.h> // wire library
#include <LSM303.h> // tilt compensated compass library

LSM303 compass;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  compass.init();
  compass.enableDefault();

  compass.m_min = (LSM303::vector<int16_t>){-32767, -32767, -32767};
  compass.m_max = (LSM303::vector<int16_t>){+32767, +32767, +32767};


  pinMode(2, OUTPUT); // right
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); // back right
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); // back
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); // back left
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT); // left
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT); // front left
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT); // front
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT); // front right
  pinMode(17, OUTPUT);
}

void loop() {
  compass.read();

  float heading = compass.heading();
  
  Serial.println(heading);
  delay(100);


  int a;

  a = heading;

  // pin 2
  if (a > 348.75) {
    digitalWrite(2, HIGH);
  } 
  if (a <= 11.25) {
    digitalWrite(2, HIGH);
    delay(50);
  } else {
    digitalWrite(2, LOW);
  }

// pin 3
  if ((a > 326.25) && (a <= 348.75)) {
    digitalWrite(3, HIGH);
    delay(50);
  } else {
    digitalWrite(3, LOW);
  }

// pin 4
  if ((a > 303.75) && (a <= 326.25)) {
    digitalWrite(4, HIGH);
    delay(50);
  } else {
    digitalWrite(4, LOW);
  }

// pin 5
  if ((a > 281.25) && (a <= 303.75)) {
    digitalWrite(5, HIGH);
    delay(50);
  } else {
    digitalWrite(5, LOW);
  }

// pin 6
  if ((a > 258.75) && (a <= 281.25)) {
    digitalWrite(6, HIGH);
    delay(50);
  } else {
    digitalWrite(6, LOW);
  }

// pin 7
  if ((a > 236.25) && (a <= 258.75)) {
    digitalWrite(7, HIGH);
    delay(50);
  } else {
    digitalWrite(7, LOW);
  }

// pin 8
  if ((a > 213.75) && (a <= 236.25)) {
    digitalWrite(8, HIGH);
    delay(50);
  } else {
    digitalWrite(8, LOW);
  }

// pin 9
  if ((a > 191.25) && (a <= 213.75)) {
    digitalWrite(9, HIGH);
    delay(50);
  } else {
    digitalWrite(9, LOW);
  }

// pin 10
  if ((a > 168.75) && (a <= 191.25)) {
    digitalWrite(10, HIGH);
    delay(50);
  } else {
    digitalWrite(10, LOW);
  }

// pin 11
  if ((a > 146.25) && (a <= 168.75)) {
    digitalWrite(11, HIGH);
    delay(50);
  } else {
    digitalWrite(11, LOW);
  }

// pin 12
  if ((a > 123.75) && (a <= 146.25)) {
    digitalWrite(12, HIGH);
    delay(50);
  } else {
    digitalWrite(12, LOW);
  }

// pin 13
  if ((a > 101.25) && (a <= 123.75)) {
    digitalWrite(13, HIGH);
    delay(50);
  } else {
    digitalWrite(13, LOW);
  }

// pin 14
  if ((a > 78.75) && (a <= 101.25)) {
    digitalWrite(14, HIGH);
    delay(50);
  } else {
    digitalWrite(14, LOW);
  }

// pin 15
  if ((a > 56.25) && (a <= 78.75)) {
    digitalWrite(15, HIGH);
    delay(50);
  } else {
    digitalWrite(15, LOW);
  }

// pin 16
  if ((a > 33.75) && (a <= 56.25)) {
    digitalWrite(16, HIGH);
    delay(50);
  } else {
    digitalWrite(16, LOW);
  }

// pin 17
  if ((a > 11.25) && (a <= 33.75)) {
    digitalWrite(17, HIGH);
    delay(50);
  } else {
    digitalWrite(17, LOW);
  }
}
