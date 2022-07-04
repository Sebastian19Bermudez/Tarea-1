	
#include <iostream>
#include <string>

#define user "sebastian"
#define pass "sebastian19"

/*facturación en la cual usted ingrese con usuario y contraseña y una vez iniciado podrá entonces realizar 
las facturas correspondientes a nuevos ingresos y pagos de sus trabajadores*/

using namespace std;


int main() {
	
string usuario, password;


int saldo_inicial = 5000;
int saldo, retiro, opcion, agregar, x;
string si;



cout<<"\t\t\t\t\tinicio de sesion"<<endl;
cout<<"\t\t\t\t..................."<<endl;
cout<<"\n\tUsuario: ";
getline(cin, usuario);
cout<<"\tPassword:";
getline(cin, password);

if (usuario == user && password == pass) {
	cout<<"\n\tBIENVENIDO A INSDUSTRIAS SEBEROS"<<endl;
cout<<"\nIndustrias Seberos tiene un nuevo deposito"<<endl;
cout<<"\nconsultar ingreso: ";
cin>>si;
cout<<"ecopetrol transfirio $5000 dolares";

cout<<"\n\t escoja una opcion";
cout<<"\n1. ingreso de dinero a la empresa";
cout<<"\n2. retiro";
cout<<"\n3. ver saldo";
cout<<"\n4. salir";
cout<<"\n opcion";
cin>>opcion;



if(opcion == 1){
	cout<<"\ningrese la cantidad a depositar:";
	cin>>agregar;
	saldo = saldo_inicial + agregar;
	cout<<"\nfondos disponibles: "<<saldo;
	
}
else if(opcion == 2){

cout<<"\n numero de cuenta del trabajador: ";
cin>>x;
cout<<"\ncantidad a transferir: ";
cin>>retiro;

cout<<"\n Transferencia exitosa procesando";

if(retiro>5000){
	cout<<"\n tranferencia erronea cantidad mayor a 5000, digite de nuevo la cantidad a transferir: ";
	cin>>retiro;
	
	cout<<"\n Transferencia exitosa";

}
saldo=saldo_inicial- retiro;
cout<<"\n fondos disponibles:"<<saldo;



}else if(opcion==3){
	cout<<"\nfondos disponibles: "<<saldo_inicial;
	
} else if (opcion==4){
}
cout<<"\n gracias por preferir INDUSTRIAS SEBEROS, CERRANDO SESION.....";





	
}
else{
	cout<<"\n\t El usuario y password son incorrectos"<<endl;
	
	
	
}

return 0;

}


