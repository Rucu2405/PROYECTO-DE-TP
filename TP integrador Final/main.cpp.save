#include <iostream>
#include <random>
#include <cstdlib> ///Libreria para funcion random
#include <ctime> ///Libreria para tomar hora del equipo y crear semillas aleatorias para funcion random
#include "funciones.h"
#include <conio.h> ///_GETCH y borrar mensaje de boton para continuar
#include <thread>  ///para this_thread::sleep_for
#include <chrono>

using namespace std;

int main()
{
    srand(time(NULL));///semilla random
    int tam=20;///cantidad de cartas a utilizar

    string vecPalo[]= {" Corazon"," Diamante"," Trebol"," Picas"}; /// 0a3
    string vecFigura[]= {"10 ","J  ","Q  ","K  ","A  "}; ///0a4
    int vecPuntos[]= {10,11,12,15,20};///0a4

    string nombre1,nombre2;
    ///Usamos estos en las rondas///
    string mazoEnjuego[tam]= {};
    int puntosCartas[tam]= {};
    string vecmazoPalo[tam]= {};
    string vecmazoFigura[tam]= {};
    ///--------------------------/

    int manoJ1[6]= {};///  |0|1|2|3|4|   |5|suma
    int manoJ2[6]= {};

    int puntosRondaJ1[4]= {}; ///0|1|2  3total
    int puntosRondaJ2[4]= {}; ///0|1|2  3total
    bool mostrarMas=false;
    ///-------------------------////

    int tiempoEnpantalla=1;

    string nombreHistorico;
    int puntajeHistorico=0;


    /// Para mostrarlo por 3 segundos
    ///cout << "EMBAUCADO" << endl;
    ///this_thread::sleep_for(chrono::seconds(0));
    ///system("cls");

    int opc;//para el menu
    do
    {

        this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
        cout <<"\n\t\t\t        "<< endl;
        this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
        cout<<R"(
            #######  ##   ##  #####      ###    ##   ##   #####     ###    #####     #####
            ##       ### ###  ##   ##   ## ##   ##   ##  ##   ##   ## ##   ##  ##   ##   ##
            ##       #######  ##   ##  ##   ##  ##   ##  ##       ##   ##  ##   ##  ##   ##
            #####    ## # ##  ######   ##   ##  ##   ##  ##       ##   ##  ##   ##  ##   ##
            ##       ##   ##  ##   ##  #######  ##   ##  ##       #######  ##   ##  ##   ##
            ##       ##   ##  ##   ##  ##   ##  ##   ##  ##   ##  ##   ##  ##  ##   ##   ##
            #######  ##   ##  #####    ##   ##   #####    #####   ##   ##  #####     #####

)";
        ///cout <<"\n\t\t\t                EMBAUCADO                 "<< endl;
        this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
        cout <<"\t\t\t        "<< endl;
        this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
        cout <<"\n\t\t\t              MENU PRINCIPAL                 "<< endl;
        cout <<"\n\t\t\t            1.    JUGAR                  "<< endl;
        cout <<"\t\t\t            2. ESTADISTICAS                  "<< endl;
        cout <<"\t\t\t            3.   CREDITOS                  "<< endl;
        cout <<"\t\t\t            4.    SALIR                  \n"<< endl;
        cout <<"\t\t\t        Ingrese una opcion (1-4): " << endl;
        cout<<"\t\t\t\t\t    ";
        cin >> opc;
        ///opc=1;

        /// Evaluamos la opción ingresada
        switch (opc)
        {
        case 1:
            system("cls");
            ingresarNombres(nombre1,nombre2);
            for (int ronda=1; ronda<4; ronda++)
                if(ronda==3)
                { this_thread::sleep_for(chrono::seconds(1));
                    cout <<"\t        "<< endl;
                    this_thread::sleep_for(chrono::milliseconds(500));
                    cout << "\n\t\t\tRonda Nro: "<<ronda<<"\n\n";
                    creacionMazosRandom(mazoEnjuego,vecFigura,vecPalo,vecmazoPalo,vecmazoFigura,vecPuntos,puntosCartas,tam);
                    repartirCartas(mazoEnjuego,puntosCartas,nombre1,nombre2,puntosRondaJ1,puntosRondaJ2);
                    calcularPuntos(puntosRondaJ1,puntosRondaJ2,puntosCartas,manoJ1,manoJ2,vecmazoPalo,nombre1,nombre2,ronda);
                    cout<<"\t\tPuntajes Obtenidos: \n";
                    mostrarPuntajes(manoJ1,mostrarMas,nombre1);
                    mostrarPuntajes(manoJ2,mostrarMas,nombre2);
                     this_thread::sleep_for(chrono::seconds(1));
                cout <<"\n\t        "<< endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout<<"\t\t\tDefiniendo ganador . . . ";
                    this_thread::sleep_for(chrono::seconds(2));
                    system("cls");
                    definirGanador(puntosRondaJ1,puntosRondaJ2,nombre1,nombre2,nombreHistorico,puntajeHistorico);
                    //reiniciamos vectores para proxima partida
                    for(int i=0; i<6; i++)
                    {
                        if(i<4)
                        {
                            puntosRondaJ1[i]=0;
                            puntosRondaJ2[i]=0;
                        }
                        manoJ1[i]=0;
                        manoJ2[i]=0;
                    }
                     this_thread::sleep_for(chrono::seconds(3));
                    cout<<"\n";
                    cout<<"\nIngrese una tecla para volver al menu principal";
                    _getch();
                    system("cls");

                }
                else
                {

                this_thread::sleep_for(chrono::seconds(1));
                cout <<"\t        "<< endl;
                    this_thread::sleep_for(chrono::milliseconds(500));
                    cout << "\n\t\t\tRonda Nro: "<<ronda<<"\n\n";
                    creacionMazosRandom(mazoEnjuego,vecFigura,vecPalo,vecmazoPalo,vecmazoFigura,vecPuntos,puntosCartas,tam);
                    repartirCartas(mazoEnjuego,puntosCartas,nombre1,nombre2,puntosRondaJ1,puntosRondaJ2);
                    calcularPuntos(puntosRondaJ1,puntosRondaJ2,puntosCartas,manoJ1,manoJ2,vecmazoPalo,nombre1,nombre2,ronda);
                    cout<<"\t\tPuntajes Obtenidos: \n";
                     mostrarPuntajes(manoJ1,mostrarMas,nombre1);
                    mostrarPuntajes(manoJ2,mostrarMas,nombre2);
                     this_thread::sleep_for(chrono::seconds(1));
                cout <<"\n\t        "<< endl;
                    cout<<"\n";
                    system("pause");
                    system("cls");
                }
            ///Creamos mazos: REAL[figura+palo],Puntos[puntosCartas] en la misma posicion

            break;
        case 2:
            system("cls");
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout << "\n\n\t\t\t";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout << "\n\n\t\t\t   Estadistica del mayor puntaje obtenido     \n";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
           // cout << "\n\t\t\t\t \n";
            cout<<"\n\t\t\t   Jugador/es : "<<nombreHistorico<<endl;
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout<<"\t\t\t   Puntaje de : "<<puntajeHistorico<<endl;
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout << "\n\t\t\t";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout<<"\n\n\t\t\tIngrese una tecla para volver al menu anterior : ";
            cout<<"\t\t\t\t\t\t                                              ";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
             _getch();
             system("cls");

            break;
        case 3:
            system("cls");
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout << "\n\n\t\t\t";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout << "\n\t\t\t\t\tCREDITOS\n";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout<<"\n\t\t\t\tIntegrantes\tGrupo 12\n";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout<<"\n\t\t\t\tLucas Alegre\t - Legajo: 30200";
            cout<<"\n\t\t\t\tJuan Ledesma\t - Legajo: 25963";
            cout<<"\n\t\t\t\tRodrigo Moyano\t - Legajo: 30489";
            cout<<"\n\t\t\t\tAgustin Zuloaga\t - Legajo: 30659";
            this_thread::sleep_for(chrono::seconds(tiempoEnpantalla));
            cout << "\n\n\t\t\t";
            cout<<"\n\n\t\t\tIngrese una tecla para volver al menu principal";
            cout<<"\t\t\t\t\t\t                                            ";
            _getch();
            system("cls");

            break;
        case 4:
            system("cls");
            cout<<"\n\t\tDesea salir del programa? presione 4 otra vez para confirmar\n";
            cout<<"\t\t O cualquier otra tecla para volver al menu"<<endl;
            cout<<"\n\t\t\t               ";
            cin>>opc;
            if(opc==4)
            {
                cout << "\t\tSaliendo del programa...\n";this_thread::sleep_for(chrono::seconds(2));
            }
            else
                {
                    cout << "\t\tVolviendo al menu...\n";this_thread::sleep_for(chrono::seconds(2));
            }
            system("cls");
            break;
        default:
            system("cls");
            cout << "Opcion incorrecta. Por favor, ingrese una opcion nuevamente (1-4).\n";
            this_thread::sleep_for(chrono::seconds(1));
            break;
        }

    }
    while (opc != 4 );    // El bucle se repite hasta que se elija la opción 4 (Salir)

    return 0;
}
