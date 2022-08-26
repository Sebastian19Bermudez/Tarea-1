 #include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class cartas{



    public:

        void card() {
            cout<<"CARTAS Y CANTIDAD ";
            cout<<"\n8 cohetes";
            cout<<"\n7 robots";
            cout<<"\n8 helados";
            cout<<"\n6 camaras";
            cout<<"\n5 neveras";
            cout<<"\n6 cafeteras";
            cout<<"\n6 tocadiscos";
            cout<<"\n8 busitos";
            cout<<"\n7 pistolas";
            cout<<"\n7 lamparas de lava";
            cout<<"\n7 abanicos";
            cout<<"\n5 sillas";
            cout<<"\n7 zapatillas";
            cout<<"\n5 licuadora";
            cout<<"\n8 televisores";
            cout<<"\n7 lamparas";
            cout<<"\n6 telefonos";
            cout<<"\n6 sodas";
            cout<<"\n8 computadores";
            cout<<"\n6 bicicletas";
            cout<<"\n6 maquina de escribir";
            cout<<"\n5 patinetas";
            cout<<"\n5 calculadoras";
            cout<<"\6 casets";
            cout<<"\n6 lentes";
            cout<<"\n6 radios";
            cout<<"\n7 reloj";
            cout<<"\n6 videojuegos";
            cout<<"\n6 motos";
            cout<<"\n7 maletas";
            
            cout<<"Jugadores";
            cout<<"Jugador 1 Sebastian Bermudez";
            cout<<"jugador 2 Jair Navarro";
            cout<<"jugador 3 Carlos Cantillano";
            
        
        }

   
};

int main(){

    int op;
    char carta;
    char card;
    char car;
    char a;
    char b;
    char c;
    
cout<<"\t\t\t\t\t\t\t\tA LO LOCO";
cout<<" \n Opcion 1 son cartas y cantidad y jugadores";
cout<<"\n Opcion 2 comenzar juego";
cout<<"\n Opcion 3 terminar juego";

    do{
        cout<<"\nIngrese la opcion ";
        cin>>op;

        switch(op){ 
            case 1:       
                
               cout<<"CARTAS Y CANTIDAD ";
            cout<<"\n8 cohetes";
            cout<<"\n7 robots";
            cout<<"\n8 helados";
            cout<<"\n6 camaras";
            cout<<"\n5 neveras";
            cout<<"\n6 cafeteras";
            cout<<"\n6 tocadiscos";
            cout<<"\n8 busitos";
            cout<<"\n7 pistolas";
            cout<<"\n7 lamparas de lava";
            cout<<"\n7 abanicos";
            cout<<"\n5 sillas";
            cout<<"\n7 zapatillas";
            cout<<"\n5 licuadora";
            cout<<"\n8 televisores";
            cout<<"\n7 lamparas";
            cout<<"\n6 telefonos";
            cout<<"\n6 sodas";
            cout<<"\n8 computadores";
            cout<<"\n6 bicicletas";
            cout<<"\n6 maquina de escribir";
            cout<<"\n5 patinetas";
            cout<<"\n5 calculadoras";
            cout<<"\6 casets";
            cout<<"\n6 lentes";
            cout<<"\n6 radios";
            cout<<"\n7 reloj";
            cout<<"\n6 videojuegos";
            cout<<"\n6 motos";
            cout<<"\n7 maletas";
            
            cout<<"\n\nJugadores";
            cout<<"\n\nJugador 1 Sebastian Bermudez ";
            
            cout<<"\n\njugador 2 Jair Navarro ";
            
            cout<<"\n\njugador 3 Carlos Cantillano";
            
            system("pause");
            system("cls");
            cout<<"\n\nReparticion de cartas";
            
            cout<<"\nJugador 1";
            cout<<" \n  abanico/moto, videojuego/radio, moto/maleta, lentes/radio, reloj/maletas, caset/calculadora,bicicletas/computadora";
            
            cout<<"\nJugador 2";
            cout<<"\n moto/soda, caset/lente, calculadora/telefono,  maquina de escribir/lamparas, zapatilla/silla, televisor/Patineta, computador/reloj";
            
            cout<<"\nJugador 3";
            cout<<"\n patineta/moto, calculadora/maleta, reloj/videojuego, bicicleta/radio, cohetes/robots, helados/nevera, pistola/cafetera";
            
            
            
                break;
 case 3: 
        
        cout<<"\nJuego Terminado si desea seguir jugando ingrese la opcion que requiere de lo contrario cierre el compilador";
        
        break;
            case 2:
            	
            	string carta;
                cout<<"start";
                
                system ("\npause");
                
                 cout<<"\nla carta de juego primera ronda es: moto/nevera";
                 cout<<"\nla carta de juego segunda ronda es: bicicleta/radio";
                 cout<<"\nla carta de juego tercera ronda es: silla/zapatilla";
                
                cout<<"\njugador 1 tire una carta:";
                cin>>carta;
                
				cout<<" \nsi no tiene carta para tirar agarre una del mazo se encuentra en la opcion uno";
				cout<<"\nLas rondas seguiran pasando solo es elegir la opcion 2";
		
              cout<<"\n jugador 2 tire una carta";
              cin>>carta;
                cout<<"\n\b"; getline(cin,carta);
                
                
                cout<<"\n Jugador 3 tire una carta";
                cin>>carta;
            
            break;
            
             
            
       
            
            
            
        
}

    } while(op >= 1 && op <=4);
}
