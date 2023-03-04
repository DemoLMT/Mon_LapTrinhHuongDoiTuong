#include<bits/stdc++.h>
using namespace std;
class congnhan{
	string hoten;
	int tuoi;
	string gt;
	int hsl;
	int sogioLT;
	public:
	void nhap();
	void xuat();
	congnhan(){
		hoten="";
		tuoi=0;
		gt="";
		hsl=0;
		sogioLT=0;
	}
	congnhan(string h,int t,string g,int hs,int s){
		hoten=h;
		tuoi=t;
		gt=g;
		hsl=hs;
		sogioLT=s;
	}	
	friend istream& operator>> (istream& is,congnhan& cn){
	fflush(stdin);
	cout<<"\n Ho ten:";getline(is,cn.hoten);
	cout<<"\n Tuoi:";is>>cn.tuoi;fflush(stdin);
	cout<<"\n Gioi tinh:";getline(is,cn.gt);
	cout<<"\n He so luong:";is>>cn.hsl;
	cout<<"\n So gio lam them:";is>>cn.sogioLT;
	
	return is;
	}
	friend ostream& operator<<(ostream& os,congnhan cn){
	os<<"\n "<<cn.hoten<<setw(10)<<cn.tuoi<<setw(15)<<cn.gt<<setw(20)<<cn.hsl;
	return os;
	}
	int tongluong(){
		return hsl*1150000+sogioLT*150000;
	}
	bool operator >(congnhan c2){
		return this->tongluong()>c2.tongluong();
	}
	bool operator <(congnhan c2){
		return this->sogioLT<c2.sogioLT;
	}
	friend bool sapxepgiam(congnhan c1, congnhan c2);
};
bool sapxepgiam(congnhan c1, congnhan c2){
	return c1.tongluong()>c2.tongluong();
}
int main(){
congnhan a[100];
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
cout<<"Danh sach cong nhan giam dan theo tong luong la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin quat >5.000.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].tongluong()>5000000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

