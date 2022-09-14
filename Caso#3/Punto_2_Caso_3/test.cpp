#include "Flight.h"
#include "List.h"


// debe llenar una lista de pCantidad vuelos aleatorios cuya hora y minutos de partida esten entre pStartHour y pEndHour
// tomando en cuenta las restricciones de los minutos de salida segun el ejercicio 3 del caso #3
void fillFlights(int pCantidad, int pStartHour, int pEndHour) {
    int contador = 0;
    List<Flight>* listVuelos = new List<Flight>();//Lista de vuelos
    
    while(contador < pCantidad) {
        Flight *vuelo =  new Flight(rand()%24, rand()%43, rand()%1000, rand()%150, "Airbus"+rand()%1000); //con el rand()%43 respeta los 17 minutos de atraso
        int tiempo = vuelo->getIntTimeValue();
        cout <<"\nTiempo de vuelos:  " << tiempo << endl;
        if(vuelo->getHour() >= pStartHour && vuelo->getHour() <= pEndHour){ //Verifica que este dentro del rango de salida con respecto a la hora de salida
            listVuelos->add(vuelo);//Agrega a la lista de vuelos            
        }
     contador++;
    }
    if(listVuelos->getSize() > 0){
        cout << "\nSe agregaron " << listVuelos->getSize() << " correctamente a la lista de vuelos"<< endl;
    }
    else{
        cout << "No se agregó ningun avión a la lista"<< endl;
    }


    

}  

int main() {
    //Cantidad de vuelo-Hora de inicio-Hora - hora de salida
    fillFlights(20,10,24);  //Crea aleatoriamente los vuelos
    
}