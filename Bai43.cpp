#include<bits/stdc++.h>
using namespace std;
class nhansu{
	string ten;
	int nam;
	int scm;
	public:
		string getten(){
			return this->ten;
		}
		int getnam(){
			return this->nam;
		}
		int getscm(){
			return this->scm;
		}
		virtual void nhap(){
			fflush(stdin);
			cout<<"Ten = ";getline(cin,ten);
			cout<<"Nam sinh = ";cin>>nam;
			cout<<"So cmnd = ";cin>>scm;
		}
		virtual void xuat(){
			cout<<"Ten = "<<ten<<endl;
			cout<<"Nam sinh = "<<nam<<endl;
			cout<<"So cmnd = "<<scm<<endl;
		}
		nhansu(){
			ten="";
			nam=0;
			scm=0;
		}
		nhansu(string t,int n,int s){
			ten=t;
			nam=n;
			scm=s;
		}
		friend istream& operator>>(istream& is,nhansu& ns){
			ns.nhap();
			return is;
		}
		friend ostream& operator<<(ostream& os,nhansu ns){
			ns.xuat();
			return os;
		}
		bool operator >(nhansu n2){
			return this->nam>n2.nam;
		}
		bool operator ==(nhansu n2){
			return this->ten==n2.ten;
		}
};
class nghihuu:public nhansu{
	int luonghuu;
	public:
		nghihuu():nhansu(){
			luonghuu=0;
		}
		nghihuu(nhansu ns,int luonghuu):nhansu(getten(),getnam(),getscm()){
			this->luonghuu=luonghuu;
		}
		int getluonghuu(){
			return this->luonghuu;
		}
		void nhap(){
		nhansu::nhap();
		cout<<"Luong huu = ";
		cin>>luonghuu;
		}
		nghihuu nhap(nhansu ns){
		fflush(stdin);
		cout<<"Luong huu = ";
		cin>>luonghuu;
		return nghihuu(ns,luonghuu);
		}
		void xuat(){
			nhansu::xuat();
			cout<<"Thong tin luong huu = "<<luonghuu<<endl;
		}
		bool operator >(int n){
			return this->luonghuu>n;
		}
		bool operator ==(int n){
			return this->luonghuu==n;
		}
};
int main(){
int n;
do{
	cout<<"n = ";cin>>n;
}while(n<=0);
nhansu a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n______________\n";
cout<<"Mang sau nhap: \n";
cout<<"______________\n";
for(int i=0;i<n;i++){
	cout<<a[i];
	cout<<"______________\n";
}
cout<<"Danh sach nguoi co ten Ha: \n";
for(int i=0;i<n;i++){
	if(a[i].getten()=="Ha"||a[i].getten()=="ha"){
		cout<<a[i];
	}
}
int N;
do{
	cout<<"N = ";cin>>N;
}while(N<=0);
nghihuu nh[N];
for(int i = 0; i < N; i++){
if(2022-a[i].getnam()>55)
		nh[i] = nh[i].nhap(a[i]);
	}
cout<<"\n______________\n";
cout<<"Mang sau nhap: \n";
for(int i=0;i<N;i++){
	cout<<nh[i];
}
//int max=Arr[0].getluonghuu();
//int vt=0;
//for(int i=0;i<N;i++){
//	if(Arr[vt].getluonghuu()<Arr[i].getluonghuu()){
//		vt=i;
//		max=Arr[i].getluonghuu();
//	}
//}
//cout<<"Ng co luong huu cao nhat: \n";
//for(int i=0;i<N;i++){
//	if(Arr[i].getluonghuu()==max){
//		cout<<Arr[i];
//	}
//}
}

