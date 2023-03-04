#include<bits/stdc++.h>
using namespace std;
class truongTD{
	private:
	string matruong;
	string tentruong;
	int slhs;
	int slgiai;
	public:
		void nhap();
		void xuat();
		int getslgiai(){
		return	this->slgiai;
		}
	truongTD(){
	matruong="";
	tentruong="";
	slhs=0;
	slgiai=0;
	}
	truongTD(string m,string t,int slh,int slg){
	matruong=m;
	tentruong=t;
	slhs=slh;
	slgiai=slg;
	}	
	friend istream& operator>>(istream& is,truongTD& t){
	fflush(stdin);
	cout<<"\nMa truong = ";getline(cin,t.matruong);fflush(stdin);
	cout<<"\Ten truong = ";getline(cin,t.tentruong);
	cout<<"\nSo luong TG = ";is>>t.slhs;
	cout<<"\nSo luong Giai = ";is>>t.slgiai;
	return is;
	}	
	friend ostream& operator<<(ostream& os,truongTD t){
		os<<"\n"<<t.matruong<<setw(10)<<t.tentruong<<setw(15)<<t.slhs<<setw(20)<<t.slgiai;
	return os;
	}	
	friend bool operator ==(truongTD t1,truongTD t2){
		return t1.slhs==t2.slhs;
	}
	friend bool operator <(truongTD t1,truongTD t2){
		return t1.slgiai<t2.slgiai;
	}
friend bool sapxepgiam(truongTD t1,truongTD t2);
};
bool sapxepgiam(truongTD t1,truongTD t2){
	return t1.slgiai>t2.slgiai;
}
int main(){
truongTD a[100];
int n;
do{
	cout<<"Nhap n(>0) = ";cin>>n;
}while(n<0);
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n_____________\n";
cout<<"Mang vua nhap la: \n";
 for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\n_____________\n";
cout<<"Danh sach giam dan theo sl giai la: \n";
sort(a,a+n,sapxepgiam);
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\n_____________\n";
cout<<"Thong tin truong DH co sl hstg lon nhat la: \n";
int max=a[0].getslgiai();
for(int i=0;i<n;i++){
	if(a[i].getslgiai()>max){
		max=a[i].getslgiai();
	}
}
for(int i=0;i<n;i++){
	if(a[i].getslgiai()==max){
		cout<<a[i];
	}
}
}

