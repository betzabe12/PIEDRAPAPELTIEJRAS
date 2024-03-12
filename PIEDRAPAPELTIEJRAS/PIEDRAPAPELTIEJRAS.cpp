#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Juego {
private:
    string nombreJugador;
    int opcionJugador;
    int opcionMaquina;
    int puntajeJugador;
    int puntajeMaquina;

public:

    class persona : {
    public:
        int seleccionar() {
            cout << "Elige tu jugada (1 - Piedra, 2 - Papel, 3 - Tijera): ";
            int opcion;
            cin >> opcion;
            return opcion;
        }
    };

    // Constructor por defecto
    Juego(string nombre) : nombreJugador(nombre), puntajeJugador(0), puntajeMaquina(0) {}

    // Para ver el puntaje del jugador
    int getPuntajeJugador() const {
        return puntajeJugador;
    }

    void jugar() {
        // Inicializar la seleccion para los numeros aleatoriosn para el juego

        cout << nombreJugador << ", selecciona una opcion:";
        cout << "1. Piedra";
        cout << "2. Papel";
        cout << "3. Tijera";
        cin >> opcionJugador;

        opcionMaquina = rand() % 3 + 1; // Generar opcion aleatoria para la maquina (1: piedra, 2: papel, 3: tijera)

        // Mostrar opcion de la máquina
        switch (opcionMaquina) {
        case 1:
            cout << "La maquina elige: Piedra";
            break;
        case 2:
            cout << "La maquina elige: Papel";
            break;
        case 3:
            cout << "La maquina elige: Tijera";
            break;
        }

        // Determinar el resultado
        if (opcionJugador == opcionMaquina) {
            cout << "Empate!";
        }
        else if ((opcionJugador == 1 && opcionMaquina == 3)
            (opcionJugador == 2 && opcionMaquina == 1)
            (opcionJugador == 3 && opcionMaquina == 2)) {
            cout << "¡Felicidades ganaste un dulce!";
            puntajeJugador++;
        }
        else {
            cout << "¡La maquina ha ganado, eres el perdedor!";
            puntajeMaquina++;
        }
    }
};

int main() {
    string nombreJugador;
    cout << "Ingrese su apodo: ";
    cin >> nombreJugador;

    Juego juego(nombreJugador);

    char seguirJugando = 's';

    while (seguirJugando == 's') {
        juego.jugar();

        cout << "Puntaje " << nombreJugador << ": " << juego.getPuntajeJugador() << endl;

        cout << "¿Quieres seguir jugando con la maquina poderosa?: ";
        cin >> seguirJugando;
    }

    return 0;
}