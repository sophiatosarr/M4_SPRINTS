#include <iostream>

//EXERCÍCIO 1

/*
#include <bits/stdc++.h>
using namespace std;

float converteSensor(float valor, float min, float max) {
    float paraDivisao = max - min;
    float numero = valor - min;
    float divide = numero/ paraDivisao;
    return divide;
}
    int main() {
        cout << "Teste Ex 1" << endl;
        cout << converteSensor(100, 100, 400) << endl;
        //valor esperado: 0

        cout << converteSensor(400, 100, 400) << endl;
        //valor esperado: 1

        cout << converteSensor(250, 100, 400) << endl;
        //valor esperado: 0.5
    }
    */
 //EXERCÍCIO 2
/*
#include <bits/stdc++.h>
using namespace std;

int devolve(int x){
    return x;
}

int main(){
    int numero;
    cin >> numero;
    cout << devolve(numero);
}
 */

//EXERCÍCIO 3
/*
#include <bits/stdc++.h>
using namespace std;

static int espaço = 0;

void colocaVetor(int colocaVetor, int valorMaximo, int pos, int Vetor[]){
    if(espaço < valorMaximo) {
        Vetor[pos] = colocaVetor;
        espaço++;
    } else {
        cout << "ATENÇÃO: o valor maximo é = " << valorMaximo << endl;
    }
}

int main(){
    int valorMaximo;
    cout << "qual o valor maximo?";
    cin >> valorMaximo;
    int vetor[valorMaximo];

    colocaVetor(9, valorMaximo, espaço, vetor);
    colocaVetor(8, valorMaximo, espaço, vetor);
    colocaVetor(7, valorMaximo, espaço, vetor);
    colocaVetor(6, valorMaximo, espaço, vetor);
    colocaVetor(5, valorMaximo, espaço, vetor);
    colocaVetor(4, valorMaximo, espaço, vetor);
    colocaVetor(3, valorMaximo, espaço, vetor);
    colocaVetor(2, valorMaximo, espaço, vetor);
    colocaVetor(1, valorMaximo, espaço, vetor);
    colocaVetor(0, valorMaximo, espaço, vetor);

    colocaVetor(100, valorMaximo, espaço, vetor);

    cout << vetor[0] << endl;
    cout << vetor[1] << endl;
    cout << vetor[2] << endl;
    cout << vetor[3] << endl;
    cout << vetor[4] << endl;
    cout << vetor[5] << endl;
    cout << vetor[6] << endl;
    cout << vetor[7] << endl;
    cout << vetor[8] << endl;
    cout << vetor[9] << endl;
}
 */
