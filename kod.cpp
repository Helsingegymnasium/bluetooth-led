// Vi antar att LED:en är kopplad till pin 13
int ledPin = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (Serial.aviable() > 0) {
    // Läs in data
    int data = Serial.read();

    // Sänd datan till serial monitorn
    Serial.print(data);
    // Med en ny rad efter det
    Serial.print("\n");

    if (data == 1) {
      // Ifall telefonen har sänt en etta lägger vi LED:en på
      digitalWrite(ledPin, HIGH);
    } else {
      // Annors stänger vi den av
      digitalWrite(ledPin, LOW);
    }
  }
}
