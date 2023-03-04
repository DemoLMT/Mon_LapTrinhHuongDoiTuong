#include<bits/stdc++.h>
using namespace std;
class bacsi{
	string ma;
	string hoten;
	int tuoi;
	int hspc;
	public:
	int gettuoi(){
		return this->tuoi;
	}
	void nhap();
	void xuat();
	bacsi(){
		ma="";
		hoten="";
		tuoi=0;
		hspc=0;
	}
	bacsi(string m,string h,int t,int hs){
		ma=m;
		hoten=h;
		tuoi=t;
		hspc=hs;
		
	}	
	friend istream& operator>> (istream& is,bacsi& bs){
	fflush(stdin);
	cout<<"\n Ma so:";getline(is,bs.ma);fflush(stdin);
	cout<<"\n Ho ten:";getline(is,bs.hoten);fflush(stdin);
	cout<<"\n Tuoi:";is>>bs.tuoi;
	cout<<"\n He so luong:";is>>bs.hspc;
	return is;
	}
	friend ostream& operator<<(ostream& os,bacsi bs){
	os<<"\n "<<bs.ma<<setw(10)<<bs.hoten<<setw(15)<<bs.tuoi<<setw(20)<<bs.hspc;
	return os;
	}
	int tinhpc(){
		return hspc*1150000;
	}
	bool operator ==(bacsi b2){
		return this->tuoi==b2.tuoi;
	}
	bool operator <(bacsi b2){
		return this->tinhpc()<b2.tinhpc();
	}
	friend bool sapxepgiam(bacsi b1, bacsi b2);
};
bool sapxeptang(bacsi b1, bacsi b2){
	return b1.gettuoi()<b2.gettuoi();
}
int main(){
bacsi a[100];
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
cout<<"Danh sach quat tang dan theo tuoi la: \n";
sort(a,a+n,sapxeptang);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin quat >500 la: \n";
for(int i=0;i<n;i++){
	if(a[i].tinhpc()>500){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

