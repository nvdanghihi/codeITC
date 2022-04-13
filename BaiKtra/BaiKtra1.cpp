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
	Ttuc: cout<<"\n\t\t\t\tMenu:";
	cout<<"\n1.Nhap/Xuat thong tin phuong tien gt:";
	cout<<"\n1.Nhap/Xuat thong tin may bay:";
	cout<<"\n3.Tai dinh nghia toan tu nhap.";
	cout<<"\n4.Ham tinh gia thanh sau thue.";
	cout<<"\n5.Tai dinh nghia toan tu <.";
	cout<<"\n6.So sanh so nguyen x voi so ghe.";
	cout<<"\n7.Tai dinh nghia toan tu xuat.";
	cout<<endl;
	int lc;
	cout<<"\nMoi ban chon:";cin>>lc;
	switch(lc)
	{
		case 1:
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
		}
			break;
	case 2:
	{
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
	}
			break;
		case 3:
		{
	int m;
	cout<<"\nNhap so may bay:";
	cin>>m;
	MayBay b[m];
		cout<<"\nNhap lai thong tin bang toan tu nhap >>.";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay bay "<<i+1<<" :";
		cin>>b[i];
	}
		}
	break;
		
		case 4:
		{
			int m;
			MayBay b[m];
				for(int i=0;i<m;i++)
	{
		cout<<"\nXuat thong tin may bay "<<i+1<<" :";
		b[i].xuatTT();
	}
		}
			break;
		case 5:
		{
			
			int m;
			MayBay b[m];
			cout<<"\nNhap lai thong tin bang toan tu nhap >>.";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay bay "<<i+1<<" :";
		cin>>b[i];
	}
		}
		case 6:
		{
			int m;
			MayBay b[m];
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
		}
	case 7:
	{
		int m;
			MayBay b[m];
		cout<<"\nXuat thong tin bang toan tu xuat <<.";
	for(int i=0;i<m;i++)
	{
		cout<<"\nMay bay "<<i+1<<" :";
		cout<<b[i];
	}
	}break;
	}
	char tl;
	cout<<"\nBan co muon tiep tuc hay khong?chon Y/N.";
	cin>>tl;
	if (tl=='y'|| tl=='Y') goto Ttuc;
	return 0;
}
