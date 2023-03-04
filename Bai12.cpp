#include<bits/stdc++.h>
using namespace std;
class hv{
	string ma;
	string mau;
	int sl;
	float canh;
	public:
		void nhap();
		void xuat();
	float dt(){
		return canh*canh;
	}
	hv(){
		ma="";
		mau="";	
		sl=0;
		canh=0.0;
		
	}
	hv(string ms,string m,int sl,int c){
		ma=ms;
		mau=m;
		sl=this->sl;
		canh=c;
	}
	friend istream& operator>> (istream& is,hv& h){
	fflush(stdin);
	cout<<"\n Ma so:";getline(is,h.ma);fflush(stdin);
	cout<<"\n Mau:";getline(is,h.mau);fflush(stdin);
	cout<<"\n Sl:";is>>h.sl;
	cout<<"\n Canh:";is>>h.canh;
	return is;
	}
	friend ostream& operator<<(ostream& os,hv h){
	os<<"\n "<<h.ma<<setw(15)<<h.mau<<setw(15)<<h.sl<<setw(20)<<h.canh;
	return os;
	}
	bool operator ==(hv h2){
		return this->mau==h2.mau;
	}
	bool operator >(hv h2){
		return this->sl==h2.sl;
	}
};
int main(){
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0);
hv a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n__________\n";
cout<<"Mang sau khi nhap: \n";
for (int i=0;i<n;i++) {
	cout << a[i] << endl;
}
cout<<"Hinh vuong co dt >36: \n";
int dk=0;
for(int i=0;i<n;i++){
	if(a[i].dt()>36){
		dk=i;
		cout<<a[i];
	}
}
if(dk==0){
	cout<<"K co hinh vuong thoa man!";
}
}

