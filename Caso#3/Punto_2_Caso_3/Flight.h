// Elaborado por Kenneth Rojas Jimenez #2021466579
// Estructura de datos - Grupo#3
// Quiz #6
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>

using namespace std;

// Quiz #6
// 1. Utilizando esta classe agregue los atributos del vuelo: aerolinea, numero de vuelo, cantidad de pasajeros
// 2. Complete el constructor de la clase, de tal forma que se pueda modificar el flightTime para una hora y minutos específicos
// 3. Implementar alguna forma de convertir el time a un número entero de tal forma que entre menor la hora menor el número, eso en getIntTimeValue()
// 4. En el test.cpp, implementar la función fillFlights()
// fecha de entrega: jueves 8 de setiembre antes de las 10pm
// entrega al asistente al correo: kevinqj.2002@gmail.com
// subject: estructuras de datos - quiz #6
// adjuntan el archivo test.cpp y Flight.h

class Flight {

    private: //Atributos de la clase Flight
        time_t flightTime;
        int numVuelo;           //numero de vuelo
        int cantPasajeros;      //Cantidad de pasajeros
        string aerolinea;       //Nombre de la aerolinea
        tm *currentTime;
        int horas;
        int minutos;
        


    public: //Metodos de la clase Flight
    //Horas-Minutos- Numero de vuelo-Cantidad de pasajeros-NombreAerolienea
        Flight(int pHour, int pMinutes, int pNumVuelo,int pCantPasajeros, string pAerolinea) { //Constructor de la clase
            flightTime = time(NULL); //
            currentTime = localtime(&flightTime);
            horas = pHour;
            minutos = pMinutes;
            numVuelo = pNumVuelo;
            cantPasajeros = pCantPasajeros;
            aerolinea = pAerolinea;
        }

        int getHour(){
            return horas;
        }

        int getMinutes(){
            return minutos;
        }
        
        char* flightTimeString() {
            char* result = asctime(currentTime);
            return result;
        }

        int getIntTimeValue() {
            int result = (horas)*100+(minutos); //Convierte las horas y minutos a enteros
            return result;
        }
};