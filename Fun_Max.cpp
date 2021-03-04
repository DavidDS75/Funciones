#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void Max(int a, int b);
int main()
{
	int n1, n2;
	cout<<"Introduzca el valor del primer numero: "<<endl;
	cin>>n1;
	cout<<"Introduzca el valor del segundo numero: "<<endl;
	cin>>n2;
	Max(n1,n2);
	return 0;
}
void Max(int a, int b){
 if (a>b){
 	cout<<a<< " es mayor \n";
 }
 else if (a<b){
 	cout<<b<< " es mayor\n";
 }
 else
 cout<<"Error\n";
}
