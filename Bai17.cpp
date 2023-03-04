#include<bits/stdc++.h>
using namespace std;
class quatdien{	
    private:
    string hsx;
	int sl;
	int giatien;
	int nam;
	public:
	string gethsx(){
		return this->hsx;
		}
	int getgiatien(){
			return this->giatien;
		}
	quatdien(){
		hsx="";
		sl=0;
		giatien=0;
		nam=0;
	}
	quatdien(string h,int s,int g,int n){
	hsx=h;
	sl=s;
	giatien=g;
	nam=n;
	}
	friend istream& operator >> (istream& is,quatdien& qd){
	fflush(stdin);
	cout<<"\nHang san xuat = ";getline(is,qd.hsx);
	cout<<"\nSo luong = ";is>>qd.sl;
	cout<<"\nGia tien = ";is>>qd.giatien;
	cout<<"\nNam san xuat = ";is>>qd.nam;
	return is;
	}
	friend ostream& operator << (ostream& os,quatdien qd){
	os<<"\n"<<qd.hsx<<setw(11)<<qd.sl<<setw(15)<<qd.giatien<<setw(20)<<qd.nam<<endl;
	return os;
	}
	friend bool operator ==(quatdien q1,quatdien q2){
		return q1.gethsx()==q2.gethsx();
	}
	friend bool operator >(quatdien q1,quatdien q2){
		return q1.giatien<q2.giatien;
	}
	friend bool sapxepgiam(quatdien a,quatdien b);
};
bool sapxepgiam(quatdien a,quatdien b){
	return a.giatien>b.giatien;
}
int main(){
	quatdien a[100];
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
cout<<"Danh sach quat giam dan theo giatien la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\n_____________\n";
cout<<"thong tin quat >1.000.000 la: \n";
for(int i=0;i<n;i++){
	if(a[i].getgiatien()>1000000){
		vt=i;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"K co thong tin!";
}
}

