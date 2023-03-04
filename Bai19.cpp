#include<bits/stdc++.h>
using namespace std;
class tulanh{
	string hsx;
	string dungtich;
	int sl;
	int giatien;
	int nam;
	public:
	int getgiatien(){
			return this->giatien;
	}
	void nhap();
	void xuat();
	tulanh(){
		hsx="";
		dungtich="";
		sl=0;
		giatien=0;
		nam=0;
	}
	tulanh(string h,string d,int s,int g,int n){
	hsx=h;
	dungtich=d;
	sl=s;
	giatien=g;
	nam=n;
	}
	friend istream& operator>>(istream& is,tulanh& t){
	fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,t.hsx);fflush(stdin);
	cout<<"\nDung tich = ";getline(cin,t.dungtich);
	cout<<"\nSo luong = ";is>>t.sl;
	cout<<"\nGia tien = ";is>>t.giatien;
	cout<<"\nNam san xuat = ";is>>t.nam;
	return is;
	}	
	friend ostream& operator<<(ostream& os,tulanh t){
		os<<"\n"<<t.hsx<<setw(10)<<t.dungtich<<setw(15)<<t.sl<<setw(20)<<t.giatien<<setw(20)<<t.nam;
	return os;
	}	
	friend bool operator ==(tulanh t1,tulanh t2){
		return t1.hsx==t2.hsx;
	}
	friend bool operator >(tulanh t1,tulanh t2){
		return t1.giatien>t2.giatien;
	}
	friend bool sapxepgiam(tulanh t1,tulanh t2);
};
bool sapxepgiam(tulanh t1,tulanh t2){
	return t1.giatien>t2.giatien;
}
int main(){
tulanh a[100];
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
cout<<"Danh sach tulanh giam dan theo giatien la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin quat >1.000.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getgiatien()>1000000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

