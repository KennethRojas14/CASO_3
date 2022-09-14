//Elaborado por Kenneth Rojas Jiménez
// Carnet: 2021466579
//Estructuras de datos - Grupo 3
//Ultima modificación: 13/09/2022


#include <iostream>
#include "Stack.cpp"
#include <regex>
#include <string>

using namespace std;

#ifndef CASO

#define CASO 1

int main(){
    Stack<char> *pila = new Stack<char>();
    string infija;
    string postFija;
    int contador = 0;
    cout << "Escriba una expresion en forma infija: "; 
    cin >> infija; 
    while(infija[contador] != '\0'){
        //--------------------------------------------
        if(infija[contador] == '(' || infija[contador] == '+' || infija[contador] == '-' || infija[contador] == '*' || infija[contador] == '/' || infija[contador] == '%'){
            pila->push(&infija[contador]);
        }
        //--------------------------------------------
        else if(infija[contador] == ')' ){
            while(*pila->top() != '('){ 
                postFija += *pila->top();
                *pila->pop();
            }
        }
        //-----------------------------
        if(infija[contador] == '0' || infija[contador] == '1' || infija[contador] == '2' || infija[contador] == '3' || infija[contador] == '4' || infija[contador] == '5' || infija[contador] == '6' || infija[contador] == '7' || infija[contador] == '8' || infija[contador] == '9'){
            postFija += infija[contador];
            } 
      contador++;
    }

    cout << "La notación post fija es: " << postFija  <<endl;
}

#endif