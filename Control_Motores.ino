// Motor 1
int ENA = 10;
int IN1 = 8;
int IN2 = 9;

// Motor 2
int ENB = 5;
int IN3 = 6;
int IN4 = 7;



void setup ()
{
 // Declaramos todos los pines como salidas
Serial.begin(9600);
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
}

void Adelante ()
{
 //Direccion motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 255); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Atras ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite (ENA, 255); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Izquierda ()
{
 //Direccion motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 255); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 255); //Velocidad motor A
}

void Derecha ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
analogWrite (ENA, 255); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor A
}
void Parar ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 0); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 0); //Velocidad motor A
}

void comprobador_ser(){
 {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    int dato = Serial.read();
    Serial.println(dato);
    
    if(dato==69)
    {
      Adelante();
      delay(20);
      Serial.print("Adelante");
    }
    else
    {
      Parar(); 
      Serial.print("Detenerse");    
    }
    if(dato==68)
    {
      Izquierda();
      delay(15);
      Serial.print("Izquierda");
    }
    else
    {
      Parar();     
      Serial.print("Detenerse");
    }
    if(dato==67)
    {
      Derecha();
      delay(15);
      Serial.print("Derecha");
    }
    else
    {
      Parar();     
      Serial.print("Detenerse");
    }
  } 
}
}


void loop ()
{  
comprobador_ser();
 
}
/*{
 if (Serial.available()>0){
      char option = Serial.read();
        if(option = 1){
          Adelante();
          int a1,a2;
          
       
        }
       else{
        Parar();
       }
       
   } 
  
}*/
