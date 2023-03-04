#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class sophuc{
	int phanthuc,phanao;
	public:
		void nhap(){
			cout << "Nhap phan thuc : "; cin >> phanthuc;
			cout << "Nhap phan ao : "; cin >> phanao;
		};
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
			cout<<"Moi ban nhap phan thuc : ";
			is>>sp.phanthuc;
			cout<<"Moi ban nhap phan ao : ";
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
		};
int main(){
int n;
sophuc a[100];
cout << "nhap n = ";
cin >> n; cout << endl;
for( int i =0;i<n;i++) {
	cin >> a[i];
	cout << endl;
}
cout<<"\n__________\n";
cout<<"Mang sau khi nhap: \n";
for (int i=0;i<n;i++) {
	cout << a[i] << endl;
}
sophuc tong(0,1);
cout<<tong;
for(int i=0;i<n;i++){
	tong=tong+a[i];
}
cout<<"Tong = "<<tong<<endl;
sophuc hieu(0,1);
cout<<"Hieu = \n";
for(int i=0;i<n;i++){
	hieu=hieu-a[i];
}
cout<<"Hieu = "<<hieu<<endl;
}

