#include <iostream>
#include <string.h>
using namespace std;
const char *nombre_archivo ("archivo.dat") ;
struct Estudiante{
	int codigo;
	char nombres[50];
	char apellidos[50];
	int telefono;	

}; 
void crear();	
void actualizar();
void borrar();
void leer();
main(){
	FILE* archivo = fopen(nombre_archivo,"r+b");
	int id;
	cout<<"Ingrese el Id que sea Modificar:";
	cin>>id;
	fseek(archivo,id * sizeof(Estudiante),SEEK_SET);
	Estudiante estudiante;
	string nombre,apellido;
		cout<<"Ingrese el Codigo:";
		cin>>estudiante.codigo;
		cin.ignore();
		cout<<"Ingrese Nombres:";
		getline(cin,nombre);
		strcpy(estudiante.nombres,nombre.c_str());
cout<<"Ingrese Apellidos:";
		getline(cin,apellido);
		strcpy(estudiante.apellidos,apellido.c_str());
		cout<<"Ingrese Telefono:";
		cin>>estudiante.telefono;
		cin.ignore();
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
	fclose(archivo);
}

