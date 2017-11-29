String srl;
void setup() { 
  pinMode(13, INPUT); // portas de entra
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600); // velocidade da porta serial
}

void loop() {
srl = ""; // limpa a string srl a cada leitura do conversor ad 
for(int i=6; i<=13; i++){
  srl =  String(srl + digitalRead(i));
 }
Serial.println(srl); // envia a string com os valores do ad pela serial 
delay(100); // espera 100 milisegundos por conta do delay de envio da porta serial
}
