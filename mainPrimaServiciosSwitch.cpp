#include <iostream>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int vasegurado,edad,vinicial,vprima,ptasa,pgenero,pedad,tasa;
	string genero;
	cout <<"Digite el Valor Asegurado : ";
	cin >>vasegurado;
	cout <<"Digite el Color del Vehiculo 1.rojo-2.azul-3.negro-4.gris-5.blanco :  ";
	cin >>tasa;
	cout <<"Digite su genero : Hombre - Mujer ";
	cin >>genero;
	cout <<"Digite su edad : ";
	cin >>edad;
	vinicial=(vasegurado*10)/100;
	cout <<"Su valor inicial es " <<vinicial <<"\n";
	switch (tasa)
	{case 1: ptasa=(vinicial*3)/100;	
	break;
	case 2: ptasa=(vinicial*2)/100;	
	break;
	case 3: ptasa=(vinicial*2)/100;	
	break;
	case 4: ptasa=(vinicial*1.5)/100;	
	break;
	case 5: ptasa=(vinicial*2)/100;	
	break;
	default: ptasa=(vinicial*5)/100;	
	break;
	}
	if(genero=="hombre"){
		pgenero=(vinicial*5)/100;	
	}else if(genero=="mujer"){
		pgenero=(vinicial*3)/100;
   }else{		
	cout <<"El genero no existe \n";
		return 0;
        }
	cout <<"Segun su genero es " <<pgenero <<"\n";
		
	if((edad>=18)&&(edad<=23)){
		pedad=(vinicial*8)/100;
	}else if((edad>=24)&&(edad<35)){
		pedad=(vinicial*5)/100;
	}else if((edad>=35)&&(edad<60)){
		pedad=(vinicial*4)/100;
	}else if(edad>=60){
		pedad=(vinicial*6)/100;
	}
	else{
	cout <<"El limite de edad no es asegurable \n";
	return 0;
	    }	
	cout <<"Segun su edad es " <<pedad <<"\n";
	vprima=vinicial+ptasa+pgenero+pedad;
	cout <<"el valor de la prima de su vehiculo es " <<vprima;
	return 0;
}
