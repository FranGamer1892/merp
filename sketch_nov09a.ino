String voice; 

// Motor A

int enA = 9;
int in1 = 8;
int in2 = 7;

// Motor B

int enB = 3;
int in3 = 5;
int in4 = 4;

void setup() 
{ 
  
Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}
 
void loop() 
{
  while (Serial.available())
  { 
  delay(10); 
  char c = Serial.read(); 
  voice += c; 
  }
    
  if (voice.length() > 0)
  {
       if(voice == "1")
       {
             Serial.println("UP");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  analogWrite(enA, 200);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enB, 200);
       }  
       if(voice == "2")
       {
             Serial.println("DOWN");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  analogWrite(enA, 200);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enB, 200); 
       }  
       if(voice == "3")
       {
             Serial.println("RIGHT");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  analogWrite(enA, 200);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enB, 150); 
       }  
       if(voice == "4")
       {
             Serial.println("LEFT");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  analogWrite(enA, 150);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enB, 200); 
       }  
       if(voice == "5")
       {
             Serial.println("STOP"); 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
       }  
voice="";
}
}
