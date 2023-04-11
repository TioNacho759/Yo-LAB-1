#include<iostream>
using namespace std;
int main(){
	float a , b , c, IGV , pa , pb , pc, PT , PA , PB , PC;
	cout<<"Ingrese peso de producto a: ";
	cin>>pa;
	cout<<"Ingrese peso de producto b: ";
	cin>>pb;
	cout<<"Ingrese peso de producto c: ";
	cin>>pc;

	a  = 4;
	PA = a * pa;
	b  = 6;
	PB = b * pb;
	c  = 2;
	PC = c * pc;
	PT = PA + PB + PC;
	IGV = 18/100;
	IGV = PT*IGV;
	PT = PT - IGV; 
	cout<<"Boleta de venta"<<endl;
	cout<<"Franquicia de Minimarkets MASS"<<endl;
	cout<<"Producto      Cantidad      Precio"<<endl;
	cout<<"a             "<<pa<<"KG           "<<PA<<endl;  
	cout<<"b             "<<pb<<"KG           "<<PC<<endl;
	cout<<"c             "<<pc<<"KG           "<<PC<<endl;
    cout<<"               IGV           " <<PT<<endl;     
return 0;
}
	