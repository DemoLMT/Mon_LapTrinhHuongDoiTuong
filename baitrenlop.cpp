#include<bits/stdc++.h>
using namespace std;
class PS{
	int tu,mau;
	static int dem;
	public:
		PS(){
			dem++;
			tu=0;
			mau=1;
		}
		PS(int t,int m){
			dem++;
			tu=t;
			mau=m;
		}
		friend ostream& operator<<(ostream& os,PS ps){
			os<<ps.tu<<"/"<<ps.mau<<endl;
			return os;
		}
		friend istream& operator >>(istream& is,PS& ps){
			cout<<"Tu=";
			is>>ps.tu;
			cout<<"Mau=";
			is>>ps.mau;
			return is;
		}
		//phep cong ps1+ps2
		PS operator+(PS ps2){
			int t=tu*ps2.mau+ps2.tu*mau;
			int m=this->mau*ps2.mau;
			return PS(t,m);
		}
		//phep tru 2 ps
		PS operator-(PS ps2){
			int t=tu*ps2.mau-ps2.tu*mau;
			int m=this->mau*ps2.mau;
			return PS(t,m);
		}
		//phep nhan 2 ps
		PS operator*(PS ps2){
			int t=tu*ps2.tu;
			int m=this->mau*ps2.mau;
			return PS(t,m);
		}
		//phep nhan 1 ps vs 1 so nguyen
		friend PS operator*(PS ps1,int n){
			int t=ps1.tu*n;
			int m=ps1.mau;
			return PS(t,m);
		}
		//phep cong 1 ps vs 1 so nguyen
		friend PS operator+(PS ps1,int n){
			int t=ps1.tu+n*ps1.mau;
			int m=ps1.mau;
			return PS(t,m);
		}
		friend PS operator+(int n,PS ps2){
			int t=n*ps2.mau+ps2.tu;
			int m=ps2.mau;
			return PS(t,m);
		}
		//phep tru 1ps vs 1 so nguyen
		friend PS operator-(PS ps1,int n){
			int t=ps1.tu-n*ps1.mau;
			int m=ps1.mau;
			return PS(t,m);
		}
		// phan ps ++
		PS operator++(){
		    tu+=mau;
			return PS(tu,mau);
		}
		PS operator--(){
			tu-=mau;
			return PS(tu,mau);
		}
		friend PS operator/(PS ps1,int n){
			int t=ps1.tu;
			int m=n*ps1.mau;
			return PS(t,m);
		}
		PS operator/(PS ps2){
			int t=tu*ps2.mau;
			int m=mau*ps2.tu;
			return PS(t,m);
		}
};
int PS::dem=0;
int main(){
PS ps1(1,3),ps2(2,3);
cout<<ps1<<ps2;
PS ps3=ps1+1;
cout<<"Tong ps1 voi 1: "<<ps3<<endl;
PS ps4=ps1+ps2;
cout<<"Tong ps1 voi ps2 "<<ps4<<endl; 
PS ps5=ps1/ps2;
cout<<"TOng ps*: "<<ps5<<endl;
}

