const int ledPin1 = 2; 
const int ledPin2 = 3; 
const int ledPin3 = 4; 
const int ledPin4 = 5; 
const int ledPin5 = 6; 
const int ledPin6 = 7; 
const int ledPin7 = 8; 
const int ledPin8 = 9; 

int value; 

int delayy; 
int max_delayy = 5000;
int min_delayy = 1000;
 
#define pot A0
 
void setup() { 
 
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT); 
  pinMode(ledPin5, OUTPUT); 
  pinMode(ledPin6, OUTPUT); 
  pinMode(ledPin7, OUTPUT); 
  pinMode(ledPin8, OUTPUT); 
 
} 
 
void loop() { 
 
  value = analogRead(pot);
  delayy = map(value,0,1023,min_delayy,max_delayy); 

  for (int i = 2; i <= 9; i++){
    digitalWrite(i, HIGH); 
    delay(delayy); 
    digitalWrite(i, LOW); 
 
    value = analogRead(pot);
    delayy = map(value,0,1023,min_delayy,max_delayy); 
  }

  for (int i = 9; i >= 2; i--){
    digitalWrite(i, HIGH); 
    delay(delayy); 
    digitalWrite(i, LOW); 
 
    value = analogRead(pot);
    delayy = map(value,0,1023,min_delayy,max_delayy); 
  }
 
}