int valor;

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(13, OUTPUT);

}

void loop() {
valor = digitalRead(9);
  //int valor1 = map(valor,0,1024,0,256);
  Serial.println(valor);
  if(valor==1){
    digitalWrite(13,1);
    Serial.println("Tierra humeda");
//    Serial.println(valor1);
    }
  else{
    digitalWrite(13,0);
    Serial.println("Tierra seca");
//    Serial.println(valor1);
    }
}
