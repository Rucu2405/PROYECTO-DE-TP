#include <iostream>
#include "funciones.h"
#include <algorithm>
#include <cstdlib>
#include <conio.h> ///_GETCH y borrar mensaje de boton para continuar
#include <thread>  ///para this_thread::sleep_for
#include <chrono>

using namespace std;

/** aca definimos las funciones **/

///PEDIR NOMBRES Y CONFIRMAR SELECCIÓN
void ingresarNombres(string &j1,string &j2)
{
    char x;
    cout<<"\n\t\t\tINGRESE SU NOMBRE A CONTINUACION                  "<<endl;
    cout<<endl;
    while(x!='S' && x!='s')
    {
        cout<<"\n\t\t\tJugador 1: ";
        cin>>j1;
        cout<<"\n\t\t\tJugador 2: ";
        cin>>j2;
        cout<<endl;

        do
        {
            cout<<"\n\t\t\tLos nombres son los correctos? (S/N) "<<endl;
            cout<<"\t\t\t\t\t ";
            cin>>x;
            system("cls");
            cout<<"\n\t\t\tIngrese una opcion valida"<<endl;

            cout<<"\n\t\t\t Jugador 1: "<<j1<<"\n\t\t\t Jugador 2: "<<j2<<endl;
            cout<<"\t\t\t\t\t ";

        }
        while(x!='S' && x!='s' && x!='N' && x!='n' );    ///Solo sale del ingreso de "x" si la opcion elegida es S/N

        system("cls");

        cout<<"\n\t\t\tVuelva a ingresar los nombres."<<endl;
        cout<<endl;
    }
    system("cls");
}
///FIN PEDIR NOMBRES Y CONFIRMAR SELECCIÓN

///EMBAUCADORA, SE TOMA EL VALOR RANDOM DEL INDICE DE vecPalo
string embaucadora(int puntosRondaJ1[],int puntosRondaJ2[],string vecmazoPalo[],int ronda,string nombre1,string nombre2)
{
    string paloEmb;
    int x;
    int opcion=0;
    // int opcSwi=3;

    x=rand()%20; //0 a 19
    paloEmb=vecmazoPalo[x];

    if(ronda==2)
    {
        cout<< endl;
        cout<<"\n\tLa carta embaucadora original de esta ronda es " << paloEmb << "." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"\tEs posible realizar el cambio de esta carta por un costo de 20 puntos." << endl;
        cout<<endl;

        if(puntosRondaJ1[3]>=20)/// ver si tiene minimo 20 puntos
        {
            this_thread::sleep_for(chrono::seconds(0));
            cout<<"\t"<<nombre1<<", desea cambiar la carta embaucadora? (1=SI / 0=NO)"<<endl;
            cout<<"\t\t\t\t\t           ";
            cin>>opcion;
            if(opcion==1)
            {
                ///cambia embaucadora
                x=rand()%20;
                paloEmb=vecmazoPalo[x];
                puntosRondaJ1[3]-=20;
            }
            else
            {
                cout<<"\t\tUsted eligio no cambiar la carta."<<endl;
                cout<<endl;
            }

        }

        if (puntosRondaJ2[3]>=20 && opcion==0)
        {
            this_thread::sleep_for(chrono::seconds(1));
            cout<<"\t"<<nombre2<<", desea cambiar la carta embaucadora? (1=SI / 0=NO)"<<endl;
            cout<<"\t\t\t\t\t           ";
            cin>>opcion;
            if(opcion==1)
            {
                ///cambia embaucadora
                x=rand()%20;
                paloEmb=vecmazoPalo[x];
                puntosRondaJ2[3]-=20;
            }
            else
            {
                cout<<"\t\tUsted eligio no cambiar la carta."<<endl;
                cout<<endl;
            }

        }

    }


    if (ronda==3)
    {
        cout<< endl;
        cout<<"\n\t\tLa carta embaucadora original de esta ronda es " << paloEmb << "." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"\tEs posible realizar el cambio de esta carta por un costo de 20 puntos." << endl;
        cout<<endl;

        if(puntosRondaJ2[3]>=20)/// ver si tiene minimo 20 puntos
        {
            this_thread::sleep_for(chrono::seconds(1));
            cout<<"\t"<<nombre2<<", desea cambiar la carta embaucadora? (1=SI / 0=NO)"<<endl;
            cout<<"\t\t\t\t\t           ";
            cin>>opcion;
            if(opcion==1)
            {
                ///cambia embaucadora
                x=rand()%20;
                paloEmb=vecmazoPalo[x];
                puntosRondaJ2[3]-=20;
            }
            else
            {
                cout<<"\t\tUsted eligio no cambiar la carta."<<endl;
                cout<<endl;
            }

        }
        if (puntosRondaJ1[3]>=20 && opcion==0)
        {
            this_thread::sleep_for(chrono::seconds(1));
            cout<<"\t\t"<<nombre1<<", desea cambiar la carta embaucadora? (1=SI / 0=NO)"<<endl;
            cout<<"\t\t\t\t\t           ";
            cin>>opcion;
            if(opcion==1)
            {
                ///cambia embaucadora
                x=rand()%20;
                paloEmb=vecmazoPalo[x];
                puntosRondaJ1[3]-=20;
            }
            else
            {
                cout<<"\t\tUsted eligio no cambiar la carta."<<endl;
                cout<<endl;
            }

        }

    }


    return paloEmb;
}///FIN EMBAUCADORA

