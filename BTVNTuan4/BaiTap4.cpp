#include<iostream>
using namespace std;
class MayIn
{
	private:
		char sohieu[10];
		int soluong;
	public:
		void nhapkho()
		{
			cout<<"\nNhap so hieu:";
			cin.getline(sohieu,10);
			fflush(stdin);
			cout<<"\nNhap so luong:";
			cin>>soluong;
			fflush(stdin);
		}
		void xuatkho()
		{
			fflush(stdin);
			cout<<"\nSo hieu:"<<sohieu
				<<"\nSo luong:"<<soluong<<endl;
		}
};
class MayInLaser : public MayIn
{
	private:
		char dpi[10];
	public:
	void nhap()
	{
		MayIn::nhapkho();
		fflush(stdin);
		cout<<"\nNhap dpi:"; cin.getline(dpi,10);
	}
	void xuat()
	{
		MayIn::xuatkho();
		cout<<"\nDPI:"<<dpi;
	}
};
class MayInMau : public MayIn
{
	private:
		char bangmau[10];
	public:
		void nhap()
		{
			MayIn::nhapkho();
			fflush(stdin);
			cout<<"\nNhap bang mau:";
			cin.getline(bangmau,10);
		}
		void xuat()
		{
			MayIn::xuatkho();
			cout<<"\nBang mau:"<<bangmau<<endl;
		}
};
class InLaserMau : public MayInLaser,private MayInMau
{
	private:
	public:
	void nhap()
	{
		//MayInMau::bangmau;
		MayInLaser::nhap();
		cout<<"\nNhap bang mau:";
		//cin.getline(bangmau,10);
	}
	void xuat()
	{
		//MayInMau::bangmau;
		MayInLaser::xuat();
		//cout<<"\nBang mau:"<<bangmau<<endl;
	}	
};
int main()
{
	int q;
	cout<<"\nNhap so luong mat hang:";
	cin>>q;
	fflush(stdin);
	MayIn a[q];
	cout<<"\nNhap thong tin may in:";
	for(int i=0;i<q;i++)
	{
		cout<<"\nMat hang thu:"<< i+1<<" :"<<endl;
		a[i].nhapkho();
	}
	cout<<"\nXuat thong tin may in:";
	for(int i=0;i<q;i++)
	{
		cout<<"\nMat hang thu:"<< i+1<<" :"<<endl;
		a[i].xuatkho();
	}
	int n;
	MayInLaser b[n];
	cout<<"\nNhap tt may in laser.";
	for(int i=0;i<n;i++)
	{
		cout<<"\nMay in laser thu: "<<i+1<<" :"<<endl;
		b[i].nhap();
	}
	cout<<"\nXuat tt may in laser.";
	for(int i=0;i<n;i++)
	{
		cout<<"\nMay in laser thu: "<<i+1<<" :"<<endl;
		b[i].xuat();
	}
	int m;
	MayInMau c[m];
	cout<<"\nNhap tt may in mau:";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay in mau thu "<<i+1<<" :";
		c[i].nhap();
	}
	cout<<"\nNXuat tt may in mau:";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay in mau thu "<<i+1<<" :";
		c[i].xuat();
	}
	int k;
	InLaserMau d[k];
	cout<<"\nNhap thong tin may in laser mau:";
	for(int i=0;i<k;i++)
	{
		cout<<"\nMay in laser mau thu "<<i+1<<" :";
		d[i].nhap();
	}
	cout<<"\nXuat thong tin may in laser mau:";
	for(int i=0;i<k;i++)
	{
		cout<<"\nMay in laser mau thu "<<i+1<<" :";
		d[i].xuat();
	}
	cout<<endl;
	return 0;
}