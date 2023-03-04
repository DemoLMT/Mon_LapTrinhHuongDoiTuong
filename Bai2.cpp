#include<bits/stdc++.h>
using namespace std;
class giaovien{
	public:
	string hoten;
	int nam;
	string monhoc;
	giaovien(){
		hoten="";
		nam=0;
		monhoc="";
	}
	giaovien(string t,int n,string m){
		hoten=t;
		nam=n;
		monhoc=m;
	}
	friend istream& operator>> (istream& is,giaovien& gv){
	fflush(stdin);
	cout<<"\n Ho ten:";getline(is,gv.hoten);fflush(stdin);
	cout<<"\n Nam tot nghiep:";cin>>gv.nam;fflush(stdin);
	cout<<"\n Mon hoc:";getline(is,gv.monhoc);fflush(stdin);
	return is;
	}
	friend ostream& operator<<(ostream& os,giaovien gv){
	os<<"\n "<<gv.hoten<<setw(15)<<gv.nam<<setw(15)<<gv.monhoc;
	return os;
	}
	bool operator >(int x){
		return nam>x;
	}
	string operator ==(string mon){
		return monhoc=mon;
	}
};
int main(){
giaovien a[100];
int n;
do{
	cout<<"n= ";cin>>n;
}while(n<=0);
cout<<"\nNhap vao danh sach "<<n<<" giao vien\n";
for(int i=0;i<n;i++){
	cout<<"giao vien "<<i+1;
	cin>>a[i];
}
int dem=0;
cout<<"\nDanh sach vua nhap la: "<<endl;
cout<<"Ho ten"<<setw(15)<<"Nam tot nghiep"<<setw(15)<<"Mon giang day\n";
for(int i=0;i<n;i++){
    dem++;
	cout<<a[i];
}
cout<<"\nSo giao vien day mon toan:\n"<<dem;
cout<<"\n Thong tin GV Toan la:"<<endl;
for(int i=0;i<n;i++){
	if(a[i].monhoc=="Toan"){
		cout<<a[i];
	}
}
cout<<"\nSap xep giao vien giam dan so cong tac:\n";
for(int i=0;i<n;i++){
		if(a[i].nam<a[i+1].nam){
	giaovien tmp=a[i];
	a[i]=a[i+1];
	a[i+1]=tmp;
	}
	cout<<a[i];
	}
}

