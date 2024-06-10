int luzVermelho = 13;
int luzAmarelo = 12;
int luzVerde = 11;
int pedVermelho = 7;
int pedVerde = 6;
int botao = 2;

void setup() {
  pinMode(luzVermelho, OUTPUT);
  pinMode(luzAmarelo, OUTPUT);
  pinMode(luzVerde, OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(pedVerde, OUTPUT);
  pinMode(botao, INPUT);
}
void loop() {

    digitalWrite(luzVerde, HIGH);
    digitalWrite(luzAmarelo, LOW);
    digitalWrite(luzVermelho, LOW);
    digitalWrite(pedVerde, LOW);
    digitalWrite(pedVermelho, HIGH);
    delay(2000);
    if (digitalRead(botao) == 1){
      pedestre();
    }
    digitalWrite(luzVerde, LOW);
    digitalWrite(luzAmarelo, HIGH);
    digitalWrite(luzVermelho, LOW);
    digitalWrite(pedVerde, LOW);
    digitalWrite(pedVermelho, HIGH);
    delay(2000);
     if (digitalRead(botao) == 1){
      pedestre();
    }
    digitalWrite(luzVerde, LOW);
    digitalWrite(luzAmarelo, LOW);
    digitalWrite(luzVermelho, HIGH);
    digitalWrite(pedVerde, HIGH);
    digitalWrite(pedVermelho, LOW);
    delay(2000);
     if (digitalRead(botao) == 1){
      pedestre();
    }
}

int botaoPress(){
    if (digitalRead(botao) == 1){
    return 1;
  }
}

void pedestre(){
    digitalWrite(luzVerde, LOW);
    digitalWrite(luzAmarelo, HIGH);
    digitalWrite(luzVermelho, LOW);
    digitalWrite(pedVerde, LOW);
    digitalWrite(pedVermelho, HIGH);
    // delay(3000);
    digitalWrite(luzVerde, LOW);
    digitalWrite(luzAmarelo, LOW);
    digitalWrite(luzVermelho, HIGH);
    digitalWrite(pedVerde, HIGH);
    digitalWrite(pedVermelho, LOW);
    delay(5000);
     digitalWrite(luzVerde, HIGH);
    digitalWrite(luzAmarelo, LOW);
    digitalWrite(luzVermelho, LOW);
    digitalWrite(pedVerde, LOW);
    digitalWrite(pedVermelho, HIGH);
  }
