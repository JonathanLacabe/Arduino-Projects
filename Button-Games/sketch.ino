//MADE BY JONATHAN LACABE ON 11-5-2023.

#define BINARY1_LED 10
#define BINARY2_LED 11
#define BINARY4_LED 12
#define BINARY8_LED 13
#define BUTTON_LED 9
int total = 0;

void setup() {
  pinMode(BINARY1_LED, OUTPUT);
  pinMode(BINARY2_LED, OUTPUT);
  pinMode(BINARY4_LED, OUTPUT);
  pinMode(BINARY8_LED, OUTPUT);
  pinMode(BUTTON_LED, INPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_LED);
  if (buttonState == 1){
    total++;
    if(total==16){
      total = 0;
    }
  setBinary(total);
  }
  delay(200);
}

void setBinary(int num){
  digitalWrite(BINARY1_LED, LOW);
  digitalWrite(BINARY2_LED, LOW);
  digitalWrite(BINARY4_LED, LOW);
  digitalWrite(BINARY8_LED, LOW);
  if (num==1){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==2){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==3){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==4){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==5){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==6){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==7){
    digitalWrite(BINARY1_LED, LOW);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==8){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==9){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==10){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==11){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, LOW);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==12){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==13){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, LOW);
    digitalWrite(BINARY8_LED, HIGH);
  } else if (num==14){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, LOW);
  } else if (num==15){
    digitalWrite(BINARY1_LED, HIGH);
    digitalWrite(BINARY2_LED, HIGH);
    digitalWrite(BINARY4_LED, HIGH);
    digitalWrite(BINARY8_LED, HIGH);
  }
}