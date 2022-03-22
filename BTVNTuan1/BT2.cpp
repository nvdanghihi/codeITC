/*Viet chuong trinh cho phep nhap so KW tieu thu va xuat ra man hinh.
Neu so KW tu 0-100:		Don gia 2000 dong.
Neu so KW tu 101-200:	Don gia 2500 dong.
Neu so KW tu 201-300:	Don gia 3000 dong.
Neu so KW 	>300 :		Don gia 5000 dong.*/
#include<iostream>
using namespace std;
int main()
{
	float soKW,dgia,thanhtien;
	//Nhap.
	Ttuc: cout<<"\nMoi ban nhap so KW tieu thu dien:";
	cin>>soKW;
	//Don gia+thanh tien.
	if (soKW>0 && soKW<=100)
	{
		dgia=2000;
		cout<<"\nDon gia la:"<<dgia;
		thanhtien=dgia*soKW;
	cout<<"\nSo tien dien ban phai tra la:"<< thanhtien <<endl;
	}
	else if (soKW>100 && soKW<=200)
	{
		dgia=2500;
		cout<<"\nDon gia la:"<<dgia;
		thanhtien=(100*2000)+(soKW-100)*dgia;
	cout<<"\nSo tien dien ban phai tra la:"<< thanhtien<<endl;
	}
	else if (soKW>200 && soKW<=300)
	{
		
		dgia=3000;
		cout<<"\nDon gia la:"<<dgia;
		thanhtien=(100*2000)+(100*2500)+(soKW-200)*dgia;
	cout<<"\nSo tien dien ban phai tra la:"<< thanhtien<<endl;
	}
	else if(soKW>300)
	{
		
		dgia=5000;
		cout<<"\nDon gia la:"<<dgia;
		thanhtien=(100*2000)+(100*2500)+(100*3000)+(soKW-300)*dgia;
	cout<<"\nSo tien dien ban phai tra la:"<< thanhtien<<endl;
	}
	char lc;
	cout<<"\nBan co muon tiep tuc? chon Y/N.";
	cin>>lc;
	if (lc=='Y' || lc=='y') goto Ttuc;
	return 0;	
}
