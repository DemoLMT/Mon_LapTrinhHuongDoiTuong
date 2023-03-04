#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class thisinh {
	protected:
	string ma;
	string ten;
	int namsinh;
	char giai;
	public:
	kythi()
		{
			ma=" ";
			ten=" ";
			namsinh=0;
			giai=0;
		}
	bacsi(string ma, string ten,int namsinh, char giai)
	{
		this->ma=ma;
		this->ten= ten;
		this->namsinh=namsinh;
		this->giai=giai;
	}
	string getma()
	{
		return ma;
	}
	string getten()
	{
		return ten;
	}
	int getnamsinh()
	{
		return namsinh;
	}
	char getgiai()
	{
		return giai;
	}
	void nhap()
	{
		cout<<"Nhap vao matruong, tentruong, namsinh , giai:";
		fflush(stdin);
		getline(cin,ma);
		fflush(stdin);
		getline(cin,ten);
		cin>>namsinh;
		cin>>giai;
	}
	void xuat()
	{
		cout<<ma<<" "<<ten<<" "<<namsinh<<" "<<giai;
	}
	friend istream &operator>> (istream &is,thisinh &ts)
	{
		ts.nhap();
		return is;
	}
	friend ostream &operator <<(ostream &os,thisinh ts)
	{
		ts.xuat();
		return os;
	}
	bool operator ==(thisinh ts)
	{
		return (this->getten()==ts.getten());
	}
	bool operator <(thisinh ts)
	{
		return (this->getnamsinh()==ts.getnamsinh());
	}
};
int main()
{
	int n;
	cout<<"Nhap vao n:";         
	cin>>n;
	thisinh a[n];
	cout<<"nhap vao thong tin n thi sinh:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Hien thi thong tin thi sinh";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"Sap xep theo thu tu tang dan cua ma thí sinh:";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].getma()<a[j].getma())
			{
				swap(a[i],a[j]);
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"Thi sinh dat giai 1";
	for(int i=0;i<n;i++)
	{
		if(a[i].getgiai()==1)
		{
			cout<<a[i];
		}
	}
}

