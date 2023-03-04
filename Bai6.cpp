#include<bits/stdc++.h>
using namespace std;
class hcn{
public:
	int cd;
	int cr;
	float cv;
	float dt;
		void nhap();
		void hienthi();
	hcn(){
		cd=0;
		cr=0;
	}
	hcn(int d,int r){
	cd=d;
	cr=r;
	}
	void chuvi();
	void dientich();
	friend istream& operator>>(istream& is,hcn& h){
		cout<<"Moi nhap chieu dai: ";
		is>>h.cd;
		cout<<"Moi nhap chieu rong: ";
		is>>h.cr;
		return is;
	}	
	friend ostream& operator<<(ostream& os,hcn h){
		os<<"\n"<<h.cd<<setw(15)<<h.cr;
	return os;
	}
	bool operator > (float n){
		return cv>n;
	}
	bool operator ==(float n){
		return dt=n;
	}
	};
	void hcn::chuvi(){
		cv=1.0*(cd+cr)/2;
		cout<<"Chu vi la: "<<1.0*cv;
	}
	void hcn::dientich(){
		dt=1.0*cd*cr;
		cout<<"Dien tich la: "<<1.0*dt;
	}
int main(){
hcn a[100];
int n;
do{
	cout<<"Nhap vao n hinh chu nhat : ";
	cin>>n;
}while(n<=0);
cout<<"\na, Nhap vao danh sach "<<n<<" hcn\n";
for(int i=0;i<n;i++){
	cout<<"hcn"<<i+1<<endl;
	cin>>a[i];
}
cout<<"\nb, Danh sach vua nhap la: "<<endl;
cout<<"Chieu dai"<<setw(15)<<"Chieu rong"<<endl;
for(int i=0;i<n;i++){
	cout<<"HCN thu "<<i+1<<" "<<a[i]<<endl;
}
for(int i=0;i<n;i++){
	cout<<"Chu vi hcn thu "<<i+1<<" la :" << endl;
a[i].chuvi();
cout<<"\t";
a[i].dientich();
cout<<endl;
}
}

