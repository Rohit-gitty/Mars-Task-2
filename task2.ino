
// motor1
int ena1=5;
int in1=6;
int in2=7;


// motor 2
int ena2=10;
int in3=8;
int in4=9;

void setup(){
  	// pinMode(ena1,OUTPUT);
    pinMode(in1,OUTPUT);            //2 input pins for a motor 1
    pinMode(in2,OUTPUT);


    // pinMode(ena2,OUTPUT);
    pinMode(in3,OUTPUT);                //2 input pins for a motor 2
    pinMode(in4,OUTPUT);
    Serial.begin(9600);
}
  
  void  front()
  {
    digitalWrite(in1,HIGH);     // to move front
    digitalWrite(in2,LOW);
    // analogWrite(ena1,100);
  
    digitalWrite(in3,HIGH);     
    digitalWrite(in4,LOW);
    // analogWrite(ena1,100);
    }
  
  
  void back()
  {
    digitalWrite(in2,HIGH);   //to rotate the motor 1 backwards
    digitalWrite(in1,LOW);
    // analogWrite(ena1,100);

    digitalWrite(in4,HIGH);   //to rotate the motor 2 backwards
    digitalWrite(in3,LOW);
    // analogWrite(ena1,100);
    }

  
 void left()
 {
    digitalWrite(in1,HIGH);    //to move towards left
    digitalWrite(in2,LOW);
  
    // analogWrite(ena1,80);
  
    digitalWrite(in3,LOW);    
    digitalWrite(in4,HIGH);
  
    // analogWrite(ena2,100);
  }
  

    //   digitalWrite(in1,LOW);
    //    digitalWrite(in2,LOW);

  void right()
  {
   
    digitalWrite(in1,LOW);    //to move towards right
    digitalWrite(in2,HIGH);
  
    // analogWrite(ena1,100);
  
    digitalWrite(in3,HIGH);    
    digitalWrite(in4,LOW);
  
    // analogWrite(ena2,80);
  }

  char str;
  void loop()
  {
    if (Serial.available() > 0)             //to check whether any key is pressed in the keyboard
    {

        str = Serial.read();
        Serial.println(str);

    }
    
    if (str == 'w'){                 //press w to move front
    front();
    }

    else if (str == 'a'){            //press a to move left
    left();
    }
 
    else if (str == 's'){            //press s to move back
    back();
    }

    else if (str == 'd'){            //press d to move right
    right();
    }

  }

       
  

  

  