#include<bits/stdc++.h>
using namespace std;
class xedap{
	string macode;
	string mausac;
	string hsx;
	int sl;
	int giatien;
	int nam;
	public:
	int getnam(){
		return this->nam;
	}
	int getgiatien(){
		return this->giatien;
	}
	void nhap();
	void xuat();
	xedap(){
	    macode="";
	    mausac="";
		hsx="";
		sl=0;
		giatien=0;
		nam=0;
	}
	xedap(string ma,string mau,string h,int s,int g,int n){
	macode=ma;
	mausac=mau;
	hsx=h;
	sl=s;
	giatien=g;
	nam=n;
	}
	friend istream& operator>>(istream& is,xedap& x){
	fflush(stdin);
	cout<<"\nMa code = ";getline(cin,x.macode);fflush(stdin);
	cout<<"\nMau sac = ";getline(cin,x.mausac);fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,x.hsx);fflush(stdin);
	cout<<"\nSo luong = ";is>>x.sl;
	cout<<"\nGia tien = ";is>>x.giatien;
	cout<<"\nNam san xuat = ";is>>x.nam;
	return is;
	}	
	friend ostream& operator<<(ostream& os,xedap x){
		os<<"\n"<<x.macode<<setw(10)<<x.mausac<<setw(10)<<x.hsx<<setw(15)<<x.sl<<setw(20)<<x.giatien<<setw(20)<<x.nam;
	return os;
	}	
	bool operator ==(xedap x2){
		return this->hsx==x2.hsx;
	}
	bool operator >(xedap x2){
		return this->giatien>x2.giatien;
	}
	friend bool sapxepgiam(xedap x1,xedap x2);
};
bool sapxeptang(xedap x1,xedap x2){
	return x1.getgiatien()<x2.getgiatien();
}
int main(){
xedap a[100];
int n;
do{
	cout<<"Nhap n(>0) = ";cin>>n;
}while(n<0);
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n_____________\n";
cout<<"Mang vua nhap la: \n";
 for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\n_____________\n";
cout<<"Danh sach xe gia tang dan la: \n";
sort(a,a+n,sapxeptang);
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\n_____________\n";
int vt=0;
cout<<"Thong tin xe sx nam 2016 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getnam()==2016){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

