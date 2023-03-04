#include<bits/stdc++.h>
using namespace std;
class maygiat{
	string macode;
	string hsx;
	int kl;
	string loaicua;
	int sl;
	string xuatsu;
	public:
	string gethsx(){
		return this->hsx;
	}
		void nhap();
		void xuat();
	maygiat(){
	macode="";
	hsx="";
	kl=0;
	loaicua="";
	sl=0;
	xuatsu="";
	}
	maygiat(string macode,string hsx,int kl,string loaicua,int sl,string xuatsu){
	this->macode=macode;
	this->hsx=hsx;
    this-> kl=	kl;
	this->loaicua=loaicua;
	this->sl=sl;
	this->xuatsu=xuatsu;
	}
	friend istream& operator>>(istream& is,maygiat& m){
	fflush(stdin);
	cout<<"\nMa code = ";getline(cin,m.macode);fflush(stdin);
	cout<<"\nHang san xuat = ";getline(cin,m.hsx);fflush(stdin);
    cout<<"\nKhoi luong = ";is>>m.kl;fflush(stdin);
	cout<<"\nLoai cua = ";getline(cin,m.loaicua);
	cout<<"\nSo luong";is>>m.sl;fflush(stdin);
	cout<<"\nXuat su = ";getline(cin,m.xuatsu);
	return is;
	}	
	friend ostream& operator<<(ostream& os,maygiat m){
		os<<"\n"<<m.macode<<setw(10)<<m.hsx<<setw(20)<<m.kl<<setw(20)<<m.loaicua<<setw(20)<<m.sl<<setw(20)<<m.xuatsu;
	return os;
	}
	bool operator >(maygiat m2){
		return this->kl>m2.kl;
	}
	bool operator <(maygiat m2){
		return this->sl<m2.sl;
	}
	friend bool sapxepgiam(maygiat m1,maygiat m2);
};
bool sapxepgiam(maygiat m1,maygiat m2){
	return m1.sl>m2.sl;
}
int main(){
maygiat a[100];
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
cout<<"Danh sach may giat giam dan theo so luong la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"Thong tin xe may Honda la: \n";
for(int i=0;i<n;i++){
	if(a[i].gethsx()=="TOSHIBA"){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

