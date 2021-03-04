#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void suma(int a, int b);

int main(){
	int n1,n2;
	cout<<"Introduzca el valor del primer numero: "<<endl;
	cin>>n1;
	cout<<"Introduzca el valor del segundo numero:"<<endl;
	cin>>n2;
	suma(n1,n2);
	return 0;
}
void suma(int a,int b){
	int c=a+b;
	cout<<"El resultado de "<< a <<"+"<< b<< " es:"<<c <<endl;
}
