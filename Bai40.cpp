#include<bits/stdc++.h>
using namespace std;
class xe{
	string nhan;
	int gia;
	int nam;
	public:
		int getgia(){
			return this->gia;
		}
		int getnam(){
			return this->nam;
		}
		virtual void nhap(){
			fflush(stdin);
			cout<<"Nhan = ";getline(cin,nhan);
			cout<<"Gia = ";cin>>gia;
			cout<<"Nam san xuat = ";cin>>nam;
		}
		virtual void xuat(){
		cout<<"Nhan = "<<nhan<<endl;
		cout<<"Gia = "<<gia<<endl;
		cout<<"Nam san xuat = "<<nam<<endl;
		}
		xe(){
			nhan="";
			gia=0;
			nam=0;
		}
		xe(string n,int g,int nam){
			nhan=n;
			gia=g;
			this->nam=nam;
		}
		friend istream& operator >>(istream &is,xe& x){
			x.nhap();
		}
		friend ostream& operator <<(ostream &os,xe x){
			x.xuat();
		}
		bool operator> (xe x2){
			return this->gia>x2.gia;
		}
		bool operator< (xe x2){
			return this->nam<x2.nam;
		}
};
class xeoto:public xe{
	int socho;
	public:
		void nhap(){
			xe::nhap();
			cout<<"So cho ngoi = ";cin>>socho;
		}
		void xuat(){
			xe::xuat();
			cout<<"So cho ngoi = "<<socho<<endl;
		}
		friend bool operator> (xeoto x1,xeoto x2){
			return x1.getgia()>x2.getgia();
		}
		friend bool operator== (xeoto x1,xeoto x2){
			return x1.getgia()==x2.getgia();
		}
};
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0);
xe a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n____________\n";
cout<<"Mang da nhap: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
int dem=0;
cout<<"Danh sach xe co nam sx 2010\n";
for(int i=0;i<n;i++){
	if(a[i].getnam()==2010){
		dem++;
		cout<<a[i];
	}
}
if(dem==0){
	cout<<"\nKhong tim thay!\n";
}
int vt=0;
cout<<"Danh sach xe co gia >100 tr \n";
for(int i=0;i<n;i++){
	if(a[i].getgia()>100*(10^6)){
		vt++;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"\nKhong tim thay!\n";
}
xe *Arr[100];
int N;
do{
	cout<<"N = ";cin>>N;
}while(N<=0);
for(int i=0;i<N;i++){
	Arr[i]=new xeoto();
	Arr[i]->nhap();
}
int M;
int dk=0;
do{
	cout<<"Gia tien can so sanh: ";cin>>M;
}while(M<=0);
cout<<"Da tim thay:___________ \n";
for(int i=0;i<N;i++){
	if(Arr[i]->getgia()>=M){
		dk++;
		Arr[i]->xuat();
	}
}
if(dk==0){
	cout<<"\nKhong tim thay!\n";
}
}

