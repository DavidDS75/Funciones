#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int factorial(int a);
int main(){
	int n1;
	cout<<"Introduzca el valor del numero: "<<endl;
	cin>>n1;
	int fact=factorial(n1);
	cout<<"El "<<n1<<"! es:"<<fact<<endl;
	return 0;
}
	int factorial(int a){
	 int i;
	 int res=1;
	 for(i=1;i<=a;i++){
	 	res*=i;
	 }
	 	return res;
	}
