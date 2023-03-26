// dando um "nome" para as portas 
// agora temos o botão também
int vermelho = 10;
int amarelo = 9;
int verde = 8;
int botao = 12;
 
void setup() {
  // indicando para o arduíno quais portas vamos usar
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
 
  pinMode(botao, INPUT);
 
  // iniciamos com o verde ligado ...
  digitalWrite(verde, HIGH);
 
  // .. e o amarelo e vermelho desligados
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
}
 
void loop() {
  if (digitalRead(botao) == HIGH) {
      // esperamos um pouco antes de começar a lógica
      delay(2000);
      semaforo();
  }
}
 
void semaforo() {
  // amarelo logo após o botão ser pressionado!
  // se encaixa perfeitamente na nossa lógica
  // entendeu porque começamos no amarelo no exercício anterior? 🙂
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
 
  // esperamos 2s com o sinal no amarelo
  delay(2000);
 
  // apagamos o amarelo e ligamos o vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  // Não precisa desse pois o verde já estava apagado
  // digitalWrite(verde, LOW);
 
  // esperamos 5s com o sinal fechado
  delay(5000);  
 
  // para finalizar, apagamos o vermelho e ligamos o verde
  digitalWrite(verde, HIGH);
  // não precisa desse pois o amarelo já estava apagado
  // digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
 
  // esperamos 5s com o sinal aberto
  delay(5000);
}