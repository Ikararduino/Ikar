#include <Servo.h>

// Объявляем объекты для каждого сервопривода
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int angle; // переменная для угла поворота микро серво

void setup() {
  // Указываем пины для подключения микро серво
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10); // Исправлено: теперь используется пин 10
  servo4.attach(11);
  servo5.attach(12);
}

void loop() {
  // Цикл для поворота от 0 до 90 градусов
  for (angle = 0; angle <= 90; angle++) {
    // Сообщаем каждому микро серво угол поворота
    servo1.write(angle); 
    servo2.write(angle); 
    servo3.write(angle);
    servo4.write(angle); 
    servo5.write(angle); 
    
    delay(20); // Ждем, пока все сервы не сделают поворот
  }
  // Цикл для поворота от 90 до 0 градусов
  for (angle = 90; angle >= 0; angle--) {
    // Сообщаем каждому микро серво угол поворота обратно к началу
    
    if (servo1.attached()) {servo1.write(angle);}
    
    if (servo2.attached()) {servo2.write(angle);}
    
    if (servo3.attached()) {servo3.write(angle);}
    
    if (servo4.attached()) {servo4.write(angle);}      
    
    if (servo5.attached()) {servo5.write(angle);} 
    
    delay(20); 
  }

  delay(100); // Ждем перед повторением цикла
}
