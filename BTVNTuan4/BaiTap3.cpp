#include<iostream>
using namespace std;
class AnPham
{
	private:
		char ten[30];
		float giathanh;
	public:	
		void nhap()
		{
			fflush (stdin);
			cout<<"\nNHap ten an pham:"; cin.getline(ten,30);
			fflush(stdin);
			cout<<"\nNhap gia thanh an pham :"; cin>>giathanh;
		}
		void xuat()
		{
			cout<<"\nTen:"<<ten
				<<"\nGia:"<<giathanh<<endl;
		}
};
class Sach : public AnPham
{
	private:
		int sotrang;
	public:
		void nhap()
		{
			AnPham::nhap();
			cout<<"\nNhap so trang:"; cin>>sotrang;
		}
		void xuat()
		{
			AnPham::xuat();
			cout<<"So trang:"<<sotrang<<endl;
		}
		int getST()
		{
			return sotrang;
		}
};
class DiaCD : public AnPham
{
	private:
		int sophut;
	public:
		void nhap()
		{
			AnPham::nhap();
			cout<<"\nNhap so phut:";
			cin>>sophut;
		}
		void xuat()
		{
			AnPham::xuat();
			cout<<"\nSo phut:"<<sophut;
		}
		int getT()
		{
			return ten;
		}
};
int main()
{
	int n;
	cout<<"\nNhap so an pham:"; cin>>n;
	AnPham a[n];
	for (int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin an pham thu "<<i+1<<" :";
		a[i].nhap();
	}
	for (int i=0;i<n;i++)
	{
		cout<<"\nXuatthong tin an pham thu "<<i+1<<" :";
		a[i].xuat();
	}
	int m;
	cout<<"\nNhap so sach:";cin>>m;
	Sach b[m];
	for(int i=0;i<m;i++)
	{
		cout<<"\nNhap tt sach thu "<<i+1<< ":";
		b[i].nhap();
	}
	for(int i=0;i<m;i++)
	{
		cout<<"\nXuat tt sach thu "<<i+1<< ":";
		b[i].xuat();
	}
	cout<<"\n\n\t\t\tDs quyen sach co so trang >500 trang:";
		for(int j=0;j<m;j++)
		{
			if(b[j].getST()>500);
			{
				b[j].xuat();
			}
		}
		int k;
		cout<<"\nNhap so dia CD:";
		cin>>k;
		DiaCD c[k];
		for(int i=0;i<k;i++)
		{
			cout<<"Nhap tt Dia CD"<< i+1<<" :";
			c[i].nhap();
		}
		char x;
		cout<<"\nNhap ten dia CD can tim:";
		for(int i=0;i<k;i++)
		{
			if(x==c[i].ten)
		}
	return 0;
}