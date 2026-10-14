
/*
  Project: Automotive Temperature Monitoring System

  Purpose:
  Read a simulated temperature from a potentiometer.
  Check the temperature and show the system status.
  Send the data to the computer using serial communication.
*/

// Pin used to read the simulated temperature
int temperatureSensorPin = A0;

// these pins used for the three LEDs
int greenLedPin = 8;
int yellowLedPin = 9;
int redLedPin = 10;

// Temperature limits used for this demonstration
int warningTemperature = 60;
int criticalTemperature = 80;

// Variables used to store the readings
int sensorValue = 0;
int temperature = 0;

// This method runs once when the Arduino starts
void setup()
{
  // Start serial communication at 9600 baud
  Serial.begin(9600);

  // Set the LED pins as output pins
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);

  // Print the project title and column names
  Serial.println("Automotive Temperature Monitor");
  Serial.println("SensorValue,Temperature,Status");
}

// This method runs repeatedly
void loop()
{
  // Read the potentiometer value from analog pin A0
  sensorValue = analogRead(temperatureSensorPin);

  // Convert the input value from 0-1023 to 0-100
  // This represents a simulated temperature in degrees
  temperature = map(sensorValue, 0, 1023, 0, 100);

  // Check the temperature and update the LEDs
  checkTemperature();

  // Wait one second before reading again
  delay(1000);
}

// This method checks the temperature and reports the status
void checkTemperature()
{
  // Turn off all LEDs before checking the new status
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);

  // Check if the temperature is critical
  if (temperature >= criticalTemperature)
  {
    digitalWrite(redLedPin, HIGH);

    Serial.print(sensorValue);
    Serial.print(",");
    Serial.print(temperature);
    Serial.println(",CRITICAL");
  }

  // Check if the temperature needs a warning
  else if (temperature >= warningTemperature)
  {
    digitalWrite(yellowLedPin, HIGH);

    Serial.print(sensorValue);
    Serial.print(",");
    Serial.print(temperature);
    Serial.println(",WARNING");
  }

  // If neither condition is true, the temperature is normal
  else
  {
    digitalWrite(greenLedPin, HIGH);

    Serial.print(sensorValue);
    Serial.print(",");
    Serial.print(temperature);
    Serial.println(",NORMAL");
  }
}

