#include <iostream>
using namespace std;

int main()
{
            int añoInicial;
            int añoFinal;
            int contador = 0;

            cout<<"******PROGRAMA PARA CALCULAR AÑOS BISIESTOS EN UN PERIODO******"<<endl;
            cout<<"Ingresa en año menor : ";
            cin>>añoInicial;
            cout<<"Ingresa en año mayor : ";
            cin>>añoFinal;

            for(int i =  añoInicial; i <= añoFinal; i++){
                if((i%4==0 && i%100 != 0)||i%400==0){
                   contador++;
                }
            }

            cout<<"Total años bisiestos : "<<contador<<endl;


            //Modificar el codigo para implementar una estructura do-while o while
            //Si la fecha ingresada en mayor solicitar ingresar la fecha menor primero


    return 0;
}

