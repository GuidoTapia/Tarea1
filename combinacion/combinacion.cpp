#include <iostream>

using namespace std;
int factorial(int n){
    if (n==1){
        return 1;
    }
    return n*factorial(n-1);
}
void combinacion(char vec[],int a,int b,int i,string alm){
    if (b==1){
        for (int c=i;c<a;c++){
            cout<<alm+vec[c]<<endl;
        }
    }
    if (b>1){
        combinacion(vec,a,b-1,i+1,alm+vec[i]);
        if (a-i>b){
            combinacion(vec,a,b,i+1,alm);
        }
    }
}
int main()
{
    int a,b;
    cout << "ingrese numero de elementos y tamanho de las combinaciones\n";
    cin >> a >>b;
    char elementos[a];
    for(int i=0 ; i<a;i++){
        elementos[i]=97+i;
        //cout << elementos[i]<<endl;
    }
    cout << "la cantidad de combinaciones posibles es:\n" <<factorial(a)/(factorial(b)*factorial(a-b))<< endl;
    cout << "las posibles combinaciones son:\n";
    combinacion(elementos,a,b,0,"");
    return 0;
}
