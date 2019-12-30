#include <iostream>
#include <conio.h>
using namespace std;

int main(){

	int nilai;
	cout<<"Masukan Nilai : ";
	cin>>nilai;

	if(nilai>=80 && nilai<=100){
		cout<<"A";
	}
	else if(nilai>=68 && nilai<=79){
		cout<<"B";
	}
	else if(nilai>=58 && nilai<=67){
		cout<<"C";
	}
	else if(nilai>=45 && nilai<=57){
		cout<<"D";
	}
	else{
		cout<<"E";
	}
	getch();

}
