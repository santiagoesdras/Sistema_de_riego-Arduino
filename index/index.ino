unsigned long time1;
unsigned long time2;
void setup  () {
pinMode( 8 , INPUT);
pinMode( 9 , INPUT);    
pinMode( 10 , OUTPUT);
pinMode( 11 , OUTPUT);
pinMode( 12 , OUTPUT);
pinMode( 13 , OUTPUT);
}
void loop () {
  sensar1();
}

void alarma(){}

void sensar1(){
  int sens1;
  sens1 = digitalRead(8);
    if(sens1==0){
      digitalWrite(13,1);
      digitalWrite(12,0);
    }
    else if(sens1==1){
      digitalWrite(13,0);
      digitalWrite(12,1);
    }
    sensar2();
  }

void sensar2(){
  int sens2;
  sens2 = digitalRead(9);
    if(sens2==0){
      alarma(time1 =  ());
    }
    else if(sens2==1){

    }
  }
