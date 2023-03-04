#include<bits/stdc++.h>
using namespace std;
class sophuc{
	int phanthuc,phanao;
	public:
		void nhap();
		void xuat();
		sophuc(){
			phanthuc=0;
			phanao=0;
		}
		sophuc(int t,int a){
			phanthuc=t;
			phanao=a;
		}
		friend ostream& operator<<(ostream& os,sophuc sp){
			os<<sp.phanthuc<<"+"<<sp.phanao<<"i";
			return os;
		}
		friend istream& operator>>(istream& is,sophuc& sp){
			cout<<"Moi ban nhap phan thuc:";
			is>>sp.phanthuc;
			cout<<"Moi ban nhap phan ao: ";
			is>>sp.phanao;
		}
		sophuc operator+(sophuc sp2){
			int pt=phanthuc+sp2.phanthuc;
			int pa=phanao+sp2.phanao;
			return sophuc(pt,pa);
		}
		sophuc operator-(sophuc sp2){
			int pt=phanthuc-sp2.phanthuc;
			int pa=phanao-sp2.phanao;
			return sophuc(pt,pa);
		}
		sophuc operator*(sophuc sp2){
			int pt=phanthuc*sp2.phanthuc-phanao*sp2.phanao;
			int pa=phanthuc*sp2.phanao+phanao*sp2.phanthuc;
			return sophuc(pt,pa);
		}
		friend sophuc operator*(sophuc sp1,int n){
			int pt=n*sp1.phanthuc;
			int pa=n*sp1.phanao;
			return sophuc(pt,pa);
		}
		friend sophuc operator/(sophuc sp1,int n){
			int pt=sp1.phanthuc/n;
			int pa=sp1.phanao/n;
		}
};
void sophuc::nhap(){
	cout<<"\nMoi ban nhap phan thuc:";
	cin>>phanthuc;
	cout<<"\nMoi ban nhap phan ao: ";
	cin>>phanao;
}
void sophuc::xuat(){
	cout<<phanthuc<<"+"<<phanao<<"i";
}
int main(){
	int n;
	cout<<"Moi nhap sl so phuc: ";
	cin>>n;
	sophuc sp[n];
	for(int i=0;i<n;i++){
		cout<<"\nMoi ban nhap so phuc "<<i+1<<endl;
		cin>>sp[i];
	}
	cout<<"So phuc da nhap la"<<endl;
	for(int i=0;i<n;i++){
		cout<<sp[i]<<endl;
	}
	cout<<"Tong cac so phuc da nhap:"<<endl;
sophuc a(0,0);
for(int i=0;i<n;i++){
	a=a+sp[i];
}
cout<<"Sum: "<<a<<endl;
cout<<"Hieu cac so phuc da nhap:"<<endl;
sophuc b(0,0);
for(int i=0;i<n;i++){
	b=(sp[i])-b;
}
cout<<"Hieu: "<<b<<endl;
cout<<"Tich cac so phuc da nhap:"<<endl;
sophuc c(1,1);
for(int i=0;i<n;i++){
	c=c*sp[i];
}
cout<<"Tich: "<<c<<endl;
cout<<"Tich so phuc voi 10:"<<endl;
sophuc d(1,1);
for(int i=0;i<n;i++){
	d=d*sp[i];
}
cout<<"Tich: "<<d*10<<endl;
cout<<"Chia so phuc voi 10:"<<endl;
float u,i;
cin>>u,i;
sophuc e(u/10,i/10);
cout<<"Chia: "<<e<<endl;
}

