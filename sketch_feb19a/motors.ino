// M1_Speed управляет скоростью вращения первого двигателя.
// M1_dir управляет направлением вращения первого двигателя.
// M2_Speed и M2_dir - скоростью и направлением вращения второго двигателя, соответственно.

#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46

void setup() {
  // Объявление пинов, работающих на выход.
  pinMode(M1_dir, OUTPUT);
  pinMode(M1_Speed, OUTPUT);
  pinMode(M2_dir, OUTPUT);
  pinMode(M2_Speed, OUTPUT);
}

void loop() {
  // Движение вперед
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed, 135);
  analogWrite(M2_Speed, 135);
  delay(2000); // Задержка для движения вперед
  
  // Поворот направо (уменьшение скорости второго двигателя)
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed, 135);
  analogWrite(M2_Speed, 0); // Уменьшение скорости второго двигателя
  delay(850); // Задержка для поворота
  
  // Движение вперед
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed, 135);
  analogWrite(M2_Speed, 135);
  delay(2000); // Задержка для движения вперед
  
  // Поворот налево (уменьшение скорости первого двигателя)
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed,135); // Уменьшение скорости первого двигателя
  analogWrite(M2_Speed, 0);
  delay(850); // Задержка для поворота
  
  // Движение вперед
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed, 135);
  analogWrite(M2_Speed, 135);
  delay(2000); // Задержка для движения вперед
  
  // Поворот направо (уменьшение скорости второго двигателя)
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed, 135);
  analogWrite(M2_Speed, 0); // Уменьшение скорости второго двигателя
  delay(850); // Задержка для поворота
  
  // Движение вперед
  digitalWrite(M1_dir, LOW);
  digitalWrite(M2_dir, LOW);
  analogWrite(M1_Speed, 135);
  analogWrite(M2_Speed, 135);
  delay(1000); // Задержка для движения вперед
}