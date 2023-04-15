#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double z, p, q, e, calculo;
	int N;
	string a;
cout<<"CALCULO DE LA MUESTRA FINITA E INFINITA"<<endl;
do{
	cout<<"Ingrese la poblacion"<<endl;
	cin>> N;
	cout<<"Ingrese el nivel de confianza"<<endl;
	cin>>z;
	cout<<"Ingrese la probabilidad de exito"<<endl;
	cin>>p;
	cout<<"Ingrese la probabilidad de fracaso"<<endl;
	cin>>q;
	cout<<"Ingrese el nivel de error"<<endl;
	cin>>e;
	calculo=((pow(z,2)*p*q*N)/(pow(e,2)*(N-1)+pow(z,2)*p*q));
	cout<<"RESULTADO"<<endl;
	cout<<calculo<<endl;
	cout<<"Ingrese \"si\" para seguir calculando, o ingrese \"no\" para finalizar"<<endl;
	cin>>a;
		if (a!="no" && a!="si"){
		cout<<"----ERROR----"<<endl;
		cout<<"Ingrese \"si\" para seguir calculando, o ingrese \"no\" para finalizar"<<endl;
		cin>>a;
		}
} while(a=="si");
return 0;
}

