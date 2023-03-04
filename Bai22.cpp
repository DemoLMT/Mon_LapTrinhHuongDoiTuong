#include<bits/stdc++.h>
using namespace std;
class mayin{
    string mamay;
	string hsx;
	int nam;
	int giatien;
	public:
	int getgiatien(){
		return this->giatien;
	}
	void nhap();
	void xuat();
	mayin(){
	    mamay="";
		hsx="";
		nam=0;
		giatien=0;
	}
	mayin(string m,string h,int n,int g){
	mamay=m;
	hsx=h;
	nam=n;
	giatien=g;
	}
	friend istream& operator>>(istream& is,mayin& m){
	fflush(stdin);
	cout<<"\nMa may = ";getline(cin,m.mamay);fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,m.hsx);
    cout<<"\nNam san xuat = ";is>>m.nam;
	cout<<"\nGia tien = ";is>>m.giatien;
	return is;
	}	
	friend ostream& operator<<(ostream& os,mayin m){
		os<<"\n"<<m.mamay<<setw(10)<<m.hsx<<setw(20)<<m.nam<<setw(20)<<m.giatien;
	return os;
	}
	friend bool operator ==(mayin m1,mayin m2){
		return m1.hsx==m2.hsx;
	}
	friend bool operator >(mayin m1,mayin m2){
		return m1.nam>m2.nam;
	}
	friend bool sapxeptang(mayin m1,mayin m2);
};
bool sapxeptang(mayin m1,mayin m2){
	return m1.nam<m2.nam;
}
int main(){
mayin a[100];
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
cout<<"Danh sach nam sx tang dan la: \n";
sort(a,a+n,sapxeptang);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"Thong tin in co gia tien >3.000.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getgiatien()>3000000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

