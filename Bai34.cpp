#include<bits/stdc++.h>
using namespace std;
class tamgiac{
	float a;
	float b;
	float c;
	public:
	tamgiac(){
		a=0;
		b=0;
		c=0;
	}
	tamgiac(int a,int b,int c){
		this->a=a;
		this->b=b;
		this->c=c;
	}
	float chuvi(){
		return (a+b+c);
	}
	float dientich(){
		float cv=(a+b+c)/2;
		return sqrt(cv*(cv-a)*(cv-b)*(cv-c));
	}	
	virtual	void nhap(){
	cout<<"\n Nhap canh a:";cin>>a;
	cout<<"\n Nhap canh b:";cin>>b;
    cout<<"\n Nhap canh c:";cin>>c;
		}
	virtual	void xuat(){
		cout<<"Canh a"<<setw(10)<<"Canh b"<<setw(15)<<"Canh c"<<endl;
		cout<<"\n "<<a<<setw(10)<<b<<setw(15)<<c<<endl;
	}
	friend istream& operator>> (istream& is,tamgiac& tg){
	tg.nhap();
	return is;
	}
	friend ostream& operator<<(ostream& os,tamgiac tg){
	tg.xuat();
	return os;
	}
	bool operator<(tamgiac tg){
		return (this->dientich()<tg.dientich());
	}
	bool operator==(tamgiac tg){
		return (this->chuvi()==tg.chuvi());
	}
};
class langtru:public tamgiac{
	int chieucao;
	public:
		langtru():tamgiac(){
			chieucao=0;
		}
	 langtru(int a,int b,int c,int chieucao):tamgiac(a,b,c){
		this->chieucao=chieucao;
	}
		friend bool operator <(langtru a,langtru b);
		float dientich(){
			return chieucao*tamgiac::chuvi()+2*tamgiac::dientich();
		}
		void nhap(){
			tamgiac::nhap();
			cout<<"chieu cao = ";cin>>chieucao;
		}
		void xuat(){
			tamgiac::xuat();
			cout<<" chieu cao = "<<chieucao<<endl;
			cout<<"dien tich lang tru: "<<langtru::dientich()<<endl;
		}
		
	
};
bool operator <(langtru a,langtru b){
	return a.dientich()<b.dientich();
}
int main(){
tamgiac mtamgiac[100];
int n;
cout<<"n= ";cin>>n;
for(int i=0;i<n;i++){
	cin>>mtamgiac[i];
}
cout<<" thong tin tam giac da nhap:"<<endl;
for(int i=0;i<n;i++){
	cout<<mtamgiac[i];
}
float max=mtamgiac[0].dientich();
int vt=0;
for(int i=1;i<n;i++){
	if(mtamgiac[vt]<mtamgiac[i]){
		vt=i;
		max=mtamgiac[i].dientich();
	}
}
for(int i=0;i<n;i++){
	if(mtamgiac[i].dientich()==max){
		mtamgiac[i].xuat();
	}
}
tamgiac *ar[100];
 	int M,N;
 	cout<<"nhap m va n: ";
	cin>>M>>N;
	for(int i=0;i<M+N;i++){
		if(i<M)
		ar[i]= new tamgiac();
		else ar[i]=new langtru();
		ar[i]->nhap();
	}
	cout<<"day vua nhap:"<<endl;
	for(int i=0;i<M+N;i++){
		ar[i]->xuat();
	}
}

