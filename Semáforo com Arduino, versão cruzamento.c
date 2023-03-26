// dando um "nome" para as portas 
int vermelho_1 = 10;
int vermelho_2 = 11;
int amarelo_1 = 9;
int amarelo_2 = 12;
int verde_1 = 8;
int verde_2 = 13;
 
void setup() {
  // indicando para o arduíno quais portas vamos usar
  pinMode(vermelho_1, OUTPUT);
  pinMode(amarelo_1, OUTPUT);
  pinMode(verde_1, OUTPUT);
 
  pinMode(vermelho_2, OUTPUT);
  pinMode(amarelo_2, OUTPUT);
  pinMode(verde_2, OUTPUT);
}
 
void loop() {
   cruzamento();
}
 
void cruzamento() {
  // sinal 1 - amarelo
  digitalWrite(vermelho_1, LOW);
  digitalWrite(amarelo_1, HIGH);
  digitalWrite(verde_1, LOW);
 
  // sinal 2 - amarelo também
  digitalWrite(vermelho_2, LOW);
  digitalWrite(amarelo_2, HIGH);
  digitalWrite(verde_2, LOW);
 
  // esperamos 2s com o sinal no amarelo
  delay(2000);
 
  // sinal 1
  // apagmos o amarelo e ligamos o vermelho
  digitalWrite(amarelo_1, LOW);
  digitalWrite(vermelho_1, HIGH);
  // digitalWrite(verde_1, LOW);
 
  // sinal 2
  // apagmos o amarelo e ligamos o verde
  digitalWrite(amarelo_2, LOW);
  // digitalWrite(vermelho_2, LOW);
  digitalWrite(verde_2, HIGH);
 
  // esperamos 5s com o sinal fechado (1)/ aberto (2)
  delay(5000);  
 
  // sinal 1
  // apagamos o vermelho e ligamos o verde
  digitalWrite(verde_1, HIGH);
  // digitalWrite(amarelo_1, LOW);
  digitalWrite(vermelho_1, LOW);
 
  // sinal 2
  // apagamos o verde e ligamos o vermelho
  digitalWrite(verde_2, LOW);
  // digitalWrite(amarelo_2, LOW);
  digitalWrite(vermelho_2, HIGH);
 
  // esperamos 5s com o sinal aberto
  delay(5000);
}