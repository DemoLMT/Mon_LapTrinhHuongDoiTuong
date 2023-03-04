#include<bits/stdc++.h>
using namespace std;
class nha{
	public:
	string ma;
	int sotang;
	int dientich;
	string mauson;
	nha(){
		ma="";	
		sotang=0;
		dientich=0;
		mauson="";
	}
	nha(string m,int s,int d,string ms){
		ma=m;
		sotang=s;
		dientich=d;
		mauson=ms;
	}
	friend istream& operator>> (istream& is,nha& n){
	fflush(stdin);
	cout<<"\n Ma ngoi nha : ";
	getline(is,n.ma);
	fflush(stdin);
	cout<<"\n So tang : ";
	is>>n.sotang;
	cout<<"\n Dien tich : ";
	is>>n.dientich;
	fflush(stdin);
	cout<<"\n Mau son : ";
	getline(is,n.mauson);
	fflush(stdin);
	cout << endl;
	return is;
	}
	friend ostream& operator<<(ostream& os,nha n){
	os<<"\n "<<n.ma<<setw(15)<<n.sotang<<setw(15)<<n.dientich<<setw(15)<<n.mauson;
	return os;
	}
};
bool sapxeptang(nha a,nha b){
	return a.dientich<b.dientich;
}
int main(){
nha a[100];
int n,dem;
cout <<"So nha : ";
cin >> n;
cout << "Nhap vao danh sach " << n << " ngoi nha \n";
for(int i=0;i<n;i++){
	cout << "ngoi nha thu "<<i+1;
	cin >>a[i];
}
cout << "Danh sach so nha la : "<< endl;
cout<<"Ma ngoi nha"<< setw(15)<<"so tang"<< setw(15) << "dien tich" << setw(15) << "mau son\n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\nSap xep danh sach ngoi nha theo thu tu tang dan :\n";
sort(a,a+n,sapxeptang);
for(int i=0;i<n;i++){
	cout<<a[i];
	}
cout << endl;
cout<<"Thong tin nha co mau son la Xanh : \n";
for(int i=0;i<n;i++){
	if(a[i].mauson=="Xanh") {
		cout << a[i];
		dem++;
	}
}cout <<"\nSo nha co mau son Xanh la : ";
cout<<dem;
}
