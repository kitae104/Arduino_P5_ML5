// 버튼값 송신
#define BUTTON 2
int val, prev_value, count;

void setup() {
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0 && prev_value == 1) {
    count +=10;
    if(count >=255){
      count = 0;
    }
    Serial.write(count);      // 0 송신
  } 
  prev_value = value;
  delay(30);              // 전송 속도 30ms 지연
}
