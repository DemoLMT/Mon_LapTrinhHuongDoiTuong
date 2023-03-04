#include<bits/stdc++.h>
using namespace std;
class diacd{
	string tendia;
	int sl;
	int gia;
	public:
	int getsl(){
		return this->sl;
	}
	int getgia(){
		return this->gia;
	}
	diacd(){
		tendia="";
		sl=0;
		gia=0;
	}
	diacd(string t, int s,int g){
		tendia=t;
		sl=s;
		gia=g;
	}
	virtual void nhap(){
		fflush(stdin);
		cout<<"Ten dia = ";getline(cin,tendia);
		cout<<"So luong = ";cin>>sl;
		cout<<"Gia = ";cin>>gia;
	}
	virtual void xuat(){
		cout<<"Ten dia = "<<tendia<<endl;
		cout<<"So luong = "<<sl<<endl;
		cout<<"Gia = "<<gia<<endl;
	}
	friend istream& operator>>(istream & is,diacd& c){
		c.nhap();
		return is;
	}
	friend ostream& operator<<(ostream& os,diacd c){
		c.xuat();
		return os;
	}
	bool operator <(diacd c2){
		return this->gia<c2.gia;
	}
	bool operator !=(diacd c2){
		return this->sl!=c2.sl;
	}
};
class cd:public diacd{
	int sodiadaban;
	public:
		void nhap(){
			diacd::nhap();
			cout<<"So dia da ban = ";cin>>sodiadaban;
		}
		int tinhtien(){
			return sodiadaban*diacd::getgia();
		}
		void xuat(){
			diacd::xuat();
			cout<<"So dia da ban = "<<sodiadaban<<endl;
			cout<<"Gia tien = "<<cd::tinhtien()<<endl;
		}
		bool operator >(cd c2){
			return this->tinhtien()>c2.tinhtien();
		}
};
int main(){
diacd a[100];
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0);
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
int min=a[0].getgia();
for(int i=0;i<n;i++){
	if(a[i].getgia()<min){
		min=a[i].getgia();
	}
}
cout<<"Thong tin dia Cd co gia tien Min\n";
for(int i=0;i<n;i++){
	if(a[i].getgia()==min){
		cout<<a[i];
	}
}
int max=a[0].getsl();
for(int i=0;i<n;i++){
	if(a[i].getsl()>max){
		max=a[i].getsl();
	}
}
cout<<"Dia CD co sl bai hat lon nhat: "<<max<<endl;
cout<<"______________\n";
cout<<"Thong tin dia Cd co sl Max\n";
for(int i=0;i<n;i++){
	if(a[i].getsl()==max){
		cout<<a[i];
	}
}
cout<<"______________\n";
diacd *Arr[100];
int N;
do{
	cout<<"Nhap N = ";
	cin>>N;
}while(N<=0);
for(int i=0;i<N;i++){
	Arr[i]=new cd();
	Arr[i]->nhap();
}
for(int i = 0 ;i<N-1;i++){
		for(int j = i+1;j<N;j++){
			if(Arr[i]<Arr[j]){
				swap(Arr[i],Arr[j]);
			}
		}
	}
cout<<"\nMang sap xep giam dan: \n";
for(int i=0;i<N;i++){
	Arr[i]->xuat();
}
}

