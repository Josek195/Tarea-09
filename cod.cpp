#include "personas.cpp"
#include<iostream>
using namespace std;
class Empleado : Persona{
	// atributos
	private : string Empleado;
	
	public : 
	Empleado(){
	Empleado (string nom,string ape,string dir,int t,string f,string cod) : Persona(nom,ape,dir,t,f){
	codigo_empleado = cod;}

	void agregar(){
		cout<<"________________"<<endl;
		cout<<"codigo de empleado:"<<cod_empleado<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha Nacimiento:"<<fn<<endl;}
}
};