//EXERCÍCIO 4
/*
string dirDistanciaMaior (int* Vetor){
    int maiorValor = 0;
    for (int i=1; i<4; i++) {
        if (Vetor[maiorValor] < Vetor[i])
            maiorValor = i;
    }
    string distancia;
    switch (maiorValor) {
        case 0: distancia = "Direita"; break;
        case 1: distancia = "Esquerda"; break;
        case 2: distancia = "Frente"; break;
        case 3: distancia = "Tras"; break;
    }
    return distancia;
}

float maiorDist( int* Vetor){
    float max = Vetor[0];
    for (int i=1; i<4; i++){
        if (max < Vetor[i])
            max = Vetor[i];
    }
    return max;
}

int main() {

    int posicoes [4] = {0, 20, 100, 50};

    cout << dirDistanciaMaior(posicoes) << endl;


    cout << maiorDist(posicoes) << endl;



    // "Direita", "Esquerda", "Frente", "Tras"
    int posicoes2 [4] = {95, 70, 80, 50};

    cout << dirDistanciaMaior(posicoes2) << endl;


    cout << maiorDist(posicoes2) << endl;




    int posicoes3 [4] = {10, 0, 50, 60};

    cout << dirDistanciaMaior(posicoes3) << endl;


    cout << maiorDist(posicoes3) << endl;




    int posicoes4 [4] = {54, 55, 30, 0};

    cout << dirDistanciaMaior(posicoes4) << endl;


    cout << maiorDist(posicoes4) << endl;


    return 0;
}
*/
//EXERCICIO 5
/*
bool seguir(){
    int parada;
    cout<<"Parada? Aperte 0 para não e aperte 1 para sim!";
    cin>>parada;

    if(parada==1){
        return(true);
    }
    else{
        return(false);
    }
}

int main(){
  int parada = 0;

  while (parada == 0){
    parada = seguir();
  }
  cout<<"Houve uma Parada";
  return 1;
}
*/
//EXERCÍCIO 6
/*
#include <string>
using namespace std;


float mudaSensor(int minimo, int maximo, int medicao) {
    float resultado;
    resultado = (medicao - minimo) / (maximo - minimo);
    return resultado;
}


float Leitura() {
    int numero = 0;
    cin >> numero;
    return numero;
}


int InsereVetor(int elemento, int valorMax, int lastPos, int *Vetor) {
    if (lastPos < valorMax - 1) {
        Vetor[lastPos + 1] = elemento;
    } else {
        cout << "O máximo valor é" << valorMax
             << " Posição final mais um: " << lastPos + 1 << endl;
    }
    return lastPos + 1;
}


void direçãoMaior(int *vetor, int direçãoMaior) {
    string posicoes[4] = {"Direita", "Esquerda", "Frente", "Tras"};
    string maiorPosicao;
    int maior = *vetor;
    for (int i = 0; i < 4; i++) {
        if (vetor[i] > direçãoMaior){
            direçãoMaior = vetor[i];
            maiorPosicao = posicoes[i];
        }
    }
    cout << "O movimento está " << maiorPosicao << endl
         << "O valor da distância: " << direçãoMaior << endl;
}


int leituraDoComando() {
    bool condicao = true;
    cout << "Para parar aperte 0" << endl;
    cin >> condicao;
    if (condicao == 0) {
        cout << "O loop se encerrou!" << endl;
    }
    return condicao;
}

int dirige(int *v, int maxv) {
    int maxVetor = maxv;
    int *vetorMov = v;
    int posAtualVetor = 0;
    int dirigindo = 1;
    while (dirigindo) {
        cout << "Selecione o valor que vai para direita: " << endl;
        int medicao = Leitura();
        medicao = mudaSensor(0, 830, medicao);
        posAtualVetor = InsereVetor(medicao, maxVetor, posAtualVetor, vetorMov);

        cout << "Selecione o valor que vai para a esquerda: " << endl;
        medicao = Leitura();
        medicao = mudaSensor(0, 830, medicao);
        posAtualVetor = InsereVetor(medicao, maxVetor, posAtualVetor, vetorMov);

        cout << "Selecione o valor que vai para cima " << endl;
        medicao = Leitura();
        medicao = mudaSensor(0, 830, medicao);
        posAtualVetor = InsereVetor(medicao, maxVetor, posAtualVetor, vetorMov);

        cout << "Selecione o valor que vai para baixo" << endl;
        medicao = Leitura();
        medicao = mudaSensor(0, 830, medicao);
        posAtualVetor = InsereVetor(medicao, maxVetor, posAtualVetor, vetorMov);

        dirigindo = leituraDoComando();
    }
    return posAtualVetor;
}

void percorre(int *v, int tamPercorrido) {
    int *vetorMov = v;
    int maiorDir = 0;

    for (int i = 0; i < tamPercorrido; i += 4) {
        direçãoMaior(&(vetorMov[i]), maiorDir);
    }
}

int main(int argc, char **argv) {
    int maxVetor = 100;
    int vetorMov[400];
    int posAtualVet = 0;

    posAtualVet = dirige(vetorMov, maxVetor);
    percorre(vetorMov, posAtualVet);

    return 0;
}
 */
