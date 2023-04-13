#include<iostream>
using namespace std;
int main(){
	float a , b , c, IGV , pa , pb , pc, PT , PA , PB , PC; // a, b y c son los precios de los prodcutos
	                                                        // pa, pb y pc seran el peso en "Kg" que seran introducidos por el teclado
															// PA, PB Y PC sera los precios finales en relación al peso introducido del producto
															// PT es el precio total teniendo en cuenta en IGV  
	cout<<"Ingrese peso de producto a: ";                   
	cin>>pa;
	cout<<"Ingrese peso de producto b: ";
	cin>>pb;
	cout<<"Ingrese peso de producto c: ";
	cin>>pc;
	a  = 4;
	PA = a * pa;
	b  = 6;
	PB = pb * b;
	c  = 2;
	PC = c * pc;
	PT = PA + PB + PC;
	IGV = 0.18;
	IGV = PT*IGV;
	PT = PT+IGV;
	cout<<"{----------------------------------------------------------}"<<endl;
	cout<<"{--------------------Boleta de venta-----------------------}"<<endl;
	cout<<"{------------Franquicia de Minimarkets MASS----------------}"<<endl;
	cout<<" Producto       Precio x Unit         Cantidad      Precio "<<endl;
	cout<<" a              "<<a<<"                     "<<pa<<"KG           "<<PA<<endl;  
	cout<<" b              "<<b<<"                     "<<pb<<"KG           "<<PB<<endl;
	cout<<" c              "<<c<<"                     "<<pc<<"KG           "<<PC<<endl;
	cout<<" IGV                                                "<<IGV<<endl;
    cout<<" TOTAL:                                             "<<PT<<endl;   
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"***************Gracias por su Preferencia******************";
return 0;
}
