#include<bits/stdc++.h>
using namespace std;
class nhanvien{
	private:
    string hoten;
	string diachi;
	float hesoL;
	public:
	float gethesoL(){
		return this->hesoL;
	}
	nhanvien(){
		hoten="";
		diachi="";
		hesoL=0.0;
	}
	nhanvien(string h,string d,float heso){
		hoten=h;
		diachi=d;
		hesoL=heso;
		
	}	
	friend istream& operator>> (istream& is,nhanvien& nv){
	fflush(stdin);
	cout<<"\nHo ten:";getline(is,nv.hoten);fflush(stdin);
	cout<<"\nDia chi:";getline(is,nv.hoten);
	cout<<"\nHe so luong:";is>>nv.hesoL;
	return is;
	}
	friend ostream& operator<<(ostream& os,nhanvien nv){
	os<<"\n "<<nv.hoten<<setw(15)<<nv.diachi<<setw(20)<<nv.hesoL;
	return os;
	}
	};
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0);
nhanvien a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n__________\n";
cout<<"Mang sau khi nhap: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}

for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[i].gethesoL()<a[j].gethesoL()){
		nhanvien p=a[i];
			a[i]=a[j];
			a[j]=p;
		}
	}
}
cout<<"\nMang sau khi sx giam dan la: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\nNhan vien co luong cao nhat: \n";
int vt=0;
float max=a[0].gethesoL();
for(int i=0;i<n;i++){
	if(a[vt].gethesoL()<a[i].gethesoL()){
		vt=i;
		max=a[i].gethesoL();
}
}
for(int i=0;i<n;i++){
	if(a[i].gethesoL()==max){
		cout<<a[i];
	}
}
}

