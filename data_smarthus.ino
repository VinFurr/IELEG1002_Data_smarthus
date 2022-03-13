
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT); //sensor gang
  pinMode(4, INPUT); //sensor bad
  pinMode(7, INPUT); //sensor stue
  pinMode(8, INPUT); //sensor kjøkken
  pinMode(3, OUTPUT);//lys gang
  pinMode(5, OUTPUT);//lys bad
  pinMode(6, OUTPUT);//lys stue
  pinMode(9, OUTPUT);//lys kjøkken
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int snsr_gan = digitalRead(2);
  int snsr_bad = digitalRead(4);
  int snsr_stu = digitalRead(7);
  int snsr_kjo = digitalRead(8);
  int lys_gan  = 3; //digitalWrite(3, LOW);
  int lys_bad  = 5; //digitalWrite(5);
  int lys_stu  = 6; //digitalWrite(6);
  int lys_kjo  = 9; //digitalWrite(9);

  if (snsr_gan == HIGH){
    digitalWrite(lys_gan, HIGH);
  }
  else{
    digitalWrite(lys_gan, LOW);
  }
 
  if (snsr_bad == HIGH){
    digitalWrite(lys_bad, HIGH);
  }else{
    digitalWrite(lys_bad, LOW);
  }
  
  if (snsr_stu == HIGH){
    digitalWrite(lys_stu, HIGH);
  }else{
    digitalWrite(lys_stu, LOW);
  }
  
  if (snsr_kjo == HIGH){
    digitalWrite(lys_kjo, HIGH);
  }else{
    digitalWrite(lys_kjo, LOW);
  }

}
