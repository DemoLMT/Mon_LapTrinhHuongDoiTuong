#include<bits/stdc++.h>

using namespace std;
class NhanVien{
	string ten;
	int tuoi;
	string gt;
	public:
	virtual	void nhap(){
		cout<<"nhap ten: ";
		fflush(stdin);
		getline(cin,ten);
		cout<<"nhap tuoi: ";cin>>tuoi;
		cout<<"nhap gioi tinh: ";
		fflush(stdin);
		getline(cin,gt);
		}
	virtual	void xuat(){
		cout<< ten<<" "<<tuoi<<" "<<gt<<endl;
		}
		// khai bao ham ao
		//tinh luong
		virtual int luong(){
			return 0;
		}
};
class Congnhan: public NhanVien{
	int lngay,ngcong;
	public:
		void nhap(){
		cout<<"nhap thong tin cong nhan: "<<endl;
		NhanVien::nhap();
		cout<<"luong ngay: ";
		cin>>lngay;
		cout<<"so ngay cong: ";cin>>ngcong;
		}
		void xuat(){
			cout<<"thong tin vua nhap:"<<endl;
			NhanVien::xuat();
			cout<<lngay<<" "<<ngcong<<" "<<luong()<<endl;
		}
		int luong(){
			return lngay*ngcong;
		}
};
class Canbo: public NhanVien{
	int hsluong,phucap;
	public:
		void nhap(){
			cout<<"nhap thong tin canbo: "<<endl;
		NhanVien::nhap();
		cout<<"hsluong: ";
		cin>>hsluong;
		cout<<"phu cap: ";cin>>phucap;
		}
		void xuat(){
			cout<<"thong tin vua nhap:"<<endl;
			NhanVien::xuat();
			cout<<hsluong<<" "<<phucap<<" "<<luong()<<endl;
		}
		int luong(){
			return hsluong*1150000+phucap;
		}
		};
int main(){
 NhanVien *arr[100];
 	int m,n;
 	cout<<"nhap m va n: ";
	cin>>m>>n;
	int chon;
	do{
		cout<<"1.nhap doi tuong cong nhan truoc:"<<endl;
		cout<<"2.nhap doi tuong can bo truoc:"<<endl;
		cin>>chon;	
	}while(chon!=1 && chon!=2);
	if(chon==1){
		for(int i=0;i<m;i++){
			arr[i]= new Congnhan();
			arr[i]->nhap();
		}
		for(int i=m;i<m+n;i++){
			arr[i]=new Canbo();
			arr[i]->nhap();
		}
	}
	else {
	for(int i=0;i<n;i++){
	        arr[i]=new Canbo();
			arr[i]->nhap();
		}
		for(int i=n;i<m+n;i++){
			arr[i]= new Congnhan();
			arr[i]->nhap();
		}
		}
	cout<<"day vua nhap:"<<endl;
	for(int i=0;i<m+n;i++){
		arr[i]->xuat();
	}
	//sap xep
	cout<<"mang sau sap xep:"<<endl;
	for(int i=0;i<m+n-1;i++){
		for(int j=i+1;j<m+n;j++){
			if(arr[i]->luong()<arr[j]->luong()){
				NhanVien*p;
				p=arr[i];
				arr[i]=arr[j];
				arr[j]=p;
			}
		}
	}
	for(int i=0;i<m+n;i++){
		arr[i]->xuat();
}
}

