int l=13;
int b=1;
int c=0;
void setup(){
  pinMode(l,OUTPUT);
  pinMode(b,INPUT);
} 
 c=digitalRead(b);
  if (c==0){
    digitalWrite(l,HIGH);
  }
  else {
    digitalWrite(l,LOW);
  }
  
}