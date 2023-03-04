#include<bits/stdc++.h>

using namespace std;

class TS{
private:
	string hoten;
	double toan, ly, hoa;
public:
	TS(){
		hoten = "";
		toan = ly = hoa = 0;
	}
	TS(string hoten, double toan, double ly, double hoa) : hoten(hoten), toan(toan), ly(ly), hoa(hoa){
		
	}
	virtual void Nhap(){
		cout << "Nhap ho ten: ";
		fflush(stdin);
		getline(cin, hoten);
		cout << "Nhap diem toan, ly, hoa: ";
		cin >> toan >> ly >> hoa;
	}
	virtual void Xuat(){
		cout << "Ho ten: " << hoten << endl;
		cout << "Diem toan, ly, hoa: " << setprecision(2) << toan << " " << setprecision(2) << ly << " " << setprecision(2) << hoa << endl;
	}
	virtual double tdiem(){
		return toan + ly + hoa;
	}
	friend istream &operator >> (istream &in, TS &a){
		a.Nhap();
		return in;
	}
	friend ostream &operator << (ostream &os, TS a){
		a.Xuat();
		return os;
	}
	bool operator > (TS a){
		return tdiem() > a.tdiem();
	}
	bool operator >= (double n){
		return tdiem() >= n;
	}
	bool operator == (TS a){
		return toan == a.toan;
	}
	string getHoten(){
		return hoten;
	}
	double getT(){
		return toan;
	}
	double getL(){
		return ly;
	}
	double getH(){
		return hoa;
	}
};

class HV : public TS{
private:
	string mhv;
	TS tthv;
public:
	HV(){
		
	}
	HV(string mhv, TS ts) : TS(ts.getHoten(), ts.getT(), ts.getL(), ts.getH()){
		this->mhv = mhv;
	}
	void Nhap(){
		cout << "Nhap ma hoc vien: ";
		fflush(stdin);
		getline(cin, mhv);
		tthv.Nhap();
	}
	void Nhap(TS ts){
		cout << "Nhap ma hoc vien: ";
		fflush(stdin);
		getline(cin, mhv);
		tthv=ts;
	}
	void Xuat(){
		cout << "Ma hoc vien: " << mhv << endl;
		tthv.Xuat();
	}
	double tdiem(){
		return tthv.tdiem();
	}
	bool operator > (int n){
		return tdiem() > n;
	}
	bool operator == (int n){
		return tdiem() == n;
	}
	
};

int main(){

	int n;
	cin>>n;
	TS ts[n];
	for(int i = 0; i < n; i++){
		cin >> ts[i];
	}
	cout << "\nHien thi:\n";
	for(int i = 0; i < n; i++){
		cout << ts[i];
	}
	cout << "\nDS thi sinh trung tuyen: \n";
	for(int i = 0; i < n; i++){
		if(ts[i] >= 23) cout << ts[i];
	}
	HV hv[n];
	for(int i = 0; i < n; i++){
		hv[i].Nhap(ts[i]);
	}
	hv[0].Xuat();
	double max = 0;
	for(int i = 0; i < n; i++){
		if(max < hv[i].tdiem()) max = hv[i].tdiem();
	}
	cout << "\nThi sinh co tong diem cao nhat:\n";
	for(int i = 0; i < n; i++){
		if(max == hv[i].tdiem()) hv[i].Xuat();
	}
	
	return 0;
}
