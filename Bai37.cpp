#include<bits/stdc++.h>
using namespace std;
class thisinh{
	string hoten;
	int toan;
	int ly;
	int hoa;
	public:
		thisinh(){
			hoten="";
			toan=0;
			ly=0;
			hoa=0;
		}
		thisinh(string h, int t, int l,int ho){
			hoten=h;
			toan=t;
			ly=l;
			hoa=ho;
		}
		virtual void nhap(){
			fflush(stdin);
			cout<<"Ho ten = ";getline(cin,hoten);
			cout<<"Toan = ";cin>>toan;
			cout<<"Ly = ";cin>>ly;
			cout<<"Hoa = ";cin>>hoa;
		}
		virtual void xuat(){
			cout<<"Ho ten = "<<hoten<<endl;
			cout<<"Toan = "<<toan<<endl;
			cout<<"Ly = "<<ly<<endl;
			cout<<"Hoa = "<<hoa<<endl;
		}
	friend istream& operator>>(istream & is,thisinh& t){
	t.nhap();
	}
	friend ostream& operator<<(ostream& os,thisinh t){
		t.xuat();
	}
	int tongdiem(){
		return toan+ly+hoa;
	}
	bool operator >(thisinh s2){
		return this->tongdiem()>s2.tongdiem();
	}
	bool operator ==(thisinh s2){
		return this->toan=s2.toan;
	}
};
class hocvien:public thisinh{
	string mhv;
	string thongtin;
	public:
		void nhap(){
			thisinh::nhap();
			cout<<"Ma hoc vien = ";getline(cin,mhv);fflush(stdin);
		}
		void nhap(thisinh a){
			thisinh::nhap();
			cout<<"Ma hoc vien = ";getline(cin,mhv);fflush(stdin);
			cout<<"Thong tin hoc vien = ";hocvien::thongtin;
		}
		void xuat(){
			thisinh::xuat();
			cout<<"Ma hoc vien = "<<mhv<<endl;
			cout<<"Thong tin hoc vien = "<<thongtin<<endl;
		}
		int tongdiem(){
			return thisinh::tongdiem();
		}
		bool operator >(hocvien h2){
			return this->tongdiem()>h2.tongdiem();
		}
		bool operator ==(hocvien h2){
			return this->tongdiem()==h2.tongdiem();
		}
};
int main(){
thisinh a[100];
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0);
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n______________\n";
cout<<"Mang sau nhap: \n";
cout<<"______________\n";
for(int i=0;i<n;i++){
	cout<<a[i];
	cout<<"______________\n";
}
cout<<"Nhung hoc sinh trung tuyen\n";
int vt=0;

for(int i=0;i<n;i++){
	if(a[i].tongdiem()>=23){
		vt=i;
		cout<<a[i];
		cout<<"______________\n";
	}
}
cout<<endl;
if(vt==0){
		cout<<"Tat ca hoc sinh bi truot\n";
}
hocvien b[100];
for(int i=0;i<n;i++){
	if(a[vt]==a[i])
	b[i].nhap()=a[i].nhap();
}	
cout<<"__________Mang sau luu tru________\n";
for(int i=0;i<n;i++){
		cout<<b[i];

}	
}

