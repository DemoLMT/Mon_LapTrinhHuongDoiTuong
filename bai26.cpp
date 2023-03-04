#include<bits/stdc++.h>
using namespace std;
class mayloc{
    string id;
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
	    id="";
		hsx="";
		nam=0;
		giatien=0;
	}
	mayin(string i,string h,int n,int g){
	id=i;
	hsx=h;
	nam=n;
	giatien=g;
	}
	friend istream& operator>>(istream& is,mayloc& m){
	fflush(stdin);
	cout<<"\nMa may ID = ";getline(cin,m.id);fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,m.hsx);
    cout<<"\nNam san xuat = ";is>>m.nam;
	cout<<"\nGia tien = ";is>>m.giatien;
	return is;
	}	
	friend ostream& operator<<(ostream& os,mayloc m){
		os<<"\n"<<m.id<<setw(10)<<m.hsx<<setw(20)<<m.nam<<setw(20)<<m.giatien;
	return os;
	}
	friend bool operator ==(mayloc m1,mayloc m2){
		return m1.hsx==m2.hsx;
	}
	friend bool operator >(mayloc m1,mayloc m2){
		return m1.giatien>m2.giatien;
	}
	friend bool sapxepgiam(mayloc m1,mayloc m2);
};
bool sapxepgiam(mayloc m1,mayloc m2){
	return m1.nam>m2.nam;
}
int main(){
mayloc a[100];
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
cout<<"Danh sach nam sx giam dan la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\n_____________\n";
cout<<"Thong tin may loc co gia cao nhat la: \n";
int max=a[0].getgiatien();
for(int i=0;i<n;i++){
	if(a[i].getgiatien()>max){
		max=a[i].getgiatien();
	}
}
for(int i=0;i<n;i++){
	if(a[i].getgiatien()==max){
		cout<<a[i];
	}
}
}

