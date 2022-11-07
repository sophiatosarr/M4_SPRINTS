// Programa : Pisque um LED
// Autor : FILIPEFLOP
//define as notas musicais
#define NOTE_C1 33
#define NOTE_C2 65
#define NOTE_C3 131
#define NOTE_C4 262
#define NOTE_D1 37
#define NOTE_D2 73
#define NOTE_D3 147
#define NOTE_D4 294
#define NOTE_E1 41
#define NOTE_E2 82
#define NOTE_E3 165
#define NOTE_E4 330
#define NOTE_F1 44
#define NOTE_F2 87
#define NOTE_F3 175
#define NOTE_F4 349
//declara um vetor
int vetorBinario[4];
//declara em que porta o Buzzer está
const int Buzzer = 37;
int binario[10];
//Capta os números do LDR
int Numero() {
  int luminosidade = analogRead(18);
  return luminosidade;
}
//Transforma os números do LDR em números de 0 até 15
int transformaQuinze(int numero) {
  int k = 0;

  while (numero > 0) {
    numero -= (4095 / 16);
    k++;
  }
  return k - 1;
}



//Transforma os decimais em binário
void transformaBinario(int n){
    
    int i = 0, num = n;

    int count = 0;
    
	
	while(count < 4){
		vetorBinario[i] = n % 2;
		i++;
		n = n / 2;
		count++;
	}
	

}

//declara as notas musicais e o funcionamneto do Buzzer
void som(int a) {
  int notes[16] = { NOTE_C1, NOTE_C2, NOTE_C3, NOTE_C4, NOTE_D1, NOTE_D2, NOTE_D3, NOTE_D4, NOTE_E1, NOTE_E2, NOTE_E3, NOTE_E4, NOTE_F1, NOTE_F2, NOTE_F3, NOTE_F4 };
  tone(Buzzer, notes[a]);
  delay(300);
  noTone(Buzzer);
}

void setup() {
  //Define a porta do led como saida
  Serial.begin(9600);
  pinMode(48, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(18, INPUT);
}

void loop() {


Serial.println(vetorBinario[2]);

  

  digitalWrite(48, HIGH);
  digitalWrite(21, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(46, HIGH);
  digitalWrite(37, HIGH);
  delay(800);
  digitalWrite(Buzzer, OUTPUT);
  
}
