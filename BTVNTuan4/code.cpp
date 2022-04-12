#include <iostream.h>
using namespace std;
class Person //Lop cha.
{
	private:
	//Thuoc tinh.
		char ten[30];
		int tuoi;
		char diachi[15];
	public:
	//Phuong thuc.
	/*Person(char *ten=" ",int tuoi =0 ,char *diachi =" ")
	//Ham khoi tao co tham so.
	{
		strcpy(this->ten,ten);
				this->tuoi=tuoi;
		strcpy(this->diachi,diachi);
				
	}*/
		void nhap()
		{
			cout<<"\nNhap ten:"; cin.getline(ten,30);
			cout<<"\nNhap tuoi:"; cin>>tuoi;
			fflush(stdin);
			cout<<"\nNhap dia chi:"; cin.getline(diachi,15);
		}
		void xuat()
		{
			cout<<"\nTen:"<<ten
				<<"\nTuoi:"<<tuoi
				<<"\nDia chi:"<<diachi;
		}
		//So sanh tuoi.
		int getT()
		{
			return tuoi;
		}
		bool operator >( Person &a)
		{
			return (this ->tuoi >a.getT());
		}	
};
class GiaoVien : public Person	//Lop con ke thua lop cha.
{
	private:
		char ma[8];
		char khoa[15];
		public:
		/*GiaoVien(){}//Hkt 0 tham so.
		GiaoVien(char *ma=" ",char *khoa=" ")//Hkt co ts.
		{
			strcpy(this->ma,ma);
			strcpy(this->khoa,khoa);
		}*/
		void nhap()
		{
			Person::nhap();		/*Ghi de ,goi lai phuong thuc nhap 
				cua lop Person xuong lop giao vien.*/
				fflush(stdin);
				cout<<"\nNhap ma:";cin.getline(ma,8);
				cout<<"\nNhapp khoa:"; cin.getline(khoa,30);
		}
		void xuat()
		{
			Person::xuat();
			cout<<"\nMa:"<<ma
				<<"\nKhoa:"<<khoa<<endl;
		}
};
int main(int argc, char *argv[])
{
				//Mang 1 nguoi.
	/*Person a;
	a.nhap();
	a.xuat();
	GiaoVien b;
	b.nhap();
	b.xuat();*/
				//Mang nhieu nguoi.
	int n;
	cout<<"\nNhap n= ";//So luong nguoi.
	cin>>n;
	fflush (stdin);
	Person a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNguoi thu "<<i+1<<":";
		a[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\nXuat tt Nguoi thu "<<i+1<<":";
		a[i].xuat();
	}
	cout<<"\n--------------------------";
	int m;
	cout<<"\nNhap m= ";//So luong giao vien.
	cin>>m;
	fflush(stdin);
	GiaoVien b[m];
	for (int i=0;i<m;i++)
	{
		cout<<"\nGiao vien thu "<<i+1<<":";
		b[i].nhap();
	}
	for (int i=0;i<m;i++)
	{
		cout<<"\nXuat thong tin giao vien thu "<<i+1<<":";
		b[i].xuat();
	}
	cout<<"\nSap xep theo tang dan cua tuoi.";
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
		a[i].xuat();
	}
	return 0;
}