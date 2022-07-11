#include<iostream>
#include <ctime>
 
using namespace std;
/*
23. Una función recibe como parámetro un entero que indica la edad de una persona en días. 
La función debe imprimir la edad de la persona en años, meses y días.
*/

void edadActual(int anioNac, int mesNac, int diaNac)
{
time_t t = time(0);// Obtiene la fecha actual desde el sistema
    tm* now = std::localtime(&t);
    int anioActual = 1900 + now->tm_year;
    int mesActual = now->tm_mon + 1;
    int diaActual = now->tm_mday;

 int diasTranscFechaActual = (anioActual * 360) + (mesActual*30) + diaActual;
    int diasTranscFechaNac = (anioNac * 360) + (mesNac*30) + diaNac;
 
    int edadDias = diasTranscFechaActual - diasTranscFechaNac;
    int anio = edadDias / 360;
    int mes = (edadDias % 360) / 30;
    int dia = (edadDias % 360) % 30;
 
    cout<<endl<<"Usted tiene "<< anio <<" año(s), ";
    cout<<mes <<" mes(es), ";
    cout<<dia <<" día(s)";
}

int main()
{
   // fecha de nacimiento de la persona
    int anioNac = 2004;
    int mesNac = 7;
    int diaNac = 7;
 
    edadActual(anioNac, mesNac, diaNac);
 
    return 0;
}