#include <iostream>
#include <random>

using namespace std;

int main(){
    // Genera un Número completamente aleatorio
    random_device rd;

    // Genera una semilla aleatoria
    mt19937 gen(rd());

    // Distribuye los Números, en este caso no hay un intervalo
    uniform_int_distribution<> dis;

    // Número aleatorio entre el 1 y el 10
    uniform_int_distribution<> dis1_10(1, 10);

    // Número aleatorio entre el 1 y el 100
    uniform_int_distribution<> dis1_100(1, 100);

    // Número aleatorio entre el 1 y el 1000
    uniform_int_distribution<> dis1_1000(1, 1000);

    // Genera el Número completamente aleatorio, entre [1, 10], entre [1, 100] y entre [1, 1000]
    int random              = dis(gen);
    int random1_10          = dis1_10(gen);
    int random1_100         = dis1_100(gen);
    int random1_1000        = dis1_1000(gen);

    cout << "Número completamente aleatorio generado: " << random << endl;
    cout << "Número aleatorio entre el 1 y el 10: " << random1_10 << endl;
    cout << "Número aleatorio entre el 1 y el 100: " << random1_100 << endl;
    cout << "Número aleatorio entre el 1 y el 1000: " << random1_1000 << endl;

    return 0;
}