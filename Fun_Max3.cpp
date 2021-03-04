#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int Max(int a, int b);
int main(){
	int n1,n2,n3;
	cout<<"Introduzca el valor del primer numero: "<<endl;
	cin>>n1;
	cout<<"Introduzca el valor del segundo numero: "<<endl;
	cin>>n2;
	cout<<"Introduzca el valor del tercer numero: "<<endl;
	cin>>n3;
	int max1=Max(n1,n2);
	int max2=Max(max1,n3);
	cout<<"El numero mayor es:"<< max2<<endl;
	return 0;
}
int Max(int a, int b){
	int c;
	if (a>b){c=a;}
	else{c=b;}
	return c;
}
