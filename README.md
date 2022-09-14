# CASO_3
Para la implemetación del punto 1 en el caso #3 se procede a usar pilas de tal forma que se iran metiendo a la pila los operadores de arimetica como +,-,/,%,(,)
para la solución de esta según el infijo que ingrese el usuario se ira recorriendo caracter por caracter entrando a una serie de condicionales, primero si el caracter 
es un número se agrega al resultado y si el caracter es un operador aritmetico mencionados anterior mente se ingresa a la pila, asi sucesivamnete, hasta llegar
al caracter ')' con esto se da indicio a que debe sacar los valores de la pila hasta llegar a su pareja ')' por lo tanto mientras se van sacando los valores
el tope de la pila se asigna al resultado según el operador que este tenga

Para el punto 2 se crea una clase flight con una serie de metodos como lo es el getIntTimeValue() que convierte las horas y minutos a un número entero
luego en el test.cpp se crea el metodo fillFlights que crea vuelos aletarios de numeros aleatorios según los parametros de tal forma que se va agregando a una lista
al final imprime cuantos vuelos dentro del rango inicial entraron a la lista(El código no cumple con el objetivo solicitado)
