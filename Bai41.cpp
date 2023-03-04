#include<bits/stdc++.h>
using namespace std;
class sach{
	string tensach;
	int sl;
	int sosachmuon;
	public:
	sach(){
			tensach="";
			sl=0;
			sosachmuon=0;
		}
	sach(string t,int s,int so){
			tensach=t;
			sl=s;
			sosachmuon=so;
	}
	virtual void nhap(){
		fflush(stdin);
		cout<<"Ten sach = ";getline(cin,tensach);
		cout<<"Tong so quyen sach = ";cin>>sl;
		cout<<"So quyen sach cho muon = ";cin>>sosachmuon;
	}
	virtual void xuat(){
		cout<<"Ten sach = "<<tensach<<endl;
		cout<<"Tong so quyen sach = "<<sl<<endl;
		cout<<"So quyen sach cho muon = "<<sosachmuon<<endl;
	}
	friend istream& operator>>(istream &is,sach& s){
		s.nhap();
	}
	friend ostream& operator<<(ostream &os,sach s){
		s.xuat();
	}
	int sosachconlai(){
		return sl-sosachmuon;
	}
	bool operator >(sach s2){
		return this->sl>s2.sl;
	}
	bool operator ==(sach s2){
		return this->tensach==s2.tensach;
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
    		do{
    		cout<<"Nhap so luong tai = ";
    		
			}while(soluongtai<0);
			cin>>soluongtai;
			do{
    		cout<<"Nhap phi de tai = ";
			}while(phitai<0);
			cin>>phitai;
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
int n;
do{
	cout<<"N = ";cin>>n;
}while(n<=0);
sach a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout<<"\n___________\n";
cout<<"Mang da nhap: \n";
for(int i=0;i<n;i++){
	cout<<a[i];
}
int vt=0;
cout<<"\nSo sach con lai trong thu vien la: \n";
for(int i=0;i<n;i++){
	if(a[i].sosachconlai()>0){
		vt++;
		cout<<a[i];
	}
}
if(vt==0){
	cout<<"So sach k co! \n";
}
sach *Arr[100];
int N;
do{
	cout<<"N = ";cin>>N;
}while(N<=0);
for(int i=0;i<N;i++){
	Arr[i]=new ebook();
	Arr[i]->nhap();
}
for(int i=0;i<N-1;i++){
	for(int j=i+1;j<N;j++){
		if(Arr[i]<Arr[j]){
			sach *p;
			p=Arr[i];
			Arr[i]=Arr[j];
			Arr[j]=p;
		}
	}
}
cout<<"\nMang xap sep tang dan\n";
for(int i=0;i<N;i++){
	Arr[i]->xuat();
}
}

