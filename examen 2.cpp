#include<iostream>


using namespace std;
struct Empleado{
	int *codigo;
	string *nombres;
	string *apellidos;
	string *puesto;
	int **sueldo_base;
	int **bonificacion;
};

int main(){
int fila_empleado=0,columna_sueldo=0;
Empleado empleado;
cout<<"Cuantos Empleados Desea Ingresar: ";
cin>>fila_empleado;	
empleado.nombres = new string[fila_empleado];
empleado.apellidos = new string[fila_empleado];
empleado.codigo = new int[fila_empleado];
empleado.puesto = new string[fila_empleado];
empleado.sueldo_base = new int *[fila_empleado];
empleado.bonificacion = new int *[fila_empleado];
for (int i=0;i<fila_empleado;i++){
empleado.sueldo_base[i] = new int[columna_sueldo];
cout<<"--------------Ingrese Datos--------------"<<endl;
string nombres;
for (int i=0;i<fila_empleado;i++){
	cout<<"Nombres: ";
	cin>>empleado.nombres[i];
	getline(cin,empleado.nombres[i]);
	cout<<"Apellidos:";
	getline(cin,empleado.apellidos[i]);
	cout<<"codigo: ";
	cin>>empleado.codigo[i];
	cin.ignore();
	cout<<"Puesto: ";
	getline(cin,empleado.puesto[i]);
	cout<<"sueldo base: ";
	cin>>empleado.sueldo_base[i];
	cin.ignore();
	cout<<"bonificacion: ";
	cin>>empleado.bonificacion[i];
	cin.ignore():
	
}
cout<<"--------------Ingrese sueldo--------------"<<endl;
for (int ii=0;ii<columna_empleado;ii++)
{
	
	
    
	cout<<"Sueldo "<<i + 1<<": ";
	cin>>*(*(empleado.sueldo_base+i)+ii);
	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Datos de empleados--------------"<<endl;
for (int i=0;i<fila_empleados;i++){
	cout<<"Codigo: "<<empleado.codigo[i]<<" Empleado"<<empleado.nombres[i]<<" Apellidos"<<empleado.apellidos[i]"."<<endl;
for (int ii=0;ii<columna_sueldo;ii++){


	}
		cout<<"------------------------------------"<<endl;
}
for (int i=0;i<fila_empleados;i++){
	delete [] empleado.sueldo_base[i];
}

delete [] empleado.sueldo_base;
delete[] empleado.codigo;
delete[] empleado.nombres;

	system("PAUSE");
	return 0;
	
}


