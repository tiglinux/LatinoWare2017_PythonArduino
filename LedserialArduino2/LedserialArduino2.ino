#define led 8


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  Serial.println("Digite 1 para ligado ou 2 para desligado!");
  
}



void loop() {
 
  
  boolean logico = true;
  
  while(logico){
    char leitura = Serial.read();
    
    if(leitura == '1'){
      digitalWrite(led,HIGH);
      break;
    }
    if(leitura == '2'){
      digitalWrite(led,LOW);
      break;
    }
  }
}
