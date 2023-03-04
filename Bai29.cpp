#include<bits/stdc++.h>
using namespace std;
class ps{
	int tu;
	int mau;
	public:
		ps(){
			tu=0;
			mau=1;
		}
		ps(int t,int m){
			tu=t;
			mau=m;
		}
		int ucln(int tu,int mau){
	if(mau==0) return tu;
	return ucln(mau,tu%mau);
}
		void nhap(){
			cout<<"Tu = ";cin>>tu;
			cout<<"Mau = ";cin>>mau;
		}
		void xuat(){
			cout<<"\n"<<tu<<"/"<<mau<<endl;
		}
		
		friend istream& operator>>(istream &is,ps &ps){
			ps.nhap();
			return is;
		}
		friend ostream & operator <<(ostream& os,ps ps){
			ps.xuat();
			return os;
		}
		
		//phep cong ps1+ps2
		ps operator+(ps ps2){
			int t=tu*ps2.mau+ps2.tu*mau;
			int m=this->mau*ps2.mau;
			return ps(t/ucln(t,m),m/ucln(t,m));
		}
		//phep tru 2 ps
		ps operator-(ps ps2){
			int t=tu*ps2.mau-ps2.tu*mau;
			int m=this->mau*ps2.mau;
			return ps(t/ucln(t,m),m/ucln(t,m));
		}
		//phep nhan 2 ps
		ps operator*(ps ps2){
			int t=tu*ps2.tu;
			int m=this->mau*ps2.mau;
			return ps(t/ucln(t,m),m/ucln(t,m));
		}
		//phep nhan 1 ps vs 1 so nguyen
		friend ps operator*(ps ps1,int n){
			int t=ps1.tu*n;
			int m=ps1.mau;
			return ps(t,m);
		}
		//phep cong 1 ps vs 1 so nguyen
		friend ps operator+(ps ps1,int n){
			int t=ps1.tu+n*ps1.mau;
			int m=ps1.mau;
			return ps(t,m);
		}
		friend ps operator+(int n,ps ps2){
			int t=n*ps2.mau+ps2.tu;
			int m=ps2.mau;
			return ps(t,m);
		}
		//phep tru 1ps vs 1 so nguyen
		friend ps operator-(ps ps1,int n){
			int t=ps1.tu-n*ps1.mau;
			int m=ps1.mau;
			return ps(t,m);
		}
		// phan ps ++
		ps operator++(){
		    tu+=mau;
			return ps(tu,mau);
		}
		ps operator--(){
			tu-=mau;
			return ps(tu,mau);
		}
		friend ps operator/(ps ps1,int n){
			int t=ps1.tu;
			int m=n*ps1.mau;
			return ps(t,m);
		}
		ps operator/(ps ps2){
			int t=tu*ps2.mau;
			int m=mau*ps2.tu;
			return ps(t/ucln(t,m),m/ucln(t,m));
		}
	
};

int main(){
int n;
cout<<"N = ";cin>>n;
ps a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\nPhan so sau nhap: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
ps sum(0,1);
for(int i=0;i<n;i++){
	sum=sum+a[i];
}
cout<<"Tong cac so ps la =  "<<sum<<endl;
ps hieu(0,1);
for(int i=0;i<n;i++){
	hieu=hieu+a[i];
}
cout<<"Hieu cac ps la =  "<<hieu<<endl;
ps tich(1,1);
for(int i=0;i<n;i++){
	tich=tich*a[i];
}
cout<<"Tich cac ps la =  "<<tich<<endl;
cout<<"Nhan phan so voi 10: \n";
for(int i=0;i<n;i++){
	a[i]=a[i]*10;
	cout<<a[i];
}
cout<<"tang phan len 1: \n";
for(int i=0;i<n;i++){
	a[i]=a[i]++;
	
}
cout<<"Mang sau nhap: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
}

