int botao1 = 5;
int botao2 = 6;
int led1 = 2;
int aux = 0;
int aux2 = 0;
int estadob1 = 0;
int estadob2 = 0;
int aux3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadob1 = digitalRead(botao1);
  estadob2 = digitalRead(botao2);

  if(estadob1 == 1 && aux == 0)
    aux=1;
  else if(estadob1 == 0 && aux == 1)
  {
    aux = 0;
  }

  if(estadob2 == 1 && aux2 == 0)
    aux2=1;
  else if(estadob2 == 0 && aux2 == 1)
  {
    aux2 = 0;
  }

  if(aux == 0 && aux2 ==0)
    aux3 = 1;
  
  if(aux == 1 && aux2 == 1)
  {
    aux3 = 0;
    digitalWrite(led1, HIGH);
  }

  if((aux == 1 || aux2 == 1) && digitalRead(led1)==HIGH && aux3 == 1)
    digitalWrite(led1, LOW);  
}