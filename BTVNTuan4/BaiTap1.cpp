#include<iostream>
using namespace std;
class Nguoi
{
	private:
		char ht[30];
		int ns;
	public:
		void nhap()
		{
			fflush (stdin);
			cout<<"\nNhap ho ten:"; cin.getline(ht,30);
			fflush (stdin);
			cout<<"\nNhap nam sinh:"; cin>>ns;
		}
		void xuat()
		{
			cout<<"\nHo Ten:"<<ht
				<<"\nNam sinh:"<<ns<<endl;
		}
};
class ThiSinh : public Nguoi
{
	private:
		int sbd,dt,dl,dh;
	public:
		void nhap()
		{
			Nguoi :: nhap();
			cout<<"\nNhap so bao danh:"; cin>>sbd;
			cout<<"\nNhap diem toan:"; cin>>dt;
			cout<<"\nNhap diem ly:"; cin>>dl;
			cout<<"\nNhap diem hoa:"; cin>>dh;
		}
		float dtb;
		float tinh()
		{
		 	dtb=(dt+dl+dh)/3;
		}
		void xuat()
		{
			float dtb;
			Nguoi::xuat();
			cout<<"SBD:"<<sbd
				<<"\nDiem toan:"<<dt
				<<"\nDiem ly:"<<dl
				<<"\nDiem hoa:"<<dh
				<<"\nDiem trung binh:"<<dtb<<endl;
		}
		bool operator > (ThiSinh &a)
		{
			return (this ->dtb < a.tinh());
		}
		int getSBD()
		{
			return sbd;
		}
};
int main()
{
	int n;
	cout<<"\nNhap so nguoi: ";
	cin>>n;
	Nguoi a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap tt nguoi thu "<<i+1<<":";
		a[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\nXuat tt nguoi thu "<<i+1<<":";
		a[i].xuat();
	}
	int m;
	cout<<"\nNhap so thi sinh:";
	cin>>m;
	ThiSinh b[m];
	for(int i=0;i<m;i++)
	{
		cout<<"\nNhap tt thi sinh thu "<<i+1<<":";
		b[i].nhap();
	}
	for(int i=0;i<m;i++)
	{
	cout<<"\nXuat tt thi sinh thu "<<i+1<<":";
		b[i].xuat();
	}
	cout<<"\nDanh sach thi sinh co tong diem 3 mon tang dan:";
	for(int i=0;i<m;i++)
	{
		for (int j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				swap(b[j],b[i]);
			}
			b[i].xuat();
		}
	}
	int x;
	cout<<"\nMoi ban nhap so bao danh cua thi sinh can tim:"; cin>>x;
	for(int i=0;i<m;i++)
	{
		if (x==b[i].getSBD());
		{
			b[i].xuat();
		}
	}
	return 0;
}