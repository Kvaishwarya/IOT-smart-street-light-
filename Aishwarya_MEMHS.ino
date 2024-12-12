#define trigPin1 4
#define echoPin1 2
#define led1 3

#define trigPin2 8
#define echoPin2 7
#define led2 9

#define trigPin3 13
#define echoPin3 12
#define led3 6


void setup()

{ 
  Serial.begin (9600);

  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(led1, OUTPUT);


  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(led2, OUTPUT);


  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(led3, OUTPUT);


  analogWrite(led1,20);
  analogWrite(led2,20);
  analogWrite(led3,20);


}

void loop()

{ 
  long duration1, distance1, duration2, distance2, duration3, distance3;

  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;
  Serial.print("distance1: ");
  Serial.println(distance1);

  if (distance1 < 20)

   { 
    analogWrite(led1,255);
   }

   else 
   {
     analogWrite(led1,20);
   }

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2/2) / 29.1;
  Serial.print("distance2: ");
  Serial.println(distance2);

  if (distance2 < 20)

   { 
    analogWrite(led2,255);
   }

   else 
   {
     analogWrite(led2,20);
   }

  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = (duration3/2) / 29.1;
  Serial.print("distance3: ");
  Serial.println(distance3);

  if (distance3 < 20)

   { 
    analogWrite(led3,255); //LED Bright
   }

   else 
   {
     analogWrite(led3,20); //LED Dim
   }
}
