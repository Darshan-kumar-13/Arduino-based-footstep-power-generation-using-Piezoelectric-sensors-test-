#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD: Set the address to 0x27 or your LCD's I2C address
LiquidCrystal_I2C lcd(0x27, 16, 2); // 16x2 LCD at I2C address 0x27

// Define the analog input pin for voltage measurement
const int piezoPin = A0;

// Load resistance value in ohms (10kΩ)
const float resistance = 10000.0;

// Variables for measurements
float voltage = 0.0;  // Voltage in volts
float power = 0.0;    // Power in milliwatts

void setup() {
  // Initialize the LCD
  lcd.begin();
  lcd.backlight();  // Turn on the LCD backlight

  // Print initial message on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Footstep Power");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");
  delay(2000);

  // Clear the LCD for real-time data
  lcd.clear();

  // Initialize Serial Monitor for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the piezoelectric sensor
  int sensorValue = analogRead(piezoPin);

  // Convert the sensor value to voltage (assuming 5V reference)
  voltage = sensorValue * (5.0 / 1023.0);

  // Calculate power (P = V^2 / R)
  power = (voltage * voltage) / resistance;

  // Display voltage and power on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Voltage: ");
  lcd.print(voltage, 2); // Show voltage with 2 decimal places
  lcd.print(" V");

  lcd.setCursor(0, 1);
  lcd.print("Power: ");
  lcd.print(power * 1000, 2); // Convert to milliwatts and show 2 decimals
  lcd.print(" mW");

  // Debugging output to Serial Monitor
  Serial.print("Voltage: ");
  Serial.print(voltage, 2);
  Serial.print(" V, Power: ");
  Serial.print(power * 1000, 2);
  Serial.println(" mW");

  // Delay to stabilize readings
  delay(500);
}
