#include<iostream>
#include<string>
using namespace std;
class Khachhang
{
	private:
		string ht,cmt,hk;
	public:
	struct Ns
			{
				int ngay,thang,nam;
			}ns;
	int getNg()
	{
		return ns.ngay;
	}
	int getTh()
	{
		return ns.thang;
	}
	int getNam()
	{
		return ns.nam;
	}
		friend istream& operator >> (istream& is, Khachhang &a)
		{
			cout<<"\nNhap ho ten:";
			is>>a.ht;
			fflush(stdin);
			cout<<"\nNhap chung minh thu:";
			is>>a.cmt;
			cout<<"\nNhap ho khau:";
			is>>a.hk;
			cout<<"\nNhap ngay, thang, nam sinh:";
			//is>>a.getNg();//>>"\t">>a.thang>>"\t">>a.nam;
		}
		friend ostream& operator << (ostream& os,Khachhang &a)
		{
			os<<"Ho ten:"<<a.ht<endl;
			os<<"CMT:"<<a.cmt<<endl;
			os<<"Ho Khau:"<<a.hk<<endl;
		}
};
int main()
{
	int n;
	cout<<"\nMoi nhap so khach hang:"; cin>>n;
	Khachhang a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}