#include <iostream>
using namespace std;

int main() {
    double distancia, tempo, velocidade;

    cout << "Digite a distancia percorrida (em quilometros): ";
    cin >> distancia;

    cout << "Digite o tempo de percurso (em minutos): ";
    cin >> tempo;

    // convertendo a distancia para metros e o tempo para segundos
    distancia *= 1000; // 1 km = 1000 m
    tempo *= 60; // 1 min = 60 s

    // calculando a velocidade
    velocidade = distancia / tempo;

    cout << "A velocidade do projetil e de " << velocidade << " metros por segundo." << endl;

    return 0;
}
