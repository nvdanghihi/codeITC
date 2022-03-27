#include<iostream>
using namespace std;
class HangHoa
{
	private:
		char Mahang[5];
		char Tenhang[30];
		int sl;
		float dgia,thanhtien;
	public:
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.getline(Mahang,8);
			cout<<"\nNhap ten hang: ";
			cin.getline(Tenhang,30);
			cout<<"\nNhap so luong: ";
			cin>>sl;
			cout<<"\nNhap don gia: ";
			cin>>dgia;
			fflush(stdin);//cin.ignore();
		}
		float tinhtien()
		{
			thanhtien=sl*dgia;
		}
		void XuatTT()
		{
			cout<<"Ma hang:"<<Mahang
				<<"\tTen hang:"<<Tenhang
				<<"\tSo luong:"<<sl
				<<"\tDon gia:"<<dgia
				<<"\tThanh tien:"<<thanhtien<<endl;
		}
		void in()
		{
			cout<<"Don gia lon hon 50 la: ";
			if (dgia>50)
			{
				XuatTT();
			}
		}
};
int main()
{
	int n;
	cout<<"\nNhap vao so luong hang hoa:"; cin>>n;
	HangHoa a[n];
	fflush(stdin);//cin.ignore();
	cout<<"\nNhap thong tin hang hoa:";
	for (int i=0;i<n;i++)
	{
		cout<<"\nThong tin hang hoa thu "<<i+1<<": ";
		a[i].nhap();
	}
	cout<<"\nXuat thong tin hang hoa:";
	for (int i=0;i<n;i++)
	{
		cout<<"\nThong tin hang hoa thu "<<i+1<<": ";
		a[i].XuatTT();
	}
	cout<<"\nDs thong tin hang hoa co don gia >50 :";
	for (int i=0;i<n;i++)
	{
		cout<<"\nThong tin hang hoa thu "<<i+1<<": ";
		a[i].in();
	}
		return 0;
}