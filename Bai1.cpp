#include<bits/stdc++.h>
using namespace std;
class date{
	public:
	int ngay,thang,nam;
	void nhap(){
		cout<<"Ngay ";cin>>ngay;
		cout<<"Thang ";cin>>thang;
		cout<<"Nam ";cin>>nam;
	}
	void xuat(){
		cout<<" "<<ngay<<"/"<<thang<<"/"<<nam;
	}

};
class phieunhap:public date	
{
	public:
		string tenhang;
		int ngaynhap;
		int soluong;
		
		phieunhap(){
			tenhang ="";
			ngaynhap=0;
			soluong=0;
		}
		phieunhap(string t,int d,int sl){
			tenhang=t;
			ngaynhap=d;
			soluong=sl;
		}
	friend istream& operator>> (istream& is,phieunhap& pn){
	cin.ignore(1);
	cout<<"\n Ten Hang:";getline(is,pn.tenhang);fflush(stdin);
	cout<<"\n Ngay Nhap:";cin>>pn.ngaynhap;
	cout<<"\n So luong:";cin>>pn.soluong;
	return is;
	}
	friend ostream& operator<<(ostream& os,phieunhap pn){
	os<<"\n "<<pn.tenhang<<setw(15)<<pn.ngaynhap<<setw(15)<<pn.soluong;
	return os;
	}
	bool operator >(int x){
		return soluong>x;
	}
	string operator==(string mathang){
		return tenhang=mathang;
	}
};
int main(){
phieunhap a[100];
int n;
do{
	cout<<"n= ";cin>>n;
}while(n<=0);
cout<<"\nNhap vao danh sach "<<n<<" phieu nhap\n";
for(int i=0;i<n;i++){
	cout<<"phieu thu "<<i+1;
	cin>>a[i];
}
cout<<"\nDanh sach vua nhap la: "<<endl;
cout<<"Ten hang"<<setw(15)<<"Ngay nhap"<<setw(15)<<"So luong\n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
cout<<"\nThong tin nhung phieu hang thuoc mat hang Gia dung:"<<endl;
for(int i=0;i<n;i++){
	if(a[i].tenhang=="gia dung"){
		cout<<a[i];
	}
}
cout<<"\nThong tin cac phieu nhap co sl >100 la:"<<endl;
for(int i=0;i<n;i++){
	if(a[i].soluong>100){
		cout<<a[i];
	}
};
}

