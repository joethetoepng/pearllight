void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
//red
digitalWrite (9, LOW);
digitalWrite (10, HIGH);
digitalWrite (11, HIGH);
delay(100);

//yellow
digitalWrite (9, LOW);
digitalWrite (10, LOW);
digitalWrite (11, HIGH);
delay(100);

//green
digitalWrite (9, HIGH);
digitalWrite (10, LOW);
digitalWrite (11, HIGH);
delay(1000);

//teal
digitalWrite (9, HIGH);
digitalWrite (10, LOW);
digitalWrite (11, LOW);
delay(100);

//blue
digitalWrite (9, HIGH);
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
delay(100);

//purple
digitalWrite (9, LOW);
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
delay(100);

}
