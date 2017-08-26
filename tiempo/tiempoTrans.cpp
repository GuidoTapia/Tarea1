#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
    string entrada, salida, auxE,auxS,horasT;
    int diferencia,buffer;
    int iAux=0;
    cout << "Ingresar hora de entrada \n";
    cin >> entrada;
    cout << "Ingresar hora de salida \n";
    cin >> salida;
    for(int i=0;i<10;i++){
        if (i>=8 || entrada[i] == ':'){
            diferencia=atoi(auxS.c_str())-atoi(auxE.c_str());
            if (diferencia<0){
                if(iAux==0){
                    diferencia+=24;
                }
                else{
                    diferencia+=60;
                    buffer--;
                }
            }
            if (iAux>0){
                if(buffer<10){
                    horasT+="0";
                }
                stringstream convert;
                convert<<buffer;
                horasT+=convert.str();
                if(i<9){
                    horasT+=":";
                }
            }
            buffer=diferencia;
            auxE="";
            auxS="";
            iAux++;
        }
        else{
           auxE+= entrada[i];
           auxS+= salida[i];
        }
    }
    cout <<"Tiempo transcurrido: "<< horasT << "\n";
    return 0;
}
