#include<bits/stdc++.h>
using namespace std;
class thedienthoai{
	string mathe;
	int menhgia;
	string nhamang;
	int sl;
	public:
	string getnhamang(){
		return this->nhamang;
	}
	int getmenhgia(){
		return this->menhgia;
	}
		void nhap();
		void xuat();
	thedienthoai(){
		mathe="";
		menhgia=0;
		nhamang="";
		sl=0;
	}
	thedienthoai(string ma,int me,string n,int s){
	mathe=ma;
	menhgia=me;
	nhamang=n;
	sl=s;
	}
	friend istream& operator>>(istream& is,thedienthoai& t){
	fflush(stdin);
	cout<<"\nMa the = ";getline(cin,t.mathe);fflush(stdin);
	cout<<"\nMenh gia = ";is>>t.menhgia;
	fflush(stdin);
	cout<<"\nNha mang = ";getline(cin,t.nhamang);fflush(stdin);
	cout<<"\nSo luong = ";is>>t.sl;
	return is;
	}	
	friend ostream& operator<<(ostream& os,thedienthoai t){
		os<<"\n"<<t.mathe<<setw(10)<<t.menhgia<<setw(20)<<t.nhamang<<setw(20)<<t.sl;
	return os;
	}
	friend bool operator !=(thedienthoai t1,thedienthoai t2){
		return t1.nhamang!=t2.nhamang;
	}
	friend bool operator >(thedienthoai t1,thedienthoai t2){
		return t1.menhgia>t2.menhgia;
	}
};

int main(){
thedienthoai a[100];
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
cout<<"Thong tin the co nha mang Viettel la: \n";
for(int i=0;i<n;i++){
	if(a[i].getnhamang()=="Viettel"){
		cout<<a[i];
	}
}
int vt=0;
cout<<"\n_____________\n";
cout<<"Thong tin quat the menh gia 500.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getmenhgia()==500000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

