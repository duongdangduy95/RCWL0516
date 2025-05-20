#define MOTION_PIN 2  

void setup() {
  pinMode(MOTION_PIN, INPUT);
  Serial.begin(9600);
  Serial.println("Đang khởi động cảm biến RCWL-0516...");
}

void loop() {
  int motion = digitalRead(MOTION_PIN);

  if (motion == HIGH) {
    Serial.println("Phát hiện chuyển động!");
  } else {
    Serial.println("Không có chuyển động.");
  }

  delay(500); 
}
