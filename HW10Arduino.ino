// HW10

void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int p2v = (millis() / 5000) % 2; // 5 sec
  int p4v = (millis() / 10000) % 2; //10 sec
  int p6v = (millis() / 15000) % 2; //15 sec
  int p10v = (millis() / 20000) % 2; //20 sec
  int p11v = (millis() / 30000) % 2; //30 sec
  int p12v = (millis() / 60000) % 2; //60 sec
  digitalWrite(2, p2v);
  digitalWrite(4, p4v);
  digitalWrite(6, p6v);
  digitalWrite(10, p10v);
  digitalWrite(11, p11v);
  digitalWrite(12, p12v);
}
