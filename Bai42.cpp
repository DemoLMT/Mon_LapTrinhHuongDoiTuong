#include<bits/stdc++.h>
using namespace std;
class vecto{
	int x;
	int y;
	public:
		int getx(){
			return this->x;
		}
		int gety(){
			return this->y;
		}
		vecto(){
			x=0;
			y=0;
		}
		vecto(int x,int y){
			this->x=x;
			this->y=y;
		}
		virtual void nhap(){
			cout<<"X = ";cin>>x;
			cout<<"Y = ";cin>>y;
		}
		virtual void xuat(){
			cout<<"("<<x<<", "<<y<<")"<<endl;
		}
		vecto operator +(vecto v2){
			int toadox=x+v2.x;
			int toadoy=y+v2.y;
			return vecto(toadox,toadoy);
		}
		vecto operator -(vecto v2){
			int toadox=x-v2.x;
			int toadoy=y-v2.y;
			return vecto(toadox,toadoy);
		}
		friend istream& operator>>(istream& is,vecto& v){
			v.nhap();
		}
		friend ostream& operator<<(ostream& os,vecto v){
			v.xuat();
		}
		friend bool operator == (vecto v1,vecto v2){
			return v1==v2;
		}
		vecto operator ++(){
			return vecto(x+1,y+1);
		}
};
class vecto3d:public vecto{
	int z;
	public:
		vecto3d():vecto(){
			z=0;
		}
		vecto3d(int x,int y,int z):vecto(x,y){
			this->z=z;
		}
		void nhap(){
			vecto::nhap();
			cout<<"Z = ";cin>>z;
		}
		void xuat(){
			vecto::xuat();
			cout<<"Z = "<<z<<endl;
		}
		friend vecto3d operator *(vecto3d v1, vecto3d v2 ){
			int a=v1.getx()*v2.getx();
			int b=v1.gety()*v2.gety();
			int c=v1.z*v2.z;
			return vecto3d(a,b,c);
		}
		friend vecto3d operator ^(vecto3d v1, vecto3d v2){
			int a=v1.gety()*v2.z-v2.gety()*v1.z;
			int b=v1.z*v2.getx()-v2.z*v1.getx();
			int c=v1.getx()*v2.gety()-v2.getx()*v1.gety();
			return vecto3d(a,b,c);
		}
};
int main(){
	int n;
	do{
	cout<<"N = ";
	cin>>n;
	}while(n<=0);
	vecto a[n];
for(int i=0;i<n;i++){
		cout<<"\nMoi ban nhap vecto "<<i+1<<endl;
		cin>>a[i];
	}
cout<<"Vecto da nhap la"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
cout<<"Tong cac vecto da nhap:"<<endl;
vecto v(0,0);
for(int i=0;i<n;i++){
	v=v+a[i];
}
cout<<"Sum: "<<v<<endl;
cout<<"Hieu cac so phuc da nhap:"<<endl;
vecto v2(0,0);
for(int i=0;i<n;i++){
	v2=v2-a[i];
}
cout<<"Hieu: "<<v2<<endl;
int N;
do{
	cout<<"N = ";cin>>N;
}while(N<3);
vecto *Arr[N];
for(int i=0;i<N;i++){
	Arr[i]=new vecto3d();
	Arr[i]->nhap();
}
int vt=0;
cout<<"\nMang co tich vo huong u*v =0 \n";
for(int i=0;i<N-1;i++){
	for(int j=i+1;j<N;j++){
		if(Arr[i]*Arr[j] ==0){
		vt++;
		Arr[i]->xuat();
}

}
}
if(vt==0){
	cout<<"k thay! ";
}
else cout<<"tim thay "<<vt;
}

