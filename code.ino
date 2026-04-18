int lightVal = 0;
bool lightOn = false;

int trigPin = 6;
int echoPin = 5;
long duration;
float distance;
int freq;

int soundPin = 8;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(lightVal);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  // Calculate distance in cm
  distance = duration * 0.0343 / 2;
  freq = map((int)distance, 5, 200, 800, 200);

  lightVal = analogRead(A0);
  lightOn = lightVal > 950;

  if (lightOn) {
    tone(soundPin, freq);
  } else {
    noTone(8);
  }
}

