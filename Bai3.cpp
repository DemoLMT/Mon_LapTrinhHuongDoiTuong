#include<bits/stdc++.h>
using namespace std;
class detai{
	public:
		int ma;
		string ten;
		string tinhtrang;
		detai(){
		ma=0;
		ten="";
		tinhtrang="";
	}
	detai(int m,string t,string tt){
		ma=m;
		ten=t;
		tinhtrang=tt;
	}
	friend istream& operator>> (istream& is,detai& dt){
	fflush(stdin);
	cout<<"\n Ma de tai:";is>>dt.ma;fflush(stdin);
	cout<<"\n Ten de tai:";getline(is,dt.ten);fflush(stdin);
	cout<<"\n Tinh trang:";getline(is,dt.tinhtrang);fflush(stdin);
	return is;
	}
	friend ostream& operator<< (ostream& os,detai dt){
		os<<"\n "<<dt.ma<<setw(15)<<dt.ten<<setw(15)<<dt.tinhtrang;
	return os;
	}
	string operator ==(string tentrung){
		return ten=tentrung;
	}
	string operator !=(string ss){
		return tinhtrang=ss;
	}
	bool operator >(int x){
		return ma>x;
	}

};	bool sapxeptangdan(detai a, detai b){
		return a.ma<b.ma;
	}
int main(){
detai a[100];
int n;
do{
	cout<<"n= ";cin>>n;
}while(n<=0);
cout<<"\na, Nhap vao danh sach "<<n<<" de tai\n";
for(int i=0;i<n;i++){
	cout<<"detai "<<i+1;
	cin>>a[i];
}
int dem=0;
cout<<"\nb, Danh sach vua nhap la: "<<endl;
cout<<"Ma de tai"<<setw(15)<<"Ten de tai"<<setw(15)<<"Tinh trang\n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\nc, Sap xep danh sach de tai theo ma de tai:\n";
sort(a,a+n,sapxeptangdan);
for(int i=0;i<n;i++){
	cout<<a[i];
	}
cout<<"\nd, So luong de tai da nghiem thu:\n";
for(int i=0;i<n;i++){
    if(a[i].tinhtrang=="danghiemthu"){
    	dem++;
	}
}
cout<<dem;
}

