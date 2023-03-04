#include<bits/stdc++.h>

using namespace std;

class Hinh{
private:
	string ten;
	int socanh;
public:
	virtual void Nhap(){
		cout << "Nhap ten hinh: ";
		getline(cin, ten);
		cout << "Nhap so canh: ";
		cin >> socanh;
	}
	virtual void Xuat(){
		cout << "Ten: " << ten << endl;
		cout << "So canh: " << socanh << endl;
	}
	virtual int Chuvi() = 0; //thuan ao
	virtual int Dientich(){ //ham ao
		return 0;
	}
	virtual bool operator > (int n) = 0;
};

class HCN : public Hinh{
private:
	int cdai, crong;
public:
	void Nhap(){
		Hinh::Nhap();
		cout << "Nhap chieu dai: ";
		cin >> cdai;
		cout << "Nhap chieu rong: ";
		cin >> crong;
	}
	void Xuat(){
		Hinh::Xuat();
		cout << "Chieu dai: " << cdai << endl;
		cout << "Chieu rong: " << crong << endl;
	}
	int Chuvi(){
		return 2*(cdai + crong);
	}
	int Dientich(){
		return cdai*crong;
	}
	bool operator > (int n){
		return Chuvi()>n;
	}
};

class HV : public Hinh{
private:
	int canhHV;
public:
	void Nhap(){
		Hinh::Nhap();
		cout << "Nhap canh HV: ";
		cin >> canhHV;
	}
	void Xuat(){
		Hinh::Xuat();
		cout << "Do dai canh: " << canhHV << endl;
	}
	int Chuvi(){
		return 4*canhHV;
	}
	int Dientich(){
		return canhHV*canhHV;
	}
	bool operator > (int n){
		return Chuvi()>n;
	}
};

int main(){
	int m, n;
	cout << "Nhap so hcn, so hv: ";
	cin >> m >> n;
//	Hinh* arr[100];
//	Hinh** pA;
	Hinh* arr[100];
	int chon = 0;
	while(chon!=1 && chon!=2){
		cout << "1. Nhap HCN  truoc\n";
		cout << "2. Nhap HV truoc\n";
		cin >> chon;
	}
	for(int i = 0; i < m+n; i++){
		if(chon==1){
			if(i<m) arr[i] = new HCN();
			else arr[i] = new HV();
		}
		else{
			if(i<n) arr[i] = new HV();
			else arr[i] = new HCN();
		}
		arr[i]->Nhap();
	}
	cout << "\nHien thi:\n";
	for(int i = 0; i < m+n; i++){
		arr[i]->Xuat();
	}
	int cvmin = arr[0]->Chuvi(), cvmax = arr[0]->Chuvi(), dtmin = arr[0]->Dientich(), dtmax = arr[0]->Dientich();
	int vt1 = 0, vt2 = 0,  vt3 = 0, vt4 = 0;
	for(int i = 1; i < m+n; i++){
		if(cvmin > arr[i]->Chuvi()){
			cvmin = arr[i]->Chuvi();
			vt1 = i;
		}
		if(cvmax < arr[i]->Chuvi()){
			cvmax = arr[i]->Chuvi();
			vt2 = i;
		}
		if(dtmin > arr[i]->Dientich()){
			dtmin = arr[i]->Dientich();
			vt3 = i;
		}
		if(dtmax < arr[i]->Dientich()){
			dtmax = arr[i]->Dientich();
			vt4 = i;
		}
	}
	cout << "Hinh co chu vi nho nhat:\n";
	arr[vt1]->Xuat();
	cout << "Hinh co chu vi lon nhat:\n";
	arr[vt2]->Xuat();
	cout << "Hinh co dien tich nho nhat:\n";
	arr[vt3]->Xuat();
	cout << "Hinh co dien tich lon nhat:\n";
	arr[vt4]->Xuat();
	for(int i = 0; i < m+n-1; i++){
		for(int j = i+1; j < m+n; j++){
			if(arr[i]->Dientich() > arr[j]->Dientich()) swap(arr[i], arr[j]);
		}
	}
//	if(*arr[0]>0) cout << "YES";
//	else cout << "NO";
	return 0;
}
