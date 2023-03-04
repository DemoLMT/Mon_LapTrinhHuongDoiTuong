#include<bits/stdc++.h>
using namespace std;
class nhanvien{
	private:
	string ma;
	string hoten;
	int tuoi;
	float hesoL;
	public:
	void nhap();
	void xuat();
	nhanvien(){
		ma="";
		hoten="";
		tuoi=0;
		hesoL=0.0;
	}
	hocvien(string m,string h,int t,float heso){
		ma=m;
		hoten=h;
		tuoi=t;
		hesoL=heso;
		
	}	
	friend istream& operator>> (istream& is,nhanvien& nv){
	fflush(stdin);
	cout<<"\n Ma nhan vien:";getline(is,nv.ma);fflush(stdin);
	cout<<"\n Ho ten:";getline(is,nv.hoten);fflush(stdin);
	cout<<"\n Tuoi:";is>>nv.tuoi;
	cout<<"\n He so luong:";is>>nv.hesoL;
	return is;
	}
	friend ostream& operator<<(ostream& os,nhanvien nv){
	os<<"\n "<<nv.ma<<setw(10)<<nv.hoten<<setw(15)<<nv.tuoi<<setw(20)<<nv.hesoL;
	return os;
	}
	float luong(){
		return 1.0*hesoL*1150000;
	}
	bool operator ==(nhanvien nv2){
		return this->tuoi==nv2.tuoi;
	}
	bool operator <(nhanvien nv2){
		return this->luong()==nv2.luong();
	}
	friend bool sapxepgiam(nhanvien a,nhanvien b);
};
bool sapxepgiam(nhanvien a,nhanvien b){
	return a.tuoi>b.tuoi;
}
int main(){
nhanvien a[100];
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
cout<<"Danh sach nhan vien giam dan theo tuoi la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin nv co luong >3.330.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].luong()>3330000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}

}

