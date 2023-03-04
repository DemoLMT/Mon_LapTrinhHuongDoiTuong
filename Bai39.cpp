#include<bits/stdc++.h>
using namespace std;
class nguoi{
	string hoten;
	string gioitinh;
	int ngay;
	int thang;
	int nam;
	public:
	int getnam(){
		return this->nam;
	}
	string getgioitinh(){
		return this->gioitinh;
	}
	nguoi(){
		hoten="";
		gioitinh="";
		ngay=1;
		thang=1;
		nam=1900;
	}
	nguoi(string h,string g,int n,int t,int nam){
		hoten=h;
		gioitinh=h;
		ngay=n;
		thang=t;
		this->nam=nam;
	}
	virtual void nhap(){
	fflush(stdin);
	cout<<"Ho ten = ";getline(cin,hoten);fflush(stdin);
	cout<<"Gioi tinh = ";getline(cin,gioitinh);fflush(stdin);
	do{
		cout<<"Ngay = ";
		cin>>ngay;
	}while(ngay<1 || ngay>31);
	do{
		cout<<"Thang = ";
		cin>>thang;
	}while(thang<1 || thang >12);
	do{
	cout<<"Nam = ";
	cin>>nam;
	}while(nam>2022);	
	
	}
	virtual void xuat(){
	cout<<"Ho ten = "<<hoten<<endl;
	cout<<"Gioi tinh = "<<gioitinh<<endl;
	cout<<"Ngay / Thang / Nam = "<<ngay<<" / "<<thang<<" / "<<nam<<endl;
	}
	friend istream& operator>>(istream& is,nguoi& n){
		n.nhap();
	}
	friend ostream& operator<<(ostream& os,nguoi n){
		n.xuat();
	}
	bool operator < (nguoi n2){
		return this->nam<n2.nam;
	}
	bool operator == (nguoi n2){
		return this->gioitinh==n2.gioitinh;
	}
};
class sinhvien:public nguoi{
	int diemthi;
	public:
		void nhap(){
			nguoi::nhap();
			do{
				cout<<"Diem thi = ";
				cin>>diemthi;
			}while(diemthi<0);
		}
		void xuat(){
			nguoi::xuat();
			cout<<"Diem thi = "<<diemthi<<endl;
		}
		bool operator <(sinhvien s2){
			return this->diemthi<s2.diemthi;
		}
};

int main(){
nguoi a[100];
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
cout<<"Nguoi co gioi tinh Nam: \n";
for(int i=0;i<n;i++){
	if(a[i].getgioitinh()=="Nam"){
		cout<<a[i];
	cout<<"______________\n";
	}
}
int max=a[0].getnam();
for(int i=0;i<n;i++){
	if(a[i].getnam()>max){
		max=a[i].getnam();
	}
}
cout<<"______________\n";
cout<<"Thong tin nguoi co tuoi lon nhat\n";
for(int i=0;i<n;i++){
	if(a[i].getnam()==max){
		cout<<a[i];
	}
}
cout<<"______________\n";
nguoi *Arr[100];
int N;
do{
	cout<<"Nhap N = ";
	cin>>N;
}while(N<=0);
for(int i=0;i<N;i++){
	Arr[i]=new sinhvien();
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

