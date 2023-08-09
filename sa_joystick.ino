//Incomplete
#define joyX A0
#define joyY A1

int up = 10;
int left = 11;
int down = 12;
int right = 13;

void setup() {
  Serial.begin(9600);
  pinMode(up,OUTPUT);
  pinMode(down,OUTPUT);
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
}
 
void loop() {
  int xValue;
  int yValue;
  xValue = analogRead(joyX);
  yValue = analogRead(joyY);
  
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print("\t Y: ");
  Serial.println(yValue);

  if (xValue < 30){
    digitalWrite(up, HIGH);
  } else {
    digitalWrite(up, LOW);
  }

  if (yValue > 1020){
    digitalWrite(left, HIGH);
  } else {
    digitalWrite(left, LOW);
  }

  if (xValue > 1020){
    digitalWrite(down, HIGH);
  } else {
    digitalWrite(down, LOW);
  }

  if (yValue < 2){
    digitalWrite(right, HIGH);
  } else {
    digitalWrite(right, LOW);
  }
}