#include<iostream>
#include<string>
using namespace std;
class maytinh{
	string hangsx;
	int namxb;
	int sl;
	float gia;
public:
	maytinh(){
		hangsx="";
		namxb=0;
		sl=0;
		gia=0;
	}
	maytinh(string hangsx, int namxb,int sl,float gia){
		this->hangsx=hangsx;
		this->namxb=namxb;
		this->sl=sl;
		this->gia=gia;
	}
	int getsl(){
		return sl;
	}
		int getgia(){
		return gia;
	}
	virtual void nhap(){
		cout<<"Hang sx: ";
		fflush(stdin);
		getline(cin,hangsx);
		cout<<"Nam xb: ";
		cin>>namxb;
		cout<<"So luong: ";
		cin>>sl;
		cout<<"Gia: ";
		cin>>gia;
		
	}
	virtual	void xuat(){
		cout<<"\nHang sx: "<<hangsx;
		cout<<"\nNam xb: "<<namxb;
		cout<<"\nSo luong: "<<sl;
		cout<<"\nGia: "<<gia<<endl;;
		
	}
	friend istream &operator>>(istream &is,maytinh &mt ){
		mt.nhap();
		return is;
	}

			friend ostream &operator<<(ostream &os,maytinh mt ){
		mt.xuat();
		return os;
	}
	bool operator<(maytinh mt){
		return this->gia<mt.gia;
	}
		bool operator>(maytinh mt){
		return this->sl>mt.sl;
	}
};
class maychu:public maytinh{
	string dichvu;
	float giathue;
public:
	void nhap(){
		maytinh::nhap();
		cout<<"Dich vu: ";
		fflush(stdin);
		getline(cin,dichvu);
		cout<<"Gia thue: ";
		cin>>giathue;
	}
	void xuat(){
		maytinh::xuat();
		cout<<"Dich vu: "<<dichvu;
		fflush(stdin);
		getline(cin,dichvu);
		cout<<"Gia thue: "<<giathue<<endl;
		cin>>giathue;
	}
	bool operator==(maychu mc){
		return this->dichvu==mc.dichvu;
	}
	bool operator>(maychu mc){
		return this->maytinh::getgia()>mc.maytinh::getgia();
	}
	string getdichvu(){
		return dichvu;
	}
};
int main (){
	maytinh a[100];
	int n;
	do{
		cout<<"Nhap n may: ";
		cin>>n;
	}while(n<0);
	
	for(int i=0;i<n;i++){
		cout<<"Nhap vao may thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\nKet qua la: "<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
		cout<<endl;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].getsl()>a[j].getsl()){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\nKet qua sau khi sap xep tang dan la: "<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
		cout<<endl;
	}
	int vt=0;
	int max=a[0].getgia();
	for(int i=0;i<n;i++){
		if(a[vt].getgia()<a[i].getgia()){
			vt=i;
			max=a[i].getgia();
			
		}
	}
	cout<<"\nThong tin may co gia tien cao nhat: "<<endl;
		for(int i=0;i<n;i++){
			if(a[i].getgia()==max){
				a[i].xuat();
				cout<<endl;
			}
		}
	
	maychu* ar[100];
	int N;
	do{
		cout<<"Nhap vao N may chu: ";
		cin>>N;
	}while(N<0);
	cout<<"Nhap thong tin may chu: "<<endl;
	for(int i=0;i<N;i++){
		ar[i]=new maychu();
		ar[i]->nhap();
	}
	cout<<"Thong tin may chu: "<<endl;
	for(int i=0;i<N;i++){
		ar[i]->xuat();
		cout<<endl;
	}
	cout<<"May chu la DNS va co gia tien lon hon 1000000: "<<endl;
	for(int i=0;i<N;i++){
		if(ar[i]->getdichvu()=="DNS"&&ar[i]->maytinh::getgia()>1000000){
			ar[i]->xuat();
			cout<<endl;
		}
	
	}
	
	return 0;
}

