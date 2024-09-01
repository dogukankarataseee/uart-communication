// Dogukan Karatas

int blue = 3;     // The pin number where the blue LED is connected
int green = 6;    // The pin number where the green LED is connected
int yellow = 9;   // The pin number where the yellow LED is connected
int red = 11;     // The pin number where the red LED is connected

void setup()
{
  Serial.begin(9600);         // Initialize serial communication at a baud rate of 9600
  pinMode(blue, OUTPUT);      // Set the blue LED pin as an output
  pinMode(green, OUTPUT);     // Set the green LED pin as an output
  pinMode(yellow, OUTPUT);    // Set the yellow LED pin as an output
  pinMode(red, OUTPUT);       // Set the red LED pin as an output
}

void loop()
{
  if (Serial.available())     // If there is data available on the serial port
  {
    char ch = Serial.read();  // Read the data and store it in the 'ch' variable
    if (ch == 'a')            // If the character 'a' is received
    {
      digitalWrite(blue, HIGH);   // Turn on the blue LED
      Serial.print("your input : ");  // Print a message to the serial monitor
      Serial.println(ch);         // Print the received character and move to a new line
    }
    else if (ch == 's')       // If the character 's' is received
    {
      digitalWrite(green, HIGH);  // Turn on the green LED
      Serial.print("your input : ");  // Print a message to the serial monitor
      Serial.println(ch);         // Print the received character and move to a new line
    }
    else if (ch == 'd')       // If the character 'd' is received
    {
      digitalWrite(yellow, HIGH); // Turn on the yellow LED
      Serial.print("your input : ");  // Print a message to the serial monitor
      Serial.println(ch);         // Print the received character and move to a new line
    }
    else if (ch == 'f')       // If the character 'f' is received
    {
      digitalWrite(red, HIGH);    // Turn on the red LED
      Serial.print("your input : ");  // Print a message to the serial monitor
      Serial.println(ch);         // Print the received character and move to a new line
    }
    else if (ch == 'x')       // If the character 'x' is received
    {
      // Turn off all LEDs
      digitalWrite(green, LOW);   
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
      digitalWrite(yellow, LOW);
      Serial.print("your input : ");  // Print a message to the serial monitor
      Serial.println(ch);         // Print the received character and move to a new line
    }
  }
}
