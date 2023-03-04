#include<bits/stdc++.h>
using namespace std;
class ATM{
public:
	int stk;
	int nm,nhh;
	string tentk;
	int sodu;
	void nhap();
	void hienthi();
	ATM(){
		stk=0;
		nm=0;
		nhh=0;
		tentk="";
		sodu=0;
	}
	ATM(int s,int n,int h,string ten,int sd){
		stk=s;
		nm=n;
		nhh=h;
		tentk=ten;
		sodu=sd;
	}
	friend istream& operator>>(istream& is,ATM& atm){
		cout<<"Moi nhap stk: ";
		is>>atm.stk;
		cout<<"Moi nhap nm: ";
		is>>atm.nm;
		cout<<"Moi nhap nhh: ";
		is>>atm.nhh;
		cout<<"Moi nhap tentk: ";
		getline(is,atm.tentk);fflush(stdin);
		cout<<"Moi ban nhap sodu:";
		is>>atm.sodu;
		return is;
	}	
	friend ostream& operator<<(ostream& os,ATM atm){
		os<<"\n"<<atm.stk<<setw(10)<<atm.nm<<setw(15)<<atm.tentk<<setw(20)<<atm.sodu;
	return os;
	}
	bool operator>(int n){
		return sodu>n;
	}
	string operator==(string ten){
		return tentk=ten;
	}
	};
void ATM::nhap(){
		cout<<"Moi nhap stk: ";
		cin>>stk;
		cout<<"Moi nhap nm: ";
		cin>>nm;
		cout<<"Moi nhap nhh: ";
		cin>>nhh;fflush(stdin);
		cout<<"Moi nhap tentk: ";
		getline(cin,tentk);fflush(stdin);
		cout<<"Moi ban nhap sodu:";
		cin>>sodu;
	}
void ATM::hienthi(){
	cout<<"\n"<<stk<<setw(10)<<nm<<setw(15)<<nhh<<setw(15)<<tentk<<setw(20)<<sodu;
}
class quanly:public ATM{
	public:
		ATM atm[100];
		int n;
		void nhap();
		void hienthi();
		void timkiem();
		void ds();

};
void quanly::nhap(){
	cout<<"So luong ATM: ";cin>>n;
	for(int i=0;i<n;i++){
	cout<<"Moi ban nhap ATM thu "<<i+1<<endl;
	atm[i].nhap();
	}
}
void quanly::hienthi(){
	cout<<"\nSTK"<<setw(10)<<"Nam mo"<<setw(15)<<"Nam het han"<<setw(15)<<"Ten tk"<<setw(20)<<"So du";
	for(int i=0;i<n;i++){
		atm[i].hienthi();
	}
}
void quanly::timkiem(){
	cout << "\nDanh sach cac ATM mo truoc nam 2010 la : " << endl;
	for(int i=0;i<n;i++){
		if(atm[i].nm<2010){
			atm[i].hienthi();
		}
	}
}
void quanly::hethan(){
	time_t t = time(0);
	cout << "\nDanh sach the ATM het han la : " << endl;
	for(int i=0;i<n;i++){
		if(atm[i].nhh< localtime( & t )->tm_year + 1900){
			atm[i].hienthi();
		}
	}
}
}
int main(){
quanly ql;
ql.nhap();
ql.hienthi();
ql.timkiem();
ql.hethan();
}

