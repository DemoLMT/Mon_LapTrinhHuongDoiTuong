#include<bits/stdc++.h>
using namespace std;
class dt{

	string tendt;
	string hax;
	int giatien;
	public:
	int getgiatien(){
		return this->giatien;
	}
	dt(){
		tendt="";
		hax="";	
		giatien=0;	
	}
	dt(string t,string h,int g){
		tendt=t;
		hax=h;
		giatien=g;
	}
	void nhap();
	void xuat();
	friend istream& operator>> (istream& is,dt& d){
	fflush(stdin);
	cout<<"\n Ten dien thoai:";getline(is,d.tendt);fflush(stdin);
	cout<<"\n Hang san xuat:";getline(is,d.hax);fflush(stdin);
	cout<<"\n Gia tien:";is>>d.giatien;
	return is;
	}
	friend ostream& operator<<(ostream& os,dt d){
	os<<"\n "<<d.tendt<<setw(15)<<d.hax<<setw(15)<<d.giatien;
	return os;
	}
	friend bool sapxepgiam(dt a,dt b);
};
bool sapxepgiam(dt a,dt b){
	return a.giatien>b.giatien;
}
int main(){
dt a[100];
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
cout<<"Danh sach quat dien thoai dan theo gia tien la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin quat >6.000.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getgiatien()>6000000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

