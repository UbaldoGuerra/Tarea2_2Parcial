#include <iostream>
using namespace std;

///calcule y sume el nuevo salario de acuerdo a la antig�edad de laborar del empleado, 
//debe pedir al usuario ingresar el salario actual y el n�mero de a�os laborando en la empresa. 
//Se debe mostrar el nuevo salario bajo los siguientes criterios:

	//De 0 a 1 a�o: no hay aumento, debe mostrar el mismo salario ingresado.
	//De 2 a�os a 3 a�os: aumentar el 10% de su salario.
	//De 4 a�os a 5 a�os: aumentar el 15% de su salario.
	//De 5 a�os en adelante: aumentar el 20% de su salario.
	//Por ejemplo yo ingreso el salario actual de L20,000.00 y tengo 2 a�os de laborar, entonces mi aumento ser� del 10%, 
	//entonces me debe mostrar que mi nuevo salario ser� de L22,000.00.


int main(int argc, char** argv) {
	int salarioa, aumento, antiguedad, salarion; 
	cout<<"\n";
	cout<<"Ingrese su salario: ";
	cin>>salarioa; 
	cout<<"\n";
	cout<<"Cuantos a�os lleva laborando?: ";
	cin>>antiguedad; 
	
	if (antiguedad >= 0 && antiguedad <=1) {
		aumento=0;
		salarion=salarioa+aumento;
		cout<<"Su aumento es de: "<<aumento<<endl;
		cout<<"Su salario se mantiene.\n";
	} else if (antiguedad >= 2 && antiguedad <=3) {
		aumento=salarioa*0.10;
		salarion=salarioa+aumento;
		cout<<"Su nuevo salario es de: "<<salarion<<endl;
		cout<<"Aumento el 10%: "<<aumento<<endl;
		} else if (antiguedad >= 4 && antiguedad <=5) {
		aumento=salarioa*0.15;
		salarion=salarioa+aumento;
		cout<<"Su nuevo salario es de: "<<salarion<<endl;
		cout<<"Aumento el 15%: "<<aumento<<endl;
		} else {
		aumento=salarioa*0.20;
		salarion=salarioa+aumento;
		cout<<"Su nuevo salario es de: "<<salarion<<endl;
		cout<<"Aumento el 20%: "<<aumento<<endl;
		}
		
	return 0;
}
