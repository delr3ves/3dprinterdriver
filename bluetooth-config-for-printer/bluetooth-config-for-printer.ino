const int LED = 13;
const int BTPWR = 12;

char nombreBT[17] = "Tizota's Printer";
char velocidad ='8';//9600
char pin [5]= "2223";

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BTPWR, OUTPUT);

  digitalWrite(LED, LOW);
  digitalWrite(BTPWR, HIGH);

  Serial.begin(9600);

  Serial.print("AT");
  delay(1000);

  Serial.print("AT+NAME");
  Serial.print(nombreBT);
  delay(1000);

  Serial.print("AT+BAUD");
  Serial.print(velocidad);
  delay(1000);

  Serial.print("AT+PIN");
  Serial.print(pin);
  delay(1000);

  digitalWrite(LED, HIGH);
}

void loop(){
  
}
