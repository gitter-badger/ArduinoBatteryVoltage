float refvolts = 5.0;
int inputPin1 = A1;
int inputPin2 = A2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val1 = analogRead(inputPin1);
  int val2 = analogRead(inputPin2);
  
  float volts1 = (val1/1023.0)*refvolts ;
  float volts2 = (val2/1023.0)*refvolts ;
  
  Serial.print("Volts1 = ");
  Serial.println(volts1);
  Serial.print("Volts2 = ");
  Serial.println(volts2);
  
  delay(1000);
}
