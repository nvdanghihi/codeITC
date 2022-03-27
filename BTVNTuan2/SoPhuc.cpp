#include<iostream>
using namespace std;
class Sophuc
{
	private:
		int pt,pa;
	public:
		void nhap()
		{
			cout<<"\nNhap phan thuc: ";
			cin>>pt;
			cout<<"\nNhap phan ao: ";
			cin>>pa;
		}
		void in()
		{
			cout<<"\n A= "<< pt <<"+"<< pa <<"*j"<<endl;
		}
		//geter: Lay gia tri pt,pa.
		int getPA()
		{
			return pa;
		}
		int getPT()
		{
			return pt;
		}
};
int main()
{
	Sophuc a[2];
	for (int i = 0 ; i < 2; i++)
	{
		a[i].nhap();
	}
	cout<<"\nTong cua hai so thuc vua nhap la: "
		<<a[0].getPT()+a[1].getPT()<<"+"
		<<a[0].getPA()+a[1].getPA()<< "*j"<<endl;
	cout<<"\nHieu cua hai so thuc vua nhap la: "
		<<a[0].getPT()-a[1].getPT()<<"+"
		<<a[0].getPA()-a[1].getPA()<< "*j"<<endl;
	cout<<"\nTich cua hai so thuc vua nhap la: "
		<<a[0].getPT()*a[1].getPT()<<"+"
		<<a[0].getPA()*a[1].getPA()<< "*j"<<endl;
	cout<<"\nThuong cua hai so thuc vua nhap la: "
		<<a[0].getPT()/a[1].getPT()<<"+"
		<<a[0].getPA()/a[1].getPA()<< "*j"<<endl;
	return 0;
}