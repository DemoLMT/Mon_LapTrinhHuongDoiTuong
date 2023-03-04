#include<bits/stdc++.h>

using namespace std;

class CanBo{
	private:
		string ten;
		float hsluong;
		float luongcb;
	public:
		virtual void Nhap() {		
		fflush(stdin);
		cout<<"Ten = ";getline(cin,ten);
		cout<<"HSLuong = ";cin>>hsluong;
		cout<<"LuongCB = ";cin>>luongcb;
		}
		virtual void Xuat() {	
		cout<<"Ten= "<<ten<<endl;
		cout<<"HSLuong= "<<hsluong<<endl;
		cout<<"LuongCB= "<<luongcb<<endl;
		}
		virtual float luong() 
		{
			return hsluong*luongcb;
		}
};	
class GiaoVien : public CanBo
{
	int hsphucap;
	public:
		void Nhap()
		{
			CanBo::Nhap();
			cout << "Phu cap = "; cin >> hsphucap;
		}
		float luong(){
			return CanBo::luong() + hsphucap*CanBo::luong();
		}
		void Xuat()
		{
			CanBo::Xuat();
			cout << "Luong Giao Vien = " << GiaoVien::luong() << endl;		
		}
		
};
class NhanVien : public CanBo
{
	public:
	int thuong;
		void Nhap()
		{
			CanBo::Nhap();
			cout << "Thuong = "; cin >> thuong;
		}
		float luong(){
			return CanBo::luong() + thuong;
		}
		void Xuat()
		{
			CanBo::Xuat();
			cout << "Luong Nhan Vien = " << NhanVien::luong() << endl;		
		}
		
};

int main(){
CanBo * Arr[100];
int m,n;
cout<<"Nhap m,n = ";cin>> m >>n;
int chon;
//tao menu chon   
do{
	cout<<"1. nhap du lieu cho Giao vien truoc"<<endl;
	cout<<"2. nhap du lieu cho Nhan vien truoc"<<endl;
	cin>>chon;
}while(chon!=1 && chon!=2);
	if(chon==1){
		for(int i=0;i<m;i++){
			Arr[i]=new GiaoVien();
			Arr[i]->Nhap();
		}
		for(int i=m;i<m+n;i++){
			Arr[i]=new NhanVien();
			Arr[i]->Nhap();
		}
		}
	else{
	for(int i=0;i<n;i++){
			Arr[i]=new NhanVien();
			Arr[i]->Nhap();
		}
    for(int i=n;i<m+n;i++){
			Arr[i]=new GiaoVien();
			Arr[i]->Nhap();
		} 
		}
	cout<<"_Thong tin da nhap_"<<endl;
	for(int i=0;i<m+n;i++){
		Arr[i]->Xuat();
	}
	int vt=0;
	float min=Arr[0]->luong();
	float max=Arr[0]->luong();
	
	for(int i=0;i<m;i++){
		if(Arr[vt]>Arr[i]){
			vt=i;
			min=Arr[i]->luong();
		}}
	cout<<"\nGiao vien co luong thap nhat"<<endl;	
	for(int i=0;i<m;i++){
			if(Arr[i]->luong()==min){
		Arr[i]->Xuat();
		}
	}
	for(int i=0;i<m;i++){
		if(Arr[vt]<Arr[i]){
			vt=i;
			max=Arr[i]->luong();
		}
	}
	cout<<"\nGiao vien co luong thap nhat"<<endl;
	for(int i=0;i<m;i++){
		if(Arr[i]->luong()==max){
		Arr[i]->Xuat();
		}
	}
}

