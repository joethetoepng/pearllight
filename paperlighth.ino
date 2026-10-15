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
delay(1000);

//yellow
digitalWrite (9, LOW);
digitalWrite (10, LOW);
digitalWrite (11, HIGH);
delay(1000);

//green
digitalWrite (9, HIGH);
digitalWrite (10, LOW);
digitalWrite (11, HIGH);
delay(1000);

//teal
digitalWrite (9, HIGH);
digitalWrite (10, LOW);
digitalWrite (11, LOW);
delay(1000);

//blue
digitalWrite (9, HIGH);
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
delay(1000);

//purple
digitalWrite (9, LOW);
digitalWrite (10, HIGH);
digitalWrite (11, LOW);
delay(1000);

}
