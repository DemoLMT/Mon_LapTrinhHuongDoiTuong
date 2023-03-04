#include<bits/stdc++.h>
using namespace std;
class tivi{
	string hsx;
	string manhinh;
	int sl;
	int giatien;
	int nam;
	public:
		int getgiatien(){
			return this->giatien;
		}
	void nhap();
	void xuat();
	tivi(){
		hsx="";
		manhinh="";
		sl=0;
		giatien=0;
		nam=0;
	}
	tivi(string h,string m,int s,int g,int n){
	hsx=h;
	manhinh=m;
	sl=s;
	giatien=g;
	nam=n;
	}
	friend istream& operator>>(istream& is,tivi& t){
	fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,t.hsx);fflush(stdin);
	cout<<"\nMan hinh = ";getline(cin,t.manhinh);
	cout<<"\nSo luong = ";is>>t.sl;
	cout<<"\nGia tien = ";is>>t.giatien;
	cout<<"\nNam san xuat = ";is>>t.nam;
	return is;
	}	
	friend ostream& operator<<(ostream& os,tivi t){
		os<<"\n"<<t.hsx<<setw(10)<<t.manhinh<<setw(15)<<t.sl<<setw(20)<<t.giatien<<setw(20)<<t.nam;
	return os;
	}	
	friend bool operator ==(tivi t1,tivi t2){
		return t1.hsx==t2.hsx;
	}
	friend bool operator >(tivi t1,tivi t2){
		return t1.giatien>t2.giatien;
	}
	friend bool sapxepgiam(tivi t1,tivi t2);
};
bool sapxepgiam(tivi t1,tivi t2){
	return t1.giatien>t2.giatien;
}
int main(){
	tivi a[100];
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
cout<<"Danh sach tivi giam dan theo giatien la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin quat >5.000.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getgiatien()>5000000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

