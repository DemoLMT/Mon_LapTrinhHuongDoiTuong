#include<bits/stdc++.h>
using namespace std;
class canbo{
	string ten;
	float hsl;
	int luong;
	public:
		virtual void nhap(){
			fflush(stdin);
			cout<<"Ten = ";getline(cin,ten);
			cout<<"He so luong = ";cin>>hsl;
			cout<<"Luong = ";cin>>luong;
		}
		virtual void xuat(){
			cout<<"Ten = "<<ten<<endl;
			cout<<"He so luong = "<<hsl<<endl;
			cout<<"Luong = "<<luong<<endl;
		}
		canbo(){
			ten="";
			hsl=0.0;
			luong=0;
		}
		canbo(string t,int h,int l){
			ten=t;
			hsl=h;
			luong=l;
		}
	friend istream& operator>> (istream& is,canbo& c){
    c.nhap();
	return is;
	}
	friend ostream& operator<<(ostream& os,canbo c){
	c.xuat();
	return os;
	}
	int luongc(){
		return hsl*luong;
	}
	bool operator >(canbo c2){
		return this->hsl>c2.hsl;
	}
	bool operator==(canbo c2){
		return this->luongc()==c2.luongc();
	}
};
class giaovien:public canbo{
	float phucap;
	public:
		void nhap(){
			canbo::nhap();
			cout<<"Phu cap = ";cin>>phucap;
		}
		int luongc(){
			return canbo::luongc()*(1+phucap);
		}
};
int main(){
canbo a[100];
int n;
do{
	cout<<"Nhap n = ";cin>>n;
}while(n<=0);
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n______________\n";
cout<<"Mang sau nhap: \n";
cout<<"______________\n";
for(int i=0;i<n;i++){
	cout<<a[i];
	cout<<"______________\n";
}
int max=a[0].luongc();
for(int i=0;i<n;i++){
	if(a[i].luongc()>max){
		max=a[i].luongc();
	}
}
cout<<"Thong tin Can bo co luong cao nhat = \n";
for(int i=0;i<n;i++){
	if(a[i].luongc()==max){
		cout<<a[i];
	}
}
canbo *ar[100];
 	int M,N;
 	cout<<"nhap m va n: ";
	cin>>M>>N;
	for(int i=0;i<M+N;i++){
		if(i<M)
		ar[i]= new canbo();
		else ar[i]=new giaovien();
		ar[i]->nhap();
	}
	int vt=0;
	cout<<"Mang vua nhap co luong >3.000.000: \n"<<endl;
	for(int i=0;i<M+N;i++){
		if(ar[i]->luongc()>3000000){
			vt++;
		ar[i]->xuat();	
		}	
	}
	if(vt==0) cout<<"K tim thay!";
}

