#include <Servo.h>

Servo hipRight, hipLeft, kneeRight, kneeLeft, ankleRight, ankleLeft;

void setup() {
  hipRight.attach(2);    // الحوض الأيمن
  hipLeft.attach(3);     // الحوض الأيسر
  kneeRight.attach(4);   // الركبة اليمنى
  kneeLeft.attach(5);    // الركبة اليسرى
  ankleRight.attach(6);  // الكاحل الأيمن
  ankleLeft.attach(7);   // الكاحل الأيسر

  // تثبيت جميع المحركات عند زاوية 90° (وضع البداية)
  holdAt90Degrees();
  delay(1000);
}

void loop() {
  walkCycle();  // تنفيذ دورة المشي بشكل مستمر
}

void walkCycle() {
  // الخطوة 1: رفع الساق اليمنى
  hipRight.write(70);  // تحريك الحوض الأيمن للأمام
  kneeRight.write(120);  // ثني الركبة اليمنى
  ankleRight.write(60);  // رفع الكاحل الأيمن
  delay(1000);

  // الخطوة 2: إعادة الساق اليمنى إلى الوضع الطبيعي
  hipRight.write(90);
  kneeRight.write(90);
  ankleRight.write(90);
  delay(1000);

  // الخطوة 3: رفع الساق اليسرى
  hipLeft.write(70);
  kneeLeft.write(120);
  ankleLeft.write(60);
  delay(1000);

  // الخطوة 4: إعادة الساق اليسرى إلى الوضع الطبيعي
  hipLeft.write(90);
  kneeLeft.write(90);
  ankleLeft.write(90);
  delay(1000);
}

void holdAt90Degrees() {
  hipRight.write(90);
  hipLeft.write(90);
  kneeRight.write(90);
  kneeLeft.write(90);
  ankleRight.write(90);
  ankleLeft.write(90);
}
