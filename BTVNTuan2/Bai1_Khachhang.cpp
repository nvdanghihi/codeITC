#include<iostream>
#include<string.h>
using namespace std;
struct NS //Ngay sinh
{
	int ngay; int thang; int nam;
}Nskh; //Ngay sinh khach hang.
void nhapns() //Nhap ngay thang nam sinh.
	{
			cout<<"\nMoi ban nhap ngay sinh:"; cin>>Nskh.ngay;
			cout<<"\nMoi ban nhap thang sinh:"; cin>>Nskh.thang;
			cout<<"\nMoi ban nhap nam sinh:"; cin>>Nskh.nam;
	}
void xuatns()
{
	cout<<"\nNgay sinh:"<<Nskh.ngay
		<<"\nThang sinh:"<<Nskh.thang
		<<"\nNam sinh:"<<Nskh.nam<<endl;
}
class KhachHang
{
	private:
		char ht[30];
		char cmt[10];
		char hk[50];
	public:
	void nhap() //Nhap thong tin.
	{
		fflush(stdin);
		cout<<"\nNhap ho ten khach hang: ";
		cin.getline(ht,30);
		fflush (stdin);
		cout<<"\nNhap so chung minh thu:";
		cin>>cmt;
		cout<<"\nNhap ho khau:"; cin>>hk;
		nhapns();
	}
	void xuatTT() //Xuat thong tin
	{
		cout<<"\nHo ten:"<<ht
			<<"\nCMT:"<<cmt
			<<"\nHo khau:"<<hk;
		xuatns();
	
	}
	int getT()	//getter.
	{
		return Nskh.thang;
	}
};
int main()
{
	int n,i;
	cout<<"\nMoi ban nhap vao so khach hang:"; cin>>n;
	KhachHang a[n];
	cout<<"\n\t\t\t\t---NHAP THONG TIN KHACH HANG---";
	for ( i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin khach hang thu "<<i+1;
		a[i].nhap();
		fflush (stdin);
	}
	cout<<"\n\t\t\t---DANH SACH KHACH HANG SINH THANG 12.---";
	{
		int x;
		cout<<"\nMoi ban nhap thang sinh khach hang can in ra:";cin>>x;
	for (i=0;i<n;i++)
			{
			if(a[i].getT()==x)
				{
				cout<<"\nKhach hang thu "<<i+1<<endl;
				a[i].xuatTT();
				}
			else
				{
			cout<<"\nKhong co khach hang nao sinh nhat thang 12!!!";
				}
			}
	}
	int j,tg;
	cout<<"\n\t\t\t---SAP XEP THEO THU TU HO TEN---";
	for (i=0;i<n;i++)
	for (j=i+1;j<n;j++)
	{
		
	}
	return 0;
}
		