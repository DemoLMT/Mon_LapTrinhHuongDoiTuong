#include<bits/stdc++.h>
using namespace std;
class lophoc{
	string mal;
	string tenl;
	int sohv;
public:
	lophoc(){
		mal="";
		tenl="";
		sohv=0;
	}
	lophoc(string mal,string tenl, int sohv){
		this->mal=mal;
		this->tenl=tenl;
		this->sohv=sohv;
	}
	int getsohv(){
		return sohv;
	}
	string getmal(){
		return mal;
	}
	virtual void nhap(){
		cout<<"Ma lop: ";
		fflush(stdin);
		getline(cin,mal);
			cout<<"Ten lop: ";
		fflush(stdin);
		getline(cin,tenl);
			cout<<"So hoc vien: ";
			cin>>sohv;
	}
		virtual void xuat(){
		cout<<"\nMa lop: "<<mal<<endl;
			cout<<"\nTen lop: "<<tenl<<endl;
			cout<<"\nSo hoc vien: "<<sohv<<endl;
		
	}
	friend istream &operator>>(istream &is, lophoc &lh){
		lh.nhap();
		return is;
	}
		friend ostream &operator<<(ostream &os, lophoc lh){
		lh.xuat();
		return os;
	}
	bool operator<(lophoc lh){
		return this->sohv<lh.sohv;
	}
		bool operator==(lophoc lh){
		return this->tenl==lh.tenl;
	}
};

class hocvien:public lophoc{
	string tenhv;
	lophoc lh;
public:
	void nhap(){
			cout<<"Ten hoc vien";
			fflush(stdin);
			getline(cin, tenhv);
			lophoc::nhap();
			}
	void nhap(lophoc lh){
			cout<<"Ten hoc vien";
			fflush(stdin);
			getline(cin, tenhv);
			lh.nhap();
			}	
	void xuat(){
			lophoc::xuat();
			cout<<"Ten hoc vien"<<tenhv<<endl;
		
		}
		void xuat(lophoc lh){
			lh.getmal();
		}
		string getmalop(){
			return lophoc::getmal();
		}
		
		int getsohocvien(){
			return lophoc::getsohv();
		}
		bool operator<(int n){
			return this->getsohocvien()<n;
		}
		bool operator==(int n){
			return this->getsohocvien()==n;
		}	
};
int main(){
	lophoc a[100];
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n<0);
	 for(int i=0;i<n;i++){
	 	cout<<"Nhap lop hoc thu "<<i+1<<endl;
	 	a[i].nhap();
	 }
	 
	 cout<"\nKet qua: \n";
	 for(int i=0;i<n;i++){
	 	a[i].xuat();
	 	cout<<endl;
	 }
	 for(int i=0;i<n-1;i++){
	 	for(int j=i+1;j<n;j++){
	 		if(a[i].getsohv()>a[j].getsohv()){
	 			swap(a[i],a[j]);
	 			
			 }
		 }
	 }
	  cout<"\nKet qua theo thu tu tang: ";
	 for(int i=0;i<n;i++){
	 	a[i].xuat();
	 	cout<<endl;
	 }
	 int vt=0;
	 int max=a[0].getsohv();
	  for(int i=0;i<n;i++){
	  	if(a[vt].getsohv()<a[i].getsohv()){
	  		vt=i;
	  		max=a[i].getsohv();
		  }
	 }
	 cout<<"Lop co hoc vien lon nhat trong lop: "<<endl;
	  for(int i=0;i<n;i++){
	  	if(a[i].getsohv()==max){
	  		a[i].xuat();
	  		cout<<endl;
		  }}
	
}

