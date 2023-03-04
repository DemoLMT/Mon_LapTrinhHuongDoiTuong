#include<bits/stdc++.h>
using namespace std;
class hocsinh{
	private:
		string hoten;
		string lop;
		int toan;
		int van;
		int anh;
	public:
		
		virtual void nhap(){
			fflush(stdin);
			cout<<"Ho ten = ";getline(cin,hoten);fflush(stdin);
			cout<<"Lop = ";getline(cin,lop);
			cout<<"\n Nhap toan = ";cin>>toan;
	        cout<<"\n Nhap van = ";cin>>van;
            cout<<"\n Nhap anh = ";cin>>anh;
		}
		virtual void xuat(){
			cout<<"Ho ten = "<<hoten<<endl;
			cout<<"Lop = "<<lop<<endl;
			cout<<"Toan = "<<toan<<endl;
	        cout<<"Van = "<<van<<endl;
            cout<<"Anh = "<<anh<<endl;
		}
		friend istream& operator>>(istream& is,hocsinh& hs){
			hs.nhap();
		}
		friend ostream& operator<<(ostream& os,hocsinh hs){
			hs.xuat();
		}
		float tinhdt(){
			return (toan+van+anh)/3;
		}
		bool operator<(hocsinh hs){
		return (this->tinhdt()<hs.tinhdt());
	}
	friend bool operator==(hocsinh a,hocsinh b);
};
bool operator==(hocsinh a,hocsinh b){
		return a.toan=b.toan;
	}
class hocsinhuutien:public hocsinh{
	private:
		float diemuutien;
	public:
		
	void nhap(){
	hocsinh::nhap();
	cout<<"diem uu tien = ";cin>>diemuutien;
	}	
	 float tongdiem(){
			return hocsinh::tinhdt()*3+diemuutien;
	}
	void xuat(){
		hocsinh::xuat();
		cout<<"diem uu tien = "<<diemuutien<<endl;
		cout<<"tong diem = "<<hocsinhuutien::tongdiem()<<endl; 
	}
	friend bool operator >(hocsinhuutien a,hocsinhuutien b);
};
bool operator >(hocsinhuutien a,hocsinhuutien b){
	return a.tongdiem()>b.tongdiem();
}
int main(){
hocsinh hs[100];	
int n;
cout<<"n = ";cin>>n;
for(int i=0;i<n;i++){
	cin>>hs[i];
}
cout<<"Thong tin hocsinh da nhap:"<<endl;
for(int i=0;i<n;i++){
	cout<<hs[i];
}
int vt=0;
cout<<"Danh sach hs tinh diem trung binh>=5:\n";
for(int i=0;i<n;i++){
	if(hs[i].tinhdt()>=5){
		vt=i;
		hs[i].xuat();
	}
}
hocsinh *Arr[100];
int M,N;
cout<<"Moi nhap M va N = ";
cin>>M>>N;
for(int i=0;i<M+N;i++){
	if(i<M){
		Arr[i]=new hocsinh();
		Arr[i]->nhap();
	}
	else{
		Arr[i]=new hocsinhuutien();
		Arr[i]->nhap();
	}
}
cout<<"__________________________________";
for(int i=0;i<M+N;i++){
	Arr[i]->xuat();
}
}

