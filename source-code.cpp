int LEDG = 11;  // Define o pino do LED verde como 11
int LEDY = 10;  // Define o pino do LED amarelo como 10
int LEDR = 9;   // Define o pino do LED vermelho como 9

int IntensidadeLuz;  // Variável para armazenar a intensidade da luz
float LDR = A0;       // Pino do sensor LDR definido como A0
int valorLDR = 0;     // Variável para armazenar o valor lido do sensor LDR

int BUZZ = 13;        // Define o pino do buzzer como 13

void setup() {
  Serial.begin(9600);  // Inicia a comunicação serial com uma taxa de 9600 bauds
  pinMode(LEDG, OUTPUT);  // Define o pino do LED verde como saída
  pinMode(LEDY, OUTPUT);  // Define o pino do LED amarelo como saída
  pinMode(LEDR, OUTPUT);  // Define o pino do LED vermelho como saída
  pinMode(LDR, INPUT);    // Define o pino do sensor LDR como entrada
  pinMode(BUZZ, OUTPUT);  // Define o pino do buzzer como saída
}

void loop(){  
  valorLDR = analogRead(LDR);  // Lê o valor do sensor LDR
  IntensidadeLuz = map(valorLDR, 0, 1023, 0, 100);  // Mapeia o valor lido para uma faixa de 0 a 100
  Serial.print("Intensidade da luz= ");  // Imprime a intensidade da luz
  Serial.println(IntensidadeLuz);  // Imprime o valor da intensidade da luz
  delay(300);  // Aguarda 300 milissegundos
  
  if (IntensidadeLuz < 25){  // Se a intensidade da luz for menor que 25
    ledsoff();  // Desliga todos os LEDs
    digitalWrite(LEDG, HIGH);  // Liga o LED verde
  }
  else if (IntensidadeLuz >= 25 && IntensidadeLuz < 60){  // Se a intensidade da luz estiver entre 25 e 60
    ledsoff();  // Desliga todos os LEDs
    digitalWrite(LEDY, HIGH);  // Liga o LED amarelo
    tone(BUZZ, 400, 3000);  // Emite um som no buzzer com frequência de 400 Hz por 3 segundos
    delay(3000);  // Aguarda 3 segundos
  }
  else if (IntensidadeLuz > 60){  // Se a intensidade da luz for maior que 60
    ledsoff();  // Desliga todos os LEDs
    digitalWrite(LEDR, HIGH);  // Liga o LED vermelho
    tone(BUZZ, 400, 3000);  // Emite um som no buzzer com frequência de 400 Hz por 3 segundos
    delay(3000);  // Aguarda 3 segundos
  }
}

void ledsoff(){  // Função para desligar todos os LEDs
  digitalWrite(LEDG, LOW);  // Desliga o LED verde
  digitalWrite(LEDY, LOW);  // Desliga o LED amarelo
  digitalWrite(LEDR, LOW);  // Desliga o LED vermelho
}
