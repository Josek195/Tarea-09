#include "personas.cpp"
#include<iostream>
using namespace std;
class Empleado : Puesto{
	
	private : string Empleado;
	
	public : 
	Empleado(){
	Empleado(string nom,string ape,string dir,int t,string f,string puesto) : Persona(nom,ape,dir,t,f){
	puesto = puesto;}

	void agregar(){
		cout<<"________________"<<endl;
		cout<<"Puesto:"<<puesto<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha Nacimiento:"<<fn<<endl;}
}
};
