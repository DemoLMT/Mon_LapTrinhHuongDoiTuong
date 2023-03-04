#include<bits/stdc++.h>
using namespace std;
class PS{
	int tu,mau;
	public:
		PS(){
			tu=0;
			mau=1;
		}
		PS(int t,int m){
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
};
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0);
PS a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n__________\n";
cout<<"Mang sau khi nhap: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
PS tong(0,1);
cout<<tong;
for(int i=0;i<n;i++){
	tong=tong+a[i];
}
cout<<"Tong = "<<tong<<endl;
PS hieu(0,1);
cout<<"Hieu = \n";
for(int i=0;i<n;i++){
	hieu=hieu-a[i];
}
cout<<"Hieu = "<<hieu<<endl;
}

