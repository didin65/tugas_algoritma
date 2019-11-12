#include <iostream>
#include <conio.h>
using namespace std;
int main(){

	int menu;

	cout<<"Pilih Menu ATM"<<endl;
	cout<<"===================================="<<endl;
	cout<<"=	1. Tarik Dana                 ="<<endl;
	cout<<"=	2. Transfer Dana              ="<<endl;
	cout<<"=       3. Lihat Saldo                ="<<endl;
	cout<<"===================================="<<endl;

	cout<<"Masukan Pilihan Anda : ";
	cin >> menu;

	if(menu==1){
		cout<<"Anda memilih tarik dana";
	}
	else if(menu==2){
		cout<<"Anda memilih mentransfer dana";	
	}
	else if(menu==3){
		cout<<"lihat saldo";
	}
	else{
		cout<<"Maaf Pilahan anda tidak ada";
	}
	getch();

}
