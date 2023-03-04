#include<bits/stdc++.h>
using namespace std;
class hocvien{
	public:
	string hoten;
	string lop;
	float dtb;
	hocvien(){
		hoten="";
		lop="";
		dtb=0.0;
	}
	hocvien(string h,string l,float d){
		hoten=h;
		lop=l;
		dtb=d;
	}
	friend istream& operator>> (istream& is,hocvien& hv){
	fflush(stdin);
	cout<<"\nHo ten : ";getline(is,hv.hoten);fflush(stdin);cout<< endl;
	cout<<"Lop : ";getline(is,hv.hoten);fflush(stdin);cout<< endl;
	cout<<"Diem trung binh : ";is>>hv.dtb;cout<< endl;
	return is;
	}
	friend ostream& operator<<(ostream& os,hocvien hv){
	os<<"\n "<<hv.hoten<<setw(15)<<hv.lop<<setw(20)<<hv.dtb;
	return os;
	}
	bool operator >(int x){
		return dtb>x;
	}
	string operator ==(string kt){
		return lop=kt;
	}
	};
	bool sapxepgiam(hocvien a, hocvien b){
		return a.dtb<b.dtb;
	}
int main(){
hocvien a[100];
int n;
int dem = 0;
cout <<"So hoc vien : ";
cin >> n;
cout << "Nhap vao thong " << n << " hoc vien \n";
for(int i=0;i<n;i++){
	cout << "hoc vien thu "<<i+1;
	cin >>a[i];
}
cout << "Danh sach so hoc vien la : "<< endl;
cout<<"Ho ten"<< setw(15)<<"Lop"<< setw(15) << "Diem tb" << setw(15);
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\nSap xep danh sach theo thu tu giam dan:\n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
	}
cout << endl;
for(int i=0;i<n;i++){
	if(a[i].dtb>=9) dem++;
}
cout<<"So hoc sinh co diem trung binh dat loai xuat sac la : " << dem;
}

