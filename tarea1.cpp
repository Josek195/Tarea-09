#include<iostream>
#include<cstring>
#include <cstdlib>

using namespace std;

main(){
	int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Opcion 4" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
        
	case 1:
	int no1,no2, suma = 0, resta = 0, multiplicacion = 0, division= 0; 
	
	cout<<"\nDigite un numero: ";cin>>no1;
	cout<<"\nDigite otro numero: ";cin>>no2;
	
	suma = no1 + no2;
	resta = no1 - no2;
	division = no1 / no2;
	multiplicacion = no1 * no2;
	
		
	cout<<no1<<" + "<<no2<<" = "<<suma<<endl;
	cout<<no1<<" - "<<no2<<" = "<<resta<<endl;
	cout<<no1<<" x "<<no2<<" = "<<multiplicacion<<endl;
	cout<<no1<<" / "<<no2<<" = "<<division<<endl;
	
	system("pause>nul");
	
	break;
	
	case 2;
	float numero, km = 0, millas=0 ,metros = 0, pulgadas = 0,libras=0, kilos= 0 ; 
	
	cout<<"\nDigite un numero: ";cin>>numero;
	
	km = numero * 0.621371;
	millas = numero * 1.60934;
	metros = numero * 39.3701;
	pulgadas= numero * 0.0254;
	libras= numero * 453.592;
	kilos= numero * 0.00220462;
			
	cout<<numero<<"  kilometros = "<<km<<" millas "<<endl;
	cout<<numero<<"  millas = "<<millas<<" kilometros "<<endl;
	cout<<numero<<"  metros = "<<metros<<" pulgadas "<<endl;
	cout<<numero<<"  pulgadas = "<<pulgadas<<" metros "<<endl;
	cout<<numero<<"  libras = "<<kilos<<" kilos"<<endl;
	cout<<numero<<"  kilos = "<<numero<<"libras"<<endl;
	
	system("pause>nul");
	break;
	
	case3:
	char cadena[100],copia[100];
	cout<<"ingrese palabra :"<<endl;
	cin>>cadena;
	for(int i=(strlen(cadena)-1);i>=0;i--){
  	copia[strlen(cadena)-1-i]=cadena[i];
 	}
 	copia[strlen(cadena)]='\0';
 	if(strcmp(cadena,copia)==0){
  	cout<<"Es palindroma"<<endl;
 	}else{
  	cout<<"No es palindroma"<<endl;
	 }

	system("pause>nul");
	break;
	
	case 4:
	int num=0;
	cout<<"Ingrese numero:";
	cin>>num;
	if((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}
	system("pause>nul");
	break;
	
	case 5;
	int tabla=1,resultado=0;
cout<<"Ingrese la Tabla:";
cin>>tabla;
	for (int i=1;i<=10;i++){
		resultado = tabla * i ;
		cout<<tabla<<" X "<<i<<" = "<<resultado<<endl;
	}
		system("pause>nul");
		break;
		
		case 6:
	for (int i=1;i<=10;i++){
	
		cout<<"i->"<<i<<endl;
		for (int ii=1;ii<=10;ii++){
			cout<<i<< "X"<<ii<<endl;
		}
		cout<<"____________________________"<<endl;
		
		system("pause>nul");
		break;
		
		case 7:
	int decimal;
    short binario[8];

    cout << "Teclea el valor en decimal a convertir:" << endl;
    cin >> decimal;

    for (int h = 0; h < 8; h++)
    {
        binario[h] = decimal % 2;
        decimal /= 2;
    }

    cout << "El numero en binario es:" << endl;

    for (int h = 7; h >= 0; h--)
    {
        cout << binario[h];
    }

    cout << endl;
}
	system("pause>nul");
	break;
	
	case 0;
	repetir = false;
	break;
	
}
}while (repetir);
return 0;
}
