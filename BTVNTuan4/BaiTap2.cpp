#include<iostream>
using namespace std;
class Sanpham
{
	private:
		char masp[10];
		char tensp[30];
		int namsx;
	public:
		void nhap()
		{
			fflush(stdin);
			cout<<"\nNhap ma san pham:"; cin.getline(masp,10);
			cout<<"\nNhap ten san pham:"; cin.getline(tensp,10);
			fflush(stdin);
			cout<<"\nNhap nam san xuat :"; cin>>namsx;
		}
		void xuat()
		{
			cout<<"\nMa sp:"<<masp
				<<"\nTen sp:"<<tensp
				<<"\nNam san xuat:"<<namsx<<endl;
		}	
};
class TiVi : public Sanpham
{
	private:
		float cdai,crong;
	public:
		void nhap()
		{
			Sanpham::nhap();
			cout<<"Nhap chieu dai:"; cin>>cdai;
			cout<<"\nNhap chieu rong:";cin>>crong;
		}
		void xuat()
		{
			Sanpham::xuat();
			do{
			cout<<"Chieu dai:"<<cdai
				<<"\nChieu rong:"<<crong<<endl;
			}while((cdai<0 || crong<0) && cdai<crong);
		}
		float dt;
		float tinh()
		{
			dt=cdai*crong;
		}
		void xuatdt()
		{
			cout<<"\nDien tich la:"<<dt;
		}
};
int main()
{
	int n;
	cout<<"\nNhap so san pham:"; cin>>n;
	Sanpham a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin san pham "<<i+1<<" :";
		a[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\nXuat thong tin san pham "<<i+1<<" :";
		a[i].xuat();
	}
	int m;
	cout<<"\nNhap so tivi:";
	cin>>m;
	TiVi b[m];
	for(int i=0;i<m;i++)
	{
		cout<<"\nNhap; tt tivi "<<i+1<<" :";
		b[i].nhap();
	}
	for(int i=0;i<m;i++)
	{
		cout<<"\nXuat tt tivi "<<i+1<<" :";
		b[i].xuat();
		b[i].xuatdt();
	}
	
	return 0;
}