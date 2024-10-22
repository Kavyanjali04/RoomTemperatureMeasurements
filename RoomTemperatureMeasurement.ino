int val =0;
float mv =0, cell =0;
void setup()
{
  pinMode(A5,INPUT);
  Serial.begin(9600);
}

void loop() {
 val = analogRead(A5);
 Serial.println(val);
 mv =(val/1024.0)*5000;
 cell =mv/10;
 Serial.println(cell);
 delay(1000);

}
