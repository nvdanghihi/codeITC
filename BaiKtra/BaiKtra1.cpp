#include<iostream>
using namespace std;
class PTGT
{
	private:
		char mapt[15];
		char hangsx[30];
		int ngayxx;//Ngay xuat xuong.
		float giact;//Gia chua thue.
	public:
		void nhap()
		{
			fflush(stdin);
			cout<<"\nNhap ma phuong tien:";cin.getline(mapt,15);
			cout<<"\nHang san xuat:"; cin.getline(hangsx,30);
			fflush(stdin);
			cout<<"\nNhap ngay san xuat:";cin>>ngayxx;
			cout<<"\nNhap gia chua thue:";cin>>giact;
		}
		void xuat()
		{
			cout<<"\nMa:"<<mapt
				<<"\nHang san xuat:"<<hangsx
				<<"\nNgay xuat xuong:"<<ngayxx
				<<"Gia chua thue:"<<giact<<endl;
		}
		int getGT(){
			return giact;
		}
};
class MayBay : public PTGT
{
	private:
		char dbay[30];//Duong bay.
		int socho;//So cho ngoi.
		char noidk[30];//Noi dang ki kinh doanh.
	public:
	MayBay(char *dbay="",int socho = 0,char *noidk="")
	{
		strcpy(this->dbay,dbay);
				this->socho=socho;
		strcpy(this->noidk,noidk);
	}
		void nhap()
		{
			PTGT::nhap();
			fflush(stdin);
			cout<<"\nNhap duong bay:";cin.getline(dbay,30);
			fflush(stdin);
			cout<<"\nNhap so cho ngoi:"; cin>>socho;
			fflush(stdin);
			cout<<"\nNhap noi dang ki kinh doanh:";cin.getline(noidk,30);
		}
		void xuat()
		{
			PTGT ::xuat();
			cout<<"\nDuong bay:"<<dbay
				<<"\nSo cho ngoi:"<<socho
				<<"\nNoi dang ki:"<<noidk<<endl;
		}
		friend istream& operator >>( istream& is,MayBay &a )
		{
			cout<<"\nNhap duong bay:";
			is>>a.dbay;
			fflush(stdin);
			cout<<"\nNhap so cho ngoi:";
			is>>a.socho;
			fflush(stdin);
			cout<<"\nNhap noi dang ki:";
			is>>a.noidk;
			return is;
		}
		float giathanh;
		float tinh()//Tinh gia thanh sau thue.
		{
			giathanh=getGT()+getGT()*(8/100);
		}
		void xuatTT()
		{
			PTGT ::xuat();
			cout<<"\nDuong bay:"<<dbay
				<<"\nSo cho ngoi:"<<socho
				<<"\nNoi dang ki:"<<noidk
				<<"\nGia thanh sau thue:"<<giathanh<<endl;
		}
		int x;
		bool operator < (MayBay &a)
		{
			return (this ->x > a.socho);
		}
		friend ostream& operator << (ostream &os, MayBay &a)
		{
			os<<"\nDuong bay:"<<a.dbay
				<<"\nSo cho ngoi:"<<a.socho
				<<"\nNoi dang ki:"<<a.noidk<<endl;
				return os;
		}
		int getSC()
		{
			return socho;
		}
		~MayBay(){}
};
int main()
{
	int n;
	cout<<"\nNhap so phuong tien giao thong:";cin>>n;
	PTGT a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin phuong tien "<<i+1<<" :";
		a[i].nhap();
	}
		for(int i=0;i<n;i++)
	{
		cout<<"\nXuat thong tin phuong tien "<<i+1<<" :";
		a[i].xuat();
	}
	int m;
	cout<<"\nNhap so may bay:";
	cin>>m;
	MayBay b[m];
		for(int i=0;i<m;i++)
	{
		cout<<"\nNhap thong tin may bay "<<i+1<<" :";
		b[i].nhap();
	}
		for(int i=0;i<m;i++)
	{
		cout<<"\nXuat thong tin may bay "<<i+1<<" :";
		b[i].xuatTT();
	}
	cout<<"\nNhap lai thong tin bang toan tu nhap >>.";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay bay "<<i+1<<" :";
		cin>>b[i];
	}
	cout<<"\nXuat thong tin bang toan tu xuat <<.";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay bay "<<i+1<<" :";
		cout<<b[i];
	}
	int x;
	do{
	cout<<"\nNhap so nguyen x:"; cin>>x;
	}while(x<0);
	cout<<"\nSo sanh so cho ngoi voi so nguyen x:";
	for(int i=0;i<m;i++)
	{
			if(x>b[i].getSC())
			{
				cout<<"\nMay bay co so ghe < x!!!";
			}
			else 
			{
				cout<<"\nMay bay co so ghe > x!!!";
			}
		
	}
	return 0;
}
