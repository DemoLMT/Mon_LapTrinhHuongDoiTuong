#include<bits/stdc++.h>
using namespace std;
class xemay{
	string makhung;
	string hsx;
	string dungtich;
	int nam;
	int gia;
	public:
	string gethsx(){
		return this->hsx;
	}
		void nhap();
		void xuat();
	xemay(){
		makhung="";
		hsx="";
		dungtich="";
		nam=0;
		gia=0;
	}
	xemay(string m,string h,string d,int n,int g){
	makhung=m;
	hsx=h;
	dungtich=d;
    nam=n;
	gia=g;
	}
	friend istream& operator>>(istream& is,xemay& x){
	fflush(stdin);
	cout<<"\nMa khung = ";getline(cin,x.makhung);fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,x.hsx);fflush(stdin);
	cout<<"\nDung tich = ";getline(cin,x.dungtich);
	cout<<"\nNam san xuat = ";is>>x.nam;
	cout<<"\nGia tien = ";is>>x.gia;
	return is;
	}	
	friend ostream& operator<<(ostream& os,xemay x){
		os<<"\n"<<x.makhung<<setw(10)<<x.hsx<<setw(10)<<x.dungtich<<setw(15)<<x.nam<<setw(20)<<x.gia;
	return os;
	}
	friend bool operator ==(xemay x1,xemay x2){
		return x1.hsx==x2.hsx;
	}
	friend bool operator >(xemay x1,xemay x2){
		return x1.gia>x2.gia;
	}
	friend bool sapxepgiam(xemay x1,xemay x2);
};
bool sapxepgiam(xemay x1,xemay x2){
	return x1.nam>x2.nam;
}
int main(){
xemay a[100];
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
cout<<"Danh sach xe may giam dan theo gia tien la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"Thong tin xe may Honda la: \n";
for(int i=0;i<n;i++){
	if(a[i].gethsx()=="Honda"){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

