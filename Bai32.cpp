#include<bits/stdc++.h>
using namespace std;
class dichvu{
	private:
		string tendichvu;
	public:
		virtual void nhap(){
			rewind(stdin);
			cout<<"\nNhap vao ten dich vu: ";
			getline(cin,tendichvu);
		}
		virtual void xuat(){
			cout<<"\nDich vu la: "<<tendichvu;
		}
		float tinhtien(){
			return 0;
		}
};
class giattay:public dichvu{
	private:
		int sokg;
		float dongia;
	public:
		void nhap(){
			dichvu::nhap();
			cout<<"\nNhap vao so kg: ";
			cin>>sokg;
			cout<<"\nDon gia la: ";
			cin>>dongia;
		}
		void xuat(){
			dichvu::xuat();
			cout<<"\nSo can: "<<sokg;
			cout<<"\nDon gia: "<<dongia;
		}
		float tinhtien(){
			return sokg*dongia;
		}
};
class thuexe:public dichvu{
	private:
		int sogiothue;
		float dongia;
	public:
		void nhap(){
			dichvu::nhap();
			cout<<"\nNhap so gio thue: ";
			cin>>sogiothue;
			cout<<"\nDon gia: ";
			cin>>dongia;
		}
		void xuat(){
			dichvu::xuat();
			cout<<"\nSo gio thue la: "<<sogiothue;
			cout<<"\nDon gia la: "<<dongia;
		}
		float tinhtien(){
			return sogiothue*dongia;
		}
};
int main(){
	int m,n;
	int chon;
	dichvu*a[100];
	do{
		cout<<"\n Nhap vao so lan giat tay: ";
		cin>>m;
		cout<<"\nNhap vao so lan thue xe: ";
		cin>>n;
	}while(n<0 ||m<0);
	cout<<"\nMENU\n";
	cout<<"\n1. Nhap du lieu cho cac doi tuong dich vu GIAT TAY truoc: ";
	cout<<"\n2. Nhap du lieu cho cac doi tuong dich vu THUE XE truoc: ";
	do{
		cout<<"\nNhap vao lua chon cua ban: ";
		cin>>chon;
	}while(chon!=1 && chon!=2);
	if(chon==1){
		for(int i=0;i<m;i++){
			a[i] = new giattay();
			a[i]->nhap();
		}
		for(int i = m;i<m+n;i++){
			a[i] = new thuexe();
			a[i]->nhap();
		}
	}else if(chon == 2){
		for(int i =0;i<n;i++){
			a[i]= new thuexe();
			a[i]->nhap();
		}
		for(int i =n;i<m+n;i++){
			a[i] = new giattay();
			a[i]->nhap();
		}
	}
	cout<<"\nDanh sach da nhap la: ";
	for(int i = 0;i<m+n;i++){
		a[i]->xuat();
		cout<<"\n";
	}
	for(int i = 0 ;i<m-1;i++){
		for(int j = i+1;j<m;j++){
			if(a[i]->tinhtien()>a[j]->tinhtien()){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\nDanh sach Dich vu giat da sap xep la tang dan: ";
	for(int i = 0;i<m;i++){
		a[i]->xuat();
		cout<<"\n";
	}
	for(int i = 0 ;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]->tinhtien()<a[j]->tinhtien()){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\nDanh sach Dich vu thue da sap xep la giam dan: ";
	for(int i = 0;i<n;i++){
		a[i]->xuat();
		cout<<"\n";
	}
	return 0;
}
