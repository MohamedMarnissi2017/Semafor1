/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                         SEMAFOR1                            **
**                                                             **
**  NOM:Mohamed el Marnissi                   DATA: 31/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                 // configura el final de salida
  pinMode(2,OUTPUT);//Vermell peatons
  pinMode(3,OUTPUT);//Verda peatons
 pinMode(4,OUTPUT);//Vermell vehicles
  pinMode(5,OUTPUT);//groc vehicles
  pinMode(6,OUTPUT);//verd vehicles

}

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
  digitalWrite(2,HIGH);
digitalWrite(6,HIGH);
delay(10000);
digitalWrite(2,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(5,LOW);
delay(1000);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(5,LOW);
delay(1000);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
delay(3000);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(10000);
digitalWrite(3,LOW);
delay(1000);
digitalWrite(3,HIGH);
delay(1000);
digitalWrite(3,LOW);
delay(1000);
digitalWrite(3,HIGH);
delay(1000);
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
delay(3000);
digitalWrite(4,LOW); 

}

//************************** FUNCIONS ***************************
