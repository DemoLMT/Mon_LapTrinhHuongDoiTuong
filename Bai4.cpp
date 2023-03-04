#include<bits/stdc++.h>
using namespace std;
class hocvien{
	public:
	string ma;
	string hoten;
	int nam;
	float dtk;
	hocvien(){
		ma="";
		hoten="";
		nam=0;
		dtk=0.0;
	}
	hocvien(string m,string t,int n,float d){
		ma=m;
		hoten=t;
		nam=n;
		dtk=d;
	}
	friend istream& operator>> (istream& is,hocvien& hv){
	fflush(stdin);
	cout<<"\n Ma hoc vien:";getline(is,hv.ma);fflush(stdin);
	cout<<"\n Ho ten:";getline(is,hv.hoten);fflush(stdin);
	cout<<"\n Nam hoc:";is>>hv.nam;fflush(stdin);
	cout<<"\n Diem tong ket:";is>>hv.dtk;
	return is;
	}
	friend ostream& operator<<(ostream& os,hocvien hv){
	os<<"\n "<<hv.ma<<setw(15)<<hv.hoten<<setw(15)<<hv.nam<<setw(20)<<hv.dtk;
	return os;
	}
	bool operator >(int x){
		return dtk>x;
	}
	bool operator <(int n){
		return nam<n;
	}
};
bool sapxeptang(hocvien a,hocvien b){
	return a.dtk<b.dtk;
}
int main(){
hocvien a[100];
int n;
do{
	cout<<"n= ";cin>>n;
}while(n<=0);
cout<<"\na, Nhap vao danh sach "<<n<<" hoc vien\n";
for(int i=0;i<n;i++){
	cout<<"hoc vien "<<i+1;
	cin>>a[i];
}
int dem=0;
cout<<"\nb, Danh sach vua nhap la: "<<endl;
cout<<"Ma hoc vien"<<setw(15)<<"ho ten"<<setw(15)<<"Nam sinh"<<setw(20)<<"Diem tong ket\n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\nc, Sap xep danh sach hv dtk tang dan:\n";
sort(a,a+n,sapxeptang);
for(int i=0;i<n;i++){
	cout<<a[i];
	}
cout<<"\nd, Dem so nguoi co dtk>5.0 la:\n";
for(int i=0;i<n;i++){
	if(a[i].dtk<5.0) dem++;
	}
	cout<<dem;
}

