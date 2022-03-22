#include<iostream>
using namespace std;
int main()
{
	int n;
	Ttuc: cout<<"\nMoi ban nhap vao thu: ";
	cin>>n;
	if(n==1)
	{
		cout<<"\tChu nhat!!";
	}
	else if(n==2)
	{
		cout<<"\tThu hai!!";
	}
	else if(n==3)
	{
		cout<<"\tThu ba!!";
	}
	else if(n==4)
	{
		cout<<"\tThu tu!!";
	}
	else if(n==5)
	{
		cout<<"\tThu nam!!";
	}
	else if(n==6)
	{
		cout<<"\tThu sau!!";
	}
	else if(n==7)
	{
		cout<<"\tThu bay!!";
	}
	else
	{
		cout<<"\nMoi ban nhap lai!!\n";
	}
	char lc;
	cout<<"\nBan co muon tiep tuc hay khong (Yes/No).Chon y/n!!";
	cin>>lc;
	if(lc=='y' || lc=='Y') goto Ttuc;
	else 
	{
		cout<<"\nThoat!!!";
	}
	return 0;
}