///Creacion del mazo de cartas+figura y mazo de puntos, se crean en la misma pos=x, para al randomizar queden en el mismo lugar
void creacionMazosRandom(string mazoEnjuego[],string vecFigura[],string vecPalo[],string vecmazoPalo[],string vecmazoFigura[],int vecPuntos[],int puntosCartas[],int tam)
{
    int x=0;
    ///Creamos los mazos
    for(int i=0; i<4; i++)///mazo "Corazon","Diamante","Trebol","Picas"
    {
        for(int c=0; c<5; c++)
        {
            mazoEnjuego[x]=vecFigura[c]+ " de "+ vecPalo[i];  ///MAZO con todo, menos puntos. SOLO PARA MOSTRAR
            vecmazoPalo[x]=vecPalo[i];                                          ///mazo "Corazon","Diamante","Trebol","Picas"
            vecmazoFigura[x]=vecFigura[c];                                   ///mazo con "10" "J" "Q" "K" "A"
            puntosCartas[x]=vecPuntos[c];                                      ///mazo con puntos 10,11,12,15,20
            x++;
        }
    }
    ///Randomizamos los mazos
    for(int i=0; i<tam; i++)
    {

        int x=rand()%tam;
        swap(mazoEnjuego[i],mazoEnjuego[x]);///intercambia
        swap(puntosCartas[i],puntosCartas[x]);///valores del vector
        swap(vecmazoPalo[i],vecmazoPalo[x]);///en posicion i por
        swap(vecmazoFigura[i],vecmazoFigura[x]);///posicion X random.
    }

}
///FIN creacion de mazo

///Repartimos cartas
void repartirCartas(string mazoEnjuego[],int puntosCartas[],string nombre1,string nombre2,int puntosRondaJ1[],int puntosRondaJ2[])
{
    for(int i=0; i<10; i++)
    {
        if(i==0)
        {
            cout<<"\t  "<<nombre1<<" - Puntos: "<<puntosRondaJ1[3]<<"\n\n";

        }
        else if(i==5)
        {

            cout<<"\n\t  "<<nombre2<<" - Puntos: "<<puntosRondaJ2[3]<<"\n\n";

        }
        this_thread::sleep_for(chrono::milliseconds(800));
        cout<<"\t\t\t"<<mazoEnjuego[i]<<endl;

    }
}
///FIN Repartimos cartas

///Puntos

void calcularPuntos(int puntosRondaJ1[],int puntosRondaJ2[],int puntosCartas[],int manoJ1[],int manoJ2[],string vecmazoPalo[],string nombre1,string nombre2,int ronda)
{
    string emb=embaucadora(puntosRondaJ1,puntosRondaJ2,vecmazoPalo,ronda,nombre1,nombre2);
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"\n\t\tLa embaucadora es : " << emb<<endl<<endl;

    for(int i=0; i<10; i++)
    {
        if(i<5)
        {
            if(vecmazoPalo[i]!=emb)
            {
                manoJ1[i]=puntosCartas[i];/// se entregan los puntos de cada carta 0a4[]
                manoJ1[5]+=puntosCartas[i];///sumar los puntos de las cartas en 5[]
                puntosRondaJ1[ronda-1]+=puntosCartas[i];
                puntosRondaJ1[3]+=puntosCartas[i];
            }
            else
            {
                manoJ1[i]=0;
            }
        }
        else if (i<10)
        {
            if(vecmazoPalo[i]!=emb)
            {
                manoJ2[i-5]=puntosCartas[i];
                manoJ2[5]+=puntosCartas[i];
                puntosRondaJ2[ronda-1]+=puntosCartas[i];
                puntosRondaJ2[3]+=puntosCartas[i];
            }
            else
            {
                manoJ2[i-5]=0;
            }
        }
    }

///Fin puntos
}

