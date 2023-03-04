#include<bits/stdc++.h>
using namespace std;
class sach{
	private:
		string ten;
		string tacgia;
		int sl;
		int nam;
	public:
		int gets1(){
			return this->sl;
		}
		int getnam(){
			return this->nam;
		}
		sach(){
			ten="";
			tacgia="";
			sl=0;
			nam=0;
		}
		sach(string t,string ta,int sl,int nam){
			ten=t;
			tacgia=ta;
			this->sl=sl;
			this->nam=nam;
		}
		virtual void nhap(){
			fflush(stdin);
			cout<<"Ten = ";getline(cin,ten);fflush(stdin);
			cout<<"Tacgia = ";getline(cin,tacgia);
			cout<<"So luong = ";cin>>sl;
			cout<<"Nam = ";cin>>nam;
		}
		virtual void xuat(){
			cout<<"Ten = "<<ten<<endl;
			cout<<"Tacgia = "<<tacgia<<endl;
			cout<<"So luong = "<<sl<<endl;
			cout<<"Nam = "<<nam<<endl;
		}
		friend istream& operator>>(istream& is,sach& s){
			s.nhap();
		}
		friend ostream& operator<<(ostream& os,sach s){
			s.xuat();
		}
		friend bool operator <(sach a,sach b){
			return a.sl<b.sl;
		}
		friend bool operator !=(sach a,sach b){
			return a.nam!=b.nam;
		}
};
class ebook:public sach{
	private:
		int soluongtai;
		int phitai;
    public:
    	ebook():sach(){
    		soluongtai=0;
    		phitai=0;
		}
    	void nhap(){
    		sach::nhap();
    		cout<<"Nhap so luong tai = ";cin>>soluongtai;
    		cout<<"Nhap phi de tai = ";cin>>phitai;
		}
	    int sotienthu(){
			return soluongtai*phitai;
		}
		void xuat(){
			sach::xuat();
			cout<<"So luong tai = "<<soluongtai<<endl;
    		cout<<"Phi de tai = "<<phitai<<endl;
    		cout<<"So tien thu dc = "<<sotienthu()<<endl;
		}
		bool operator <(ebook eb){
			return this->sotienthu()<eb.sotienthu();
		}
};
int main(){
sach s[100];
int n;
cout<<"n = ";cin>>n;
for(int i=0;i<n;i++){
	cin>>s[i];
}
cout<<"____________-Thong tin sach vua nhap-________________\n";
for(int i=0;i<n;i++){
	cout<<s[i]<<endl;
	cout<<"_____________\n";
}
cout<<"\nLoai sach co so luong lon nhat: \n";
int vt=0;
int max=s[0].gets1();
for(int i=0;i<n;i++){
	if(s[vt]<s[i]){
		vt=i;
		max=s[i].gets1();
	}
}
for(int i=0;i<n;i++){
	if(s[i].gets1()==max){
		s[i].xuat();
		cout<<"_____________\n";
	}
}
cout<<"\nSach xuat ban 2015: \n";
for(int i=0;i<n;i++){
	if(s[i].getnam()==2015){
		s[i].xuat();
		cout<<"_____________\n";
	}
}
sach *Arr[100];
int N;
do{
	cout<<"Nhap N(>0) doi tuong EBook: ";
	cin>>N;
}while(N<0);
for(int i=0;i<N;i++){
	Arr[i]=new ebook();
	Arr[i]->nhap();
}
for(int i = 0 ;i<N-1;i++){
		for(int j = i+1;j<N;j++){
			if(Arr[i]<Arr[j]){
				swap(Arr[i],Arr[j]);
			}
		}
	}
cout<<"\nMang sap xep giam dan: \n";
for(int i=0;i<N;i++){
	Arr[i]->xuat();
}
}