///Mostrar puntos de manos
void mostrarPuntajes(int vec[],bool x,string nombre)///vec manoj1 y mano j2
{
    cout<<"\t\t"<<nombre<<" : ";
    this_thread::sleep_for(chrono::milliseconds(500));
    for( int c=0; c<5; c++)
    {
        if(vec[c]!=0&&x)/// a partir de la segunda carta diferente de cero, muestra + y el numero .
        {
            this_thread::sleep_for(chrono::milliseconds(500));
            cout<<" + ";
            this_thread::sleep_for(chrono::milliseconds(500));
            cout<<vec[c];
        }
        if(vec[c]!=0 && x==false)///si o si primero ingresa aca y muestra el numero
        {
            this_thread::sleep_for(chrono::milliseconds(500));
            cout<<vec[c];
            x=true;
        }
    }
///mostramos el lugar 5 con la suma de las anteriores cartas.
    cout << " = ";
    this_thread::sleep_for(chrono::milliseconds(500));
    cout<<vec[5];
    vec[5]=0;
    cout <<endl;
}
///Fin mostrar puntos de manos

void definirGanador(int puntosRondaJ1[],int puntosRondaJ2[],string nombre1,string nombre2,string &nombreHistorico,int &puntajeHistorico)
{
    cout <<"\t\t\t        "<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"\n\t\t\t\tRonda\t"<<nombre1<<"\t"<<nombre2<<"\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"\t\t\t\t  1\t"<<puntosRondaJ1[0]<<"\t"<<puntosRondaJ2[0]<<"\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"\t\t\t\t  2\t"<<puntosRondaJ1[1]<<"\t"<<puntosRondaJ2[1]<<"\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"\t\t\t\t  3\t"<<puntosRondaJ1[2]<<"\t"<<puntosRondaJ2[2]<<"\n";
    cout <<"\n\t\t\t        "<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    //buscamos el mayor
    int mayorRJ1=0;
    int mayorRJ2=0;
    for(int i=0; i<3; i++)
    {
        if(puntosRondaJ1[i]>mayorRJ1)
        {
            mayorRJ1=puntosRondaJ1[i];
        }
        if(puntosRondaJ2[i]>mayorRJ2)
        {
            mayorRJ2=puntosRondaJ2[i];
        }

    }

    if(puntosRondaJ1[3]==puntosRondaJ2[3])
    {
        if(mayorRJ1==mayorRJ2)
        {
            cout<<"\n\t\t\t\aEmpate, nadie gana, jueguen otra vez!"<<endl;
            if(puntosRondaJ1[3]>puntajeHistorico)
            {
                nombreHistorico=nombre1 +" y "+ nombre2;
                puntajeHistorico=puntosRondaJ1[3];
            }
        }
        else if(mayorRJ1>mayorRJ2)
        {
            cout<<"\n\n\t\t\t \aGanador: ";
            cout<<"\t"<<nombre1<<endl;
            cout<<" \t\tpor haber tenido una ronda en la que registró el puntaje más alto, el cual es : "<<mayorRJ1<<endl;
            cout<<"\t\tPuntaje: "<< puntosRondaJ1[3];
            if(puntosRondaJ1[3]>puntajeHistorico)
            {
                nombreHistorico=nombre1;
                puntajeHistorico=puntosRondaJ1[3];
            }
        }
        else
        {
            cout<<"\n\t\t\t aGanador: ";
            cout<<"\t"<<nombre2<<endl;
            cout<<" \t\tpor haber tenido una ronda en la que registró el puntaje más alto, el cual es : "<<mayorRJ2<<endl;
            cout<<"\t\tPuntaje: "<< puntosRondaJ2[3];
            if(puntosRondaJ2[3]>puntajeHistorico)
            {
                nombreHistorico=nombre2;
                puntajeHistorico=puntosRondaJ2[3];
            }
        }
    }
    else if(puntosRondaJ1[3]>puntosRondaJ2[3])
    {
        cout<<"\n\t\t\t \aGanador: ";
        cout<<"\t"<<nombre1<<"\t\tPuntaje: "<< puntosRondaJ1[3];

        if(puntosRondaJ1[3]>puntajeHistorico)
        {
            nombreHistorico=nombre1;
            puntajeHistorico=puntosRondaJ1[3];
        }

        // nombreMayor     puntajeMayor;
    }
    else
    {
        cout<<"\n\t\t\t \aGanador: ";
        cout<<"\t"<<nombre2<<"\t\tPuntaje: "<< puntosRondaJ2[3];

        if(puntosRondaJ2[3]>puntajeHistorico)
        {
            nombreHistorico=nombre2;
            puntajeHistorico=puntosRondaJ2[3];
        }
    }
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"\n\n\t\t\t        "<< endl;
}

///mostramos ganador y verificamos empates
