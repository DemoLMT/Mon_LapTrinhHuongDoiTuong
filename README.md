# Mon_LapTrinhHuongDoiTuong
<p>BÀI TẬP LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG</p>
</p>
BÀI TẬP LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG

Bài 1:
Để quản lý hàng hóa, người ta xây dựng lớp PHIEUNHAP với các thông tin: Tên Hàng, Ngày nhập (có kiểu DATE), Số lượng và các phương thức nhập, xuất dữ liệu. thực hiện các yêu cầu sau:
<p>a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
<p>b.	Xây dựng toán tử <<, >> để nhập, xuất dữ liệu.
<p>c.	Xây dựng toán tử lớn hơn “>” để so sánh hai đối tượng phiếu nhập thông qua số lượng.
<p>d.	Xây dựng toán tử so sánh “==” để so sánh hai đối tượng phiếu nhập xem có cùng tên hàng hay không.
Viết chương trình thực hiện các yêu cầu sau:</p>
<p>a.	Viết chương trình nhập vào danh sách n phiếu nhập.
<p>b.	Hiển thị các danh sách vừa nhập ra màn hình.
<p>c.	Hiển thị thông tin những phiếu hàng thuộc mặt hàng “gia dụng”.
<p>d.	Đưa ra thông tin những phiếu nhập có số lượng hàng >100.
<p>#include<bits/stdc++.h>
<p>using namespace std;
<p>class date{
<p>	public:
<p>	int ngay,thang,nam;
<p>	void nhap(){
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
<p>
<p>Bài 2:
Xây dựng lớp GIÁO VIÊN gồm các thông tin: họ tên, năm tốt nghiệp, môn giảng dạy và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử so sánh “>” để so sánh thâm niên công tác của hai đối tượng giáo viên thông qua năm tốt nghiệp.
d.	Xây dựng toán tử “==” để so sánh xem hai giáo viên có cùng môn giảng dạy hay không?
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập vào thông tin n giáo viên (n nhập từ bàn phím).
b.	Hiển thị danh sách giáo viên vừa nhập ra màn hình.
c.	Sắp xếp danh sách giáo viên theo chiều giảm dần của năm công tác và hiển thị danh sách đã sắp xếp ra màn hình.
d.	Đếm số giáo viên giảng dạy môn Toán và hiển thị thông tin ra màn hình.

<p>Bài 3:
Xây dựng lớp DETAI (đề tài) bao gồm các thông tin: mã đề tài, tên đề tài, tình trạng (đã nghiệm thu hoặc chưa nghiệm thu) và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử so sánh “==” để so sánh hai đề tài có trùng tên hay không?
d.	Xây dựng toán tử so sánh “!=” để đưa ra trạng thái của một đối tượng đề tài là đã cho nghiệm thu hay chưa.
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập vào thông tin n đề tài (n nhập từ bàn phím).
b.	Hiển thị danh sách đề tài vừa nhập ra màn hình.
c.	Sắp xếp danh sách các đề tài theo chiều tăng dần của mã đề tài và hiển thị danh sách đã sắp xếp ra màn hình.
d.	Đếm số lượng đề tài đã nghiệm thu và đưa ra danh sách những đề tài đó.

<p>Bài 4:
Xây dựng lớp HOCVIEN (học viên) với các thông tin: mã học viên, họ tên, năm sinh, điểm tổng kết và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “ >>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “>” để so sánh hai đối tượng học viên thông qua điểm tổng kết.
d.	Xây dựng toán tử “<” để so sánh tuổi của hai học viên thông qua năm sinh.
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập vào thông tin n học viên (n nhập từ bàn phím).
b.	Hiển thị danh sách n học viên vừa nhập ra màn hình.
c.	Sắp xếp danh sách các học viên theo chiều tăng dần của điểm tổng kết và hiển thị danh sách đã sắp xếp ra màn hình.
d.	Đếm số học viên có điểm tổng kết <5.0.
<p>Bài 5:
Xây dựng lớp thẻ ATM gồm các thông tin: số tài khoản, năm mở thẻ, năm hết hạn, tên tài khoản, số dư và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
class ATM{
public:
	int stk;
	int nm,nhh;
	string tentk;
	int sodu;
		void nhap();
		void hienthi();
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
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
b. Xây dựng toán tử “<<”, “ >>” để nhập, xuất dữ liệu.
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
c. Xây dựng toán tử so sánh “>” để so sánh hai đối tượng thẻ ATM thông qua số dư.

d. Xây dựng toán tử “==” để kiểm tra xem hai tài khoản có trùng tên hay không.
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập danh sách n thẻ ATM (n nhập từ bàn phím).
b.	Hiển thị danh sách n thẻ ATM vừa nhập ra màn hình.
c.	Đưa ra danh sách ATM đã mở trước năm 2010.
d.	Cho biết danh sách thẻ ATM đã hết hạn (tính đến thời điểm hiện tại).
Bài 6:
Xây dựng lớp hình chữ nhật gồm các thông tin: chiều dài, chiều rộng và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng phương thức tính chu vi, diện tích hình chữ nhật.
c. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
d. Xây dựng toán tử “>” để so sánh chu vi hai hình chữ nhật.
e. Xây dựng toán tử “==” để kiểm tra diện tích hai hình chữ nhật có bằng nhau hay không.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào n hình chữ nhật với thông tin gồm các cạnh của hình chữ nhật (n nhập từ bàn phím).
b. Hiển thị các thông tin về hình chữ nhật bao gồm: các cạnh, chu vi, diện tích.
c. Tìm kiếm và đưa ra hình chữ nhật có diện tích lớn nhất.
Bài 7:
Xây dựng lớp NHÀ với các thông tin: Mã ngôi nhà, số tầng, diện tích, màu sơn và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “>” để so sánh diện tích hai ngôi nhà.
d. Xây dựng toán tử “==” để kiểm tra xem hai ngôi nhà có cùng màu sơn hay không.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập thông tin n ngôi nhà từ bàn phím.
b. Hiển thị danh sách thông tin vừa nhập.
c. Sắp xếp danh sách các ngôi nhà theo thứ tự tăng dần của diện tích.
d. Đếm số ngôi nhà có sơn màu XANH và hiển thị thông tin những ngôi nhà đó ra màn hình.

Bài 8:
Xây dựng lớp Học viên (Hocvien) có các trường Họ tên (hoten), Lớp (lop), Điểm trung bình học kỳ 1 (diemHK1 – kiểu float) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “>” để so sánh hai đối tượng học viên thông qua điểm trung bình học kỳ 1.
d. Xây dựng toán tử “==” để kiểm tra xem hai học viên có học cùng lớp hay không.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào thông tin n học viên (n nhập từ bàn phím).
b. Hiển thị danh sách thông tin vừa nhập.
c. Sắp xếp danh sách học viên theo thứ tự giảm dần của điểm trung bình học kỳ 1.
d. Đếm số học viên có điểm trung bình học kỳ 1 đạt loại xuất sắc (>=9.0).
Bài 9:
Xây dựng lớp phân số với các thông tin tử số, mẫu số và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “*” để nhân hai phân số.
d. Xây dựng toán tử “/” để chia hai phân số.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào thông tin n phân số (n nhập từ bàn phím).
b. Hiển thị thông tin n phân số vừa nhập.
c. Thực hiện cộng hai phân số và hiển thị kết quả.
d. Thực hiện trừ hai phân số và hiển thị kết quả.
Bài 10:
Xây dựng Class Nhân viên (Nhanvien) có các trường Họ tên (hoten), Địa chỉ (diachi), Hệ số lương (hesoL - kiểu float) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “>” để so sánh hai đối tượng nhân viên thông qua hệ số lượng.
d. Xây dựng toán tử “==” để so sánh hai đối tượng nhân viên có trùng họ tên hay không. 
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào thông tin n nhân viên (n nhập từ bàn phím).
b. Hiển thị thông tin n nhân viên vừa nhập.
c. Sắp xếp danh sách nhân viên theo thứ tự giảm dần của hệ số lương.
d. Đưa ra thông tin nhân viên có hệ số lương cao nhất.
Bài 11:
Xây dựng lớp số phức có dạng a+bi với a là phần thực, b là phần ảo và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “==” để so sánh hai đối tượng số phức có bằng nhau hay không.
d. Xây dựng toán tử “!=” để kiểm tra hai đối tượng số phức có khác nhau hay không.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập các phần tử cho mảng n số phức.
b. Hiển thị thông tin của n số phức vừa nhập.
c. Xây dựng hàm cộng (+) để tính tổng hai số phức.
d. Xây dựng hàm trừ (-) để tính hiệu hai số phức.
Bài 12:
Xây dựng Class Hình Vuông (HinhVuong) có các trường Mã số (MaSo), Màu (mau), Số lượng (SL - kiểu int), cạnh (kiểu float) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng phương thức tính diện tích hình vuông.
c. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
d. Xây dựng toán tử “==” để kiểm tra xem một đối tượng hình vuông có màu sắc là màu XANH hay không. Nếu đúng thì hiển thị thông tin về hình vuông đó.
e. Xây dựng toán tử “>” để so sánh hai đối tượng hình vuông thông qua số lượng.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào thông tin n hình vuông (n nhập từ bàn phím).
b. Hiển thị thông tin n hình vuông vừa nhập.
c. Đưa ra thông tin hình vuông có diện tích lớn hơn 36 (diện tích > 36).
Bài 13:
Xây dựng Class điện thoại (dienthoai) có các trường tên điên thoai (tendt), hãng sản xuất (hsx), giá tiền (giatien) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “==” để so sánh hai đối tượng điện thoại có cùng hãng sản xuất hay không.
d. Xây dựng toán tử “>” để so sánh hai đối tượng điện thoại thông qua giá tiền.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào thông tin n điện thoại (n nhập từ bàn phím).
b. Hiển thị thông tin n điện thoại vừa nhập.
c. Sắp xếp danh sách điện thoại theo thứ tự giảm dần của giá tiền.
d. In ra thông tin điện thoại có giá tiền > 6.000.000.
Bài 14:
Xây dựng Class Nhân viên (Nhanvien) có các trường Mã số (msnv), Họ tên (hoten), tuổi (tuoi), hệ số lương (hsl) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số. 
b. Xây dựng phương thức tính lương (luong) với công thức như sau:
lương = hsl x 1.150.000
c. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
d. Xây dựng toán tử “==” để so sánh hai đối tượng nhân viên thông qua thuộc tính tuổi.
e. Xây dựng toán tử “<” để so sánh hai đối tượng nhân viên theo lương.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào danh sách n nhân viên (n nhập từ bàn phím).
b. Sắp xếp danh sách nhân viên theo thứ tự giảm dần của tuổi.
c. In ra thông tin Nhân viên có lương > 3.330.000.
Bài 15:
Xây dựng lớp Bác sĩ có các trường Mã số (msnv), Họ tên (hoten), tuổi (tuoi), hệ số phụ cấp (hspc – kiểu int) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng phương thức tính phụ cấp (tinhpc) với công thức như sau:
phụ cấp = hspc x 1.150.000
c. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
d. Xây dựng toán tử “==” để so sánh hai đối tượng bác sĩ thông qua thuộc tính tuổi.
e. Xây dựng toán tử “<” để so sánh hai đối tượng bác sĩ thông qua phụ cấp.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào danh sách n bác sĩ (n nhập từ bàn phím).
b. Sắp xếp danh sách bác sĩ theo thứ tự tăng dần của tuổi.
c. In ra thông tin bác sĩ có phụ cấp > 500.
Bài 16:
Xây dựng lớp Công nhân (congnhan) có các trường Họ tên (hoten), tuổi (tuoi), giới tính (gioitinh), hệ số lương (hsl), số giờ làm thêm (sogioLT – kiểu int) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng phương thức tính tổng lương (tongluong) với công thức như sau: Tongluong = hsl x 1.150.000 + sogioLT x 150.000
c.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
d.	Xây dựng toán tử “>” để so sánh hai đối tượng công nhân thông qua tổng lương.
e.	Xây dựng toán tử “<” để so sánh hai đối tượng công nhân thông qua số giờ làm thêm.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào danh sách n công nhân (n nhập từ bàn phím).
b.	Sắp xếp danh sách công nhân theo thứ tự giảm dần của tổng lương.
c.	In ra thông tin công nhân có tổng lương trên 5 triệu (tongluong > 5.000.000).
Bài 17:
Xây dựng Class quạt điện (quatdien) có các trường hãng sản xuất (hsx), số lượng (soluong), giá tiền (giatien), năm sản xuất (namsx) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để so sánh hai đối tượng quạt điện có cùng hãng sản xuất hay không?
d.	Xây dựng toán tử “<” để so sánh hai đối tượng quạt điện thông qua giá tiền.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n quạt điện (n nhập từ bàn phím).
b.	Hiển thị thông tin n quạt điện vừa nhập.
c.	Sắp xếp danh sách quạt điện theo thứ tự giảm dần của giá tiền.
d.	In ra thông tin quạt điện có giá tiền > 1.000.000.
Bài 18:
Xây dựng Class Tivi (tivi) có các trường hãng sản xuất (hsx), độ rộng màn hình (manhinh), số lượng (soluong), giá tiền (giatien), năm sản xuất (namsx) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để so sánh hai đối tượng tivi có cùng hãng sản xuất hay không?
d.	Xây dựng toán tử “>” để so sánh hai đối tượng tivi thông qua giá tiền.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n tivi (n nhập từ bàn phím).
b.	Hiển thị thông tin n tivi vừa nhập.
c.	Sắp xếp danh sách tivi theo thứ tự giảm dần của độ rộng màn hình.
d.	In ra thông tin tivi có giá tiền > 5.000.000.
Bài 19:
Xây dựng Class tủ lạnh (tulanh) có các trường hãng sản xuất (hsx), dung tích (dungtich),số lượng (soluong), giá tiền (giatien), năm sản xuất (namsx) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để so sánh hai đối tượng tủ lạnh có cùng hãng sản xuất hay không?
d.	Xây dựng toán tử “>” để so sánh hai đối tượng tủ lạnh thông qua dung tích.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n tủ lạnh (n nhập từ bàn phím).
b.	Hiển thị thông tin n tủ lạnh vừa nhập.
c.	Sắp xếp danh sách tủ lạnh theo thứ tự giảm dần của dung tích.
d.	In ra thông tin tủ lạnh có giá tiền > 1.000.000.
Bài 20:
Để quản lý Kỳ thi Olympic Toán Sinh viên cấp Quốc gia (kythi), xây dựng class Trường Đại học Tham dự (truongTD) có các trường dữ liệu mã trường (matruong), tên trường (tentruong), số lượng thí sinh tham gia (soluongTS), số lượng đạt giải (SLgiai) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để so sánh hai đối tượng Trường ĐH tham dự có số lượng thí sinh tham gia bằng nhau hay không?
d.	Xây dựng toán tử “<” để so sánh hai đối tượng Trường ĐH tham dự thông qua số lượng giải (SLgiai).
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n trường Đại học tham dự (n nhập từ bàn phím).
b.	Hiển thị thông tin n trường Đại học vừa nhập.
c.	Sắp xếp danh sách các trường ĐH theo thứ tự giảm dần của số lượng giải.
d.	In ra thông tin trường ĐH có số lượng thí sinh tham gia đông nhất.
Bài 21:
Xây dựng class THÍ SINH (thisinh) trong một cuộc thi học sinh giỏi với các trường dữ liệu mã thí sinh (maTS – kiểu int), họ tên thí sinh (hotenTS), năm sinh (namsinh), giải đạt được (giai – kiểu char) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “==” để kiểm tra xem hai thí sinh có trùng họ tên hay không?
d. Xây dựng toán tử “>” để so sánh tuổi của hai đối tượng thí sinh thông qua năm sinh.
Viết chương trình thực hiện các yêu cầu sau:
a. Nhập vào thông tin n thí sinh (n nhập từ bàn phím).
b. Hiển thị thông tin n thí sinh vừa nhập.
c. Sắp xếp danh sách các thí sinh theo thứ tự tăng dần của mã thí sinh.
d. In ra thông tin thí sinh đạt giải NHẤT.
Bài 22:
Xây dựng Class MÁY IN (mayin) có các trường dữ liệu mã máy (mamay), hãng sản xuất (hsx), năm sản xuất (namsx) , giá tiền (giatien) và hai phương thức nhập (nhap), xuất (xuat). Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để so sánh hai đối tượng máy in có cùng hãng sản xuất hay không?
d.	Xây dựng toán tử “>” để so sánh hai đối tượng máy in thông qua năm sản xuất.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n máy in (n nhập từ bàn phím).
b.	Hiển thị thông tin n máy in vừa nhập.
c.	Sắp xếp danh sách máy in theo thứ tự tăng dần của năm sản xuất.
d.	In ra thông tin máy in có giá tiền > 3.000.000.
Bài 23:
Xây dựng class THẺ ĐIỆN THOẠI (thedienthoai) có các trường dữ liệu mã thẻ (mathe), mệnh giá (menhgia), nhà mạng (nhamang), số lượng (soluong) và hai phương thức nhập (nhap), xuất (xuat) dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “!=” để so sánh hai đối tượng thẻ điện thoại có cùng nhà mạng hay không?
d.	Xây dựng toán tử “>” để so sánh hai đối tượng thẻ điện thoại thông qua mệnh giá.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n thẻ điện thoại (n nhập từ bàn phím).
b.	Hiển thị thông tin n thẻ điện thoại vừa nhập.
c.	Đưa ra thông tin thẻ điện thoại của nhà mạng Viettel.
d.	Đưa ra thông tin những thẻ điện thoại có mệnh giá 500.000 của tất cả các nhà mạng.
Bài 24:
Xây dựng class XE MÁY (xemay) có các trường dữ liệu mã khung (makhung), hãng sản xuất (hangsx), dung tích xilanh (dungtichxl), năm sản xuất (namsx), giá tiền (giatien) và các phương thức nhập (nhap), xuất (xuat) dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để kiểm tra xem hai đối tượng xe máy có cùng hãng sản xuất hay không?
d.	Xây dựng toán tử “>” để so sánh hai đối tượng xe máy thông qua giá tiền.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n xe máy (n nhập từ bàn phím).
b.	Hiển thị thông tin n xe máy vừa nhập.
c.	Sắp xếp các xe máy theo chiều giảm dần của năm sản xuất.
d.	Đưa ra thông tin những xe máy của hãng sản xuất HONDA.
Bài 25:
Xây dựng class MÁY GIẶT có các thuộc tính Mã code (macode), hãng sản xuất (hangsx), khối lượng giặt (khoiluong), loại cửa (loaicua - cửa trên hay cửa ngang), số lượng (soluong), xuất xứ (xuatxu) và các phương thức nhập (nhap) và xuất (xuat) dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “>” để so sánh hai đối tượng máy giặt thông qua khối lượng giặt.
d.	Xây dựng toán tử “<” để so sánh hai đối tượng máy giặt thông qua số lượng.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n máy giặt (n nhập từ bàn phím).
b.	Hiển thị thông tin n máy giặt vừa nhập.
c.	Sắp xếp các máy giặt theo chiều giảm dần của số lượng và hiển thị danh sách đã sắp xếp ra màn hình.
d.	Đưa ra thông tin những máy giặt của hãng sản xuất TOSHIBA.
Bài 26:
Xây dựng class MÁY LỌC NƯỚC có các thuộc tính Mã máy (ID), số lõi (soloi), hãng sản xuất (hangsx), năm sản xuất (namsx), giá tiền (giatien) và các phương thức nhập (nhap) và xuất (xuat) dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để so sánh hai đối tượng máy lọc nước có cùng hãng sản xuất hay không.
d.	Xây dựng toán tử “>” để so sánh hai đối tượng máy giặt thông qua giá tiền.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n máy lọc nước (n nhập từ bàn phím).
b.	Hiển thị thông tin n máy lọc nước vừa nhập.
c.	Sắp xếp các máy lọc nước theo chiều giảm dần của năm sản xuất và hiển thị danh sách đã sắp xếp ra màn hình.
d.	Đưa ra thông tin máy lọc nước có giá cao nhất.
Bài 27:
Xây dựng class XE ĐẠP có các thuộc tính Mã code (macode), màu sắc (mausac), hãng sản xuất (hangsx), năm sản xuất (namsx), số lượng (soluong), giá tiền (giatien) và các phương thức nhập (nhap) và xuất (xuat) dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số và hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c.	Xây dựng toán tử “==” để kiểm tra xem hai xe đạp có cùng hãng sản xuất hay không?
d.	Xây dựng toán tử “>” để so sánh hai đối tượng xe đạp thông qua giá tiền.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào thông tin n xe đạp (n nhập từ bàn phím).
b.	Hiển thị thông tin n xe đạp vừa nhập.
c.	Sắp xếp các xe đạp theo chiều tăng dần của giá tiền và hiển thị danh sách đã sắp xếp ra màn hình.
d.	Đưa ra thông tin những xe đạp được sản xuất năm 2016.
Bài 28:
- Xây dựng lớp Số phức (SoPhuc) gồm các thành phần như sau:
+ Các thuộc tính: phần thực, phần ảo.
+ Hàm thiết lập (Hàm tạo) không tham số và Hàm thiết lập (Hàm tạo) có tham số.
+ Phương thức Nhập và Hiển thị Số phức ra màn hình theo dạng a + bi.
+ Hàm toán tử +  : để cộng 2 Số phức, kết quả là một Số phức. 
	(Biết rằng x=a1+i*b1; y= a2+i*b2 thì x+ y = (a1+a2) + i*(b1+b2))
+ Hàm toán tử -  : để trừ 2 Số phức, kết quả là một Số phức. 
	(Biết rằng x=a1+i*b1; y= a2+i*b2 thì x- y = (a1-a2) + i*(b1-b2))
+ Hàm toán tử *  : để nhân 2 Số phức, kết quả là một Số phức. 
(Biết rằng x=a1+i*b1; y= a2+i*b2 thì x* y = (a1*a2-b1*b2) + i*(a1*b2 + a2*b1))
+ Hàm toán tử *  : để nhân Số phức với số nguyên, kết quả là một Số phức. 
	(Biết rằng x=a+i*b thì x * n = (n*a) + i*(n*b))
+ Hàm toán tử /  : để chia Số phức cho số nguyên, kết quả là một Số phức. 
	(Biết rằng x=a+i*b thì x / n = (a/n) + i*(b/n))
Viết chương trình thực hiện các yêu cầu sau:
- Nhập một mảng đối tượng Số phức gồm N (N > 0) phần tử.
- Tính và in ra màn hình tổng các Số phức đã nhập.
- Tính và in ra màn hình hiệu các Số phức đã nhập.
- Tính và in ra màn hình tích các Số phức đã nhập.
- Thực hiện nhân các Số phức đã nhập với 10 và in ra màn hình kết quả sau khi nhân.
- Thực hiện chia các Số phức đã nhập với 10 và in ra màn hình kết quả sau khi chia.
Bài 29:
- Xây dựng lớp Phân số (PhanSo) gồm các thành phần như sau:
+ Các thuộc tính: tử, mẫu (#0).
+ Hàm thiết lập (Hàm tạo) không tham số và Hàm thiết lập (Hàm tạo) có tham số.
+ Phương thức Nhập và Hiển thị Phân số ra màn hình theo dạng a / b.
+ Hàm toán tử +  : để cộng 2 Phân số, kết quả là một Phân số. 
(Biết rằng x=a1/b1; y= a2/b2 thì x+ y = (a1*b2 + a2*b1)/(b1*b2)
+ Hàm toán tử -  : để trừ 2 Phân số, kết quả là một Phân số. 
(Biết rằng x=a1/b1; y= a2/b2 thì x- y = (a1*b2 - a2*b1)/(b1*b2)
+ Hàm toán tử *  : để nhân 2 Phân số, kết quả là một Phân số. 
(Biết rằng x=a1/b1; y= a2/b2 thì x * y = (a1*a2)/(b1*b2)
+ Hàm toán tử *  : để nhân Phân số với số nguyên, kết quả là một Phân số. 
(Biết rằng x=a1/b1; n là số nguyên thì x * n = (a1*n)/b1
+ Hàm toán tử +  : để cộng Phân số với số nguyên, kết quả là một Phân số. 
	(Biết rằng x=a1/b1; n là số nguyên thì x + n = (a1 + b1*n)/b1
+ Hàm toán tử -  : để trừ Phân số cho số nguyên, kết quả là một Phân số. 
	(Biết rằng x=a1/b1; n là số nguyên thì x - n = (a1 - n*b1)/b1
+ Hàm toán tử ++  : để cộng Phân số với 1, kết quả là một Phân số. 
	(Biết rằng x=a1/b1 thì x++ = a1/b1 + 1 = (a1 + b1) / b1
+ Hàm toán tử --  : để trừ Phân số với 1, kết quả là một Phân số. 
	(Biết rằng x=a1/b1 thì x-- = a1/b1 - 1 = (a1 - b1) / b1
+ Hàm toán tử /  : để chia Phân số cho số nguyên, kết quả là một Phân số. 
	(Biết rằng x=a1/b1; n là số nguyên thì x / n = (a1) / (n*b1)
+ Hàm toán tử /  : để chia 2 Phân số, kết quả là một Phân số. 
(Biết rằng x=a1/b1; y= a2/b2 thì x / y = (a1*b2)/(b1*a2)
Viết chương trình thực hiện các yêu cầu sau:
- Nhập một mảng đối tượng Phân số gồm N (N > 0) phần tử.
- Tính và in ra màn hình tổng các Phân số đã nhập.
- Tính và in ra màn hình hiệu các Phân số đã nhập.
- Tính và in ra màn hình tích các Phân số đã nhập.
- Thực hiện nhân Phân số đã nhập trong mảng với 10 và in kết quả ra màn hình.
- Thực hiện tăng Phân số đã nhập trong mảng lên 10 và in kết quả ra màn hình.
- Thực hiện giảm Phân số đã nhập trong mảng đi 10 đơn vị và in kết quả ra màn hình.
- Thực hiện tăng các Phân số đã nhập trong mảng lên 1 đơn vị và in kết quả ra màn hình.
- Thực hiện giảm các Phân số đã nhập trong mảng đi 1 đơn vị và in kết quả ra màn hình.
- Thực hiện chia Phân số đã nhập trong mảng cho 10 và in kết quả ra màn hình.
- Tính và in ra màn hình thương các Phân số đã nhập.
Bài 30:
Ý 1: 
- Xây dựng lớp CanBo (Cán bộ) gồm các thành phần sau:
+ Các thuộc tính: Tên, Hệ số lương, Lương cơ bản
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Lương theo công thức: Lương = Hệ số lương * Lương cơ bản
- Xây dựng lớp GiaoVien (Giáo viên) kế thừa từ lớp CanBo, gồm:
+ Thuộc tính Hệ số phụ cấp
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Lương = (HS lương*LươngCB) + HS phụ cấp * (HS lương*LươngCB)
- Xây dựng lớp NhanVien (Nhân viên) kế thừa từ lớp CanBo, gồm:
+ Thuộc tính: Thưởng
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Lương = (Hệ số lương*Lương cơ bản) + Thưởng
Ý 2: 
- Khai báo một mảng lưu trữ M đối tượng GiaoVien và N đối tượng NhanVien. Với M, N là 2 số nguyên dương nhập từ bàn phím.
- Nhập dữ liệu cho các phần tử trong mảng, yêu cầu tạo menu cho phép lựa chọn: 
1. Nhập dữ liệu cho các đối tượng GiaoVien trước
2. Nhập dữ liệu cho các đối tượng NhanVien trước
- Hiển thị thông tin của các phần tử trong mảng ra màn hình
- Hiển thị thông tin của đối tượng GiaoVien có lương thấp nhất và cao nhất ra màn hình
- Hiển thị thông tin của đối tượng NhanVien có lương thấp nhất và cao nhất ra màn hình
Bài 31:
Ý 1: 
- Xây dựng lớp Nhân viên là lớp trừu tượng, gồm các thành phần sau:
+ Các thuộc tính: Tên, Tuổi, Giới tính
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Lương
- Xây dựng lớp Công nhân kế thừa từ lớp Nhân viên, gồm:
+ Thuộc tính: Lương ngày, Số ngày công
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Lương= Lương ngày * Số ngày công
- Xây dựng lớp Cán bộ kế thừa từ lớp Nhân viên, gồm:
+ Thuộc tính: Hệ số lương, Phụ cấp
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Lương = Hệ số lương*1.150.000 + Phụ cấp
Ý 2: 
- Khai báo một mảng lưu trữ M đối tượng Công nhân và N đối tượng Cán bộ. Với M, N là 2 số nguyên dương nhập từ bàn phím.
- Nhập dữ liệu cho các phần tử trong mảng, yêu cầu tạo menu cho phép lựa chọn: 
1. Nhập dữ liệu cho các đối tượng Công nhân trước
2. Nhập dữ liệu cho các đối tượng Cán bộ trước
- Hiển thị thông tin của các phần tử trong mảng ra màn hình
- Sắp xếp các phần tử trong mảng theo chiều tăng dần hoặc giảm dần của Lương và hiển thị ra màn hình kết quả sau khi sắp xếp
Bài 32:
Ý 1: 
- Xây dựng lớp Dịch vụ là lớp trừu tượng, gồm các thành phần sau:
+ Các thuộc tính: Tên dịch vụ
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Tính tiền
- Xây dựng lớp Dịch vụ Giặt tẩy kế thừa từ lớp Dịch vụ, gồm:
+ Thuộc tính: Số kilogam quần áo, Đơn giá
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Tính tiền = Số kilogam quần áo * Đơn giá
- Xây dựng lớp Dịch vụ Thuê xe kế thừa từ lớp Dịch vụ, gồm:
+ Thuộc tính: Số giờ thuê, Đơn giá
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Tính tiền = Số giờ thuê * Đơn giá
Ý 2: 
- Khai báo một mảng lưu trữ M đối tượng Dịch vụ Giặt tẩy và N đối tượng Dịch vụ Thuê xe. Với M, N là 2 số nguyên dương nhập từ bàn phím.
- Nhập dữ liệu cho các phần tử trong mảng, yêu cầu tạo menu cho phép lựa chọn: 
1. Nhập dữ liệu cho các đối tượng Dịch vụ Giặt tẩy trước
2. Nhập dữ liệu cho các đối tượng Dịch vụ Thuê xe trước
- Hiển thị thông tin của các phần tử trong mảng ra màn hình
- Sắp xếp lại mảng các phần tử đã nhập sao cho:
+ M phần tử đầu tiên của mảng là các đối tượng Dịch vụ Giặt tẩy và được sắp xếp theo chiểu tăng dần hoặc giảm dần của số tiền phải trả.
+ N phần tử tiếp theo của mảng là các đối tượng Dịch vụ Thuê xe và được sắp xếp theo chiểu tăng dần hoặc giảm dần của số tiền phải trả.
- Hiển thị thông tin của các phần tử trong mảng sau khi sắp xếp ra màn hình
Bài 33:
Ý 1: 
- Xây dựng lớp Hình học gồm các thành phần sau:
+ Các thuộc tính: Tên hình, Số cạnh (kiểm tra cạnh số nguyên dương>3)
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Chu vi
+ Phương thức tính Diện tích
- Xây dựng lớp Hình Chữ Nhật thừa từ lớp Hình học, gồm:
+ Thuộc tính: Chiều dài, Chiều rộng
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Chu vi
+ Phương thức tính Diện tích
- Xây dựng lớp Hình Vuông kế thừa từ lớp Hình học, gồm:
+ Thuộc tính: Cạnh hình vuông
+ Phương thức nhập và hiển thị dữ liệu
+ Phương thức tính Chu vi
+ Phương thức tính Diện tích
Virtual int chuvi ()=0;//thuần ảo
Virtual int dientich () //hàm ảo
Ý 2: 
- Khai báo một mảng lưu trữ M đối tượng Hình Chữ Nhật và N đối tượng Hình Vuông. Với M, N là 2 số nguyên dương nhập từ bàn phím.
- Nhập dữ liệu cho các phần tử trong mảng, yêu cầu tạo menu cho phép lựa chọn: 
1. Nhập dữ liệu cho các đối tượng Hình Chữ Nhật trước
2. Nhập dữ liệu cho các đối tượng Hình Vuông trước
- Hiển thị thông tin của các phần tử trong mảng ra màn hình
- Hiển thị thông tin đối tượng trong mảng có chu vi nhỏ nhất và lớn nhất ra màn hình
- Hiển thị thông tin đối tượng trong mảng có diện tích nhỏ nhất và lớn nhất ra màn hình
- Sắp xếp các đối tượng trong mảng theo chiều tăng dần và giảm của diện tích hoặc chu vi
Bài 34:
Ý 1: 
Cho lớp Tam giác với số đo ba cạnh a, b, c và các phương thức nhập, xuất dữ liệu, thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng phương thức tính chu vi, diện tích của tam giác.
c.	Xây dựng hàm toán tử >>, << để nhập, xuất dữ liệu.
d.	Xây dựng toán tử “<” để so sánh diện tích của hai đối tượng tam giác.
e.	Xây dựng toán tử “==” để so sánh chu vi của hai đối tượng tam giác có bằng nhau hay không.
Viết chương trình thực hiện các yêu cầu sau:
a.	Nhập vào n tam giác với số đo 3 cạnh a, b,c thoản mãn điều kiện là ba cạnh của tam giác (n nhập từ bàn phím). 
b.	Hiển thị thông tin các cạnh của tam giác ra màn hình.
c.	Hiển thị ra màn hình tam giác có diện tích lớn nhất.
Ý 2: 
a. Xây dựng lớp Lăng trụ Tam giác đứng kế thừa lớp Tam giác đã xây dựng ở trên và có thêm thông tin Chiều cao lăng trụ.
b. Xây dựng phương thức nhập dữ liệu từ bàn phím và phương thức hiển thị dữ liệu để hiển thị thông tin Tam giác đáy, Chiều cao lăng trụ và Diện tích toàn phần của lăng trụ.
c. Xây dựng các phương thức sau cho lớp Lăng trụ Tam giác đứng:
	- Phương thức tính Diện tích để tính diện tích toàn phần cho Lăng trụ theo công thức sau: Diện tích = Chu vi Tam giác * Chiều cao Lăng trụ + 2 * Diện tích Tam giác.
	- Hàm toán tử “<” để so sánh Diện tích của 2 đối tượng Lăng trụ.
d. Viết chương trình thực hiện các yêu cầu sau:
	- Khai báo một mảng lưu trữ M đối tượng Tam giác và N đối tượng Lăng trụ Tam giác dứng (với M, N là 2 số nguyên dương nhập từ bàn phím).
	- Nhập dữ liệu cho các phần tử trong mảng theo đúng khai báo.
	- Hiển thị thông tin của các phần tử trong mảng ra màn hình.
Bài 35:
Ý 1: 
Xây dựng lớp cơ sở HOCSINH có các thông tin sau: Họ tên, Lớp, điểm toán, văn, ngoại ngữ và các phương thức nhập, xuất dữ liệu, thực hiện các yêu cầu sau:
a.	Xây dựng phương thức tính điểm trung bình của học sinh.
b.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
c.	Xây dựng toán tử <<, >> để nhập, xuất dữ liệu.
d.	Xây dựng toán tử so sánh “>” để so sánh điểm trung bình của hai đối tượng học sinh.
e.	Xây dựng toán tử “==” để so sánh điểm toán của hai đối tượng học sinh có bằng nhau hay không?
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập vào thông tin và điểm của n học sinh với n nhập từ bàn phím.
b.	Hiển thị các thông tin, điểm của học viên ra màn hình.
c.	Hiển thị danh sách những học viên có điểm trung bình >=5.
Ý 2: 
a. Xây dựng lớp HOCSINHUUTIEN kế thừa lớp HOCSINH đã xây dựng ở trên và có thêm thông tin Điểm ưu tiên (>=0).
b. Xây dựng phương thức nhập dữ liệu từ bàn phím và phương thức hiển thị dữ liệu để hiển thị thông tin HOCSINH, Điểm ưu tiên và Tổng điểm
c. Xây dựng các phương thức sau cho lớp HOCSINHUUTIEN:
	- Phương thức tính Tổng điểm để tính tổng điểm cho HOCSINHUUTIEN theo công thức sau: Tổng điểm = Điểm toán + Điểm văn + Điểm ngoại ngữ + Điểm ưu tiên.
	- Hàm toán tử “>” để so sánh Tổng điểm của 2 đối tượng HOCSINHUUTIEN.
d. Viết chương trình thực hiện các yêu cầu sau:
	- Khai báo một mảng lưu trữ M đối tượng HOCSINH và N đối tượng HOCSINHUUTIEN (với M, N là 2 số nguyên dương nhập từ bàn phím).
	- Nhập dữ liệu cho các phần tử trong mảng theo đúng khai báo.
	- Hiển thị thông tin của các phần tử trong mảng ra màn hình.
Bài 36:
Ý 1: 
Tạo lớp SACH để quản lý sách trong thư viện, với mỗi loại sách cần lưu trữ các thông tin sau: Tên sách, Tác giả, Số lượng, Năm xuất bản. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử <<, >> để nhập, xuất dữ liệu cho 2 đối tượng sách.
c.	Xây dựng toán tử nạp chồng “<” để so sánh hai đối tượng sách vừa nhập thông qua số lượng.
d.	Sử dụng nạp chồng toán tử “!=” để kiểm tra xem hai đối tượng sách vừa nhập ở phần b có năm xuất bản giống nhau hay không.
Viết chương trình thực hiện các yêu cầu sau:
e.	Viết chương trình nhập vào thông tin của n quyển sách (n nhập từ bàn phím).
f.	Hiển thị các thông tin vừa nhập về sách ra màn hình.
g.	Đưa ra loại sách có số lượng lớn nhất ra màn hình.
h.	Hiển thị thông tin của tất cả các loại sách xuất bản năm 2015.
Ý 2: 
a. Xây dựng lớp EBook kế thừa lớp SACH đã xây dựng ở trên và có thêm thông tin Số lượt tải, Phí tải sách.
b. Xây dựng phương thức nhập dữ liệu từ bàn phím và phương thức hiển thị dữ liệu để hiển thị thông tin SACH, Số lượt tải, Phí tải sách và Số tiền thu được do tải sách.
c. Thực hiện yêu cầu sau:
	- Xây dựng phương thức Tính tiền cho lớp EBook để tính số tiền mỗi Ebook thu được do người tải trả theo công thức sau: Tính tiền = Số lượt tải * Phí tải sách.
	- Xây dựng hàm nạp chồng cho toán tử “<” để so sánh Số tiền thu của 2 đối tượng EBook.
	
d. Viết chương trình thực hiện các yêu cầu sau:
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng đã khai báo.
      - Khai báo một mảng lưu trữ N đối tượng EBook (với N là số nguyên dương nhập từ bàn phím).
	- Sắp xếp mảng đối tượng Ebook theo chiều giảm dần Số tiền thu được do tải sách.
	- Hiển thị thông tin các phần tử trong mảng sau khi đã sắp xếp ra màn hình.
Bài 37:
Ý 1: 
Để quản lý điểm thi vào trường T36 của các thí sinh, ta xây dựng lớp THÍ SINH gồm các thuộc tính họ tên, điểm thi 3 môn Toán, Lý Hóa và các phương thức nhập, xuất thông tin của thí sinh.
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng phương thức tính tổng điểm của thí sinh.
c.	Xây dựng toán tử <<, >> để nhập, xuất dữ liệu cho 2 đối tượng thí sinh.
d.	Xây dựng toán tử so sánh “>” để so sánh hai thí sinh vừa nhập ở phần b thông qua tổng điểm.
e.	Xây dựng toán tử so sánh “==” để so sánh hai thí sinh vừa nhập ở phần b thông qua đối tượng điểm toán.
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập vào thông tin của n thí sinh (n nhập vào từ bàn phím).
b.	Hiển thị thông tin vừa nhập của thí sinh ra màn hình.
c.	Đưa ra màn hình danh sách các thí sinh trúng tuyển (điểm chuẩn vào trường là 23).
Ý 2: 
a. Xây dựng lớp HỌC VIÊN gồm các thông tin Mã học viên, Thông tin học viên (có kiểu THÍ SINH đã xây dựng ở trên).
b. Xây dựng các thành phần sau cho lớp HỌC VIÊN:
	- Xây dựng phương thức nhập dữ liệu không tham số để nhập thông tin cho đối tượng HỌC VIÊN từ bàn phím.
	- Xây dựng phương thức nhập dữ liệu 1 tham số là đối tượng THÍ SINH để nhập thông tin Mã học viên từ bàn phím và còn Thông tin học viên của đối tượng HỌC VIÊN được lấy từ tham số truyền vào.
	- Xây dựng phương thức hiển thị dữ liệu để hiển thị thông tin đối tượng HỌC VIÊN: Mã học viên và Thông tin học viên.
c. Thực hiện các yêu cầu sau:
	- Xây dựng phương Tổng điểm cho lớp HỌC VIÊN để lấy ra tổng điểm thi vào trường của đối tượng HỌC VIÊN.
	- Xây dựng hàm toán tử “>” để so sánh tổng điểm thi vào trường của đối tượng HỌC VIÊN với một số nguyên.
	- Xây dựng hàm toán tử “==” để so sánh tổng điểm thi vào trường của đối tượng HỌC VIÊN với một số nguyên.
	- Khai báo một mảng đối tượng HỌC VIÊN để lưu trữ thông tin các đối tượng THÍ SINH trúng tuyển đã nhập ở Ý 1.
d. Viết chương trình thực hiện các yêu cầu sau:
	- Lưu trữ các đối tượng THÍ SINH trúng tuyển đã nhập trong Ý 1 vào mảng đối tượng HỌC VIÊN đã khai báo ở trên, đồng thời bổ sung thêm Mã học viên cho mỗi thí sinh trúng tuyển.
	- Hiển thị danh sách học viên có tổng điểm thi cao nhất ra màn hình.
Bài 38:
Ý 1: 
Xây dựng lớp Đĩa CD có các thông tin: Tên đĩa, số lượng bài, giá tiền và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau:
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử <<, >> để nhập, xuất dữ liệu cho 2 đối tượng đĩa CD.
c.	Sử dụng toán tử nạp chồng “<” để so sánh hai đối tượng đĩa CD thông qua giá tiền.
d.	Sử dụng nạp chồng toán tử “!=” để so sánh hai đối tượng CD thông qua số lượng bài hát là có bằng nhau hay khác nhau.
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình chính thực hiện nhập vào một danh sách n đĩa CD.
b.	Hiển thị danh sách vừa nhập.
c.	Đưa ra thông tin của đĩa CD có giá tiền nhỏ nhất.
d.	Tìm và hiển thị thông tin của đĩa CD có số lượng bài hát lớn nhất.
Ý 2: 
a. Xây dựng lớp Chi tiết CD kế thừa lớp Đĩa CD đã xây dựng ở Câu 1 và có thêm thông tin Số đĩa đã bán.
b. Xây dựng phương thức nhập dữ liệu để nhập dữ liệu từ bàn phím và phương thức hiển thị dữ liệu để hiển thị thông tin Tên đĩa, Số lượng bài, Giá tiền, Số đĩa đã bán và Số tiền thu được của lớp Chi tiết CD.
c. Xây dựng các phương thức sau cho lớp Chi tiết CD:
	- Phương thức Tính tiền để tính số tiền thu được theo công thức sau: Tính tiền = Số đĩa đã bán * Giá tiền.
	- Hàm toán tử “>” để so sánh số tiền thu được của 2 đối tượng Chi tiết CD.
	- Khai báo một mảng lưu trữ N đối tượng Chi tiết CD (với N là số nguyên dương nhập từ bàn phím).
d. Viết chương trình thực hiện các yêu cầu sau:
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng đã khai báo.
	- Sắp xếp mảng đối tượng Chi tiết CD theo chiều giảm dần Số tiền thu được do bán Đĩa CD.
	- Hiển thị thông tin các phần tử trong mảng sau khi đã sắp xếp ra màn hình.
Bài 39:
Ý 1: 
Xây dựng lớp cơ sở NGUOI có các thông tin sau: Họ tên, Giới tính, Ngày sinh và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau
a.	Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b.	Xây dựng toán tử <<, >> để nhập, xuất dữ liệu.
c.	Xây dựng toán tử so sánh “<” để so sánh tuổi của hai người dựa vào năm sinh.
d.	Xây dựng toán tử “==” để so sánh giới tính của hai người xem có giới tính giống nhau hay không.
Viết chương trình thực hiện các yêu cầu sau:
a.	Viết chương trình nhập vào danh sách n người với các thông tin đã cho.
b.	Hiên thị danh sách vừa nhập.
c.	Đưa ra danh sách những người có giới tính là Nam.
d.	Hiển thị thông tin của người có tuổi lớn nhất.
Ý 2: 
a. Xây dựng lớp SINHVIEN kế thừa lớp NGUOI đã xây dựng ở Câu 1 và có thêm thông tin Điểm thi (>=0).
b. Xây dựng phương thức nhập dữ liệu để nhập thông tin SINHVIEN từ bàn phím và phương thức hiển thị dữ liệu để hiển thị thông tin SINHVIEN gồm: Họ tên, Giới tính, Ngày sinh, Điểm thi.
c. Thực hiện các yêu cầu sau:
	- Xây dựng hàm nạp chồng toán tử “=” cho lớp SINHVIEN để gán thông tin 2 đối tượng SINHVIEN cho nhau.
	- Xây dựng hàm nạp chồng toán tử “<”cho lớp SINHVIEN để so sánh 2 đối tượng SINHVIEN dựa vào Điểm thi.
	
d. Viết chương trình thực hiện các yêu cầu sau:
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng SINHVIEN.
      - Khai báo một mảng lưu trữ N đối tượng SINHVIEN (với N là số nguyên dương nhập từ bàn phím).
	- Sắp xếp mảng đối tượng SINHVIEN theo chiều giảm dần của Điểm thi.
	- Hiển thị thông tin của các phần tử trong mảng đối tượng SINHVIEN sau khi đã sắp xếp ra màn hình.
Bài 40:
Ý 1: 
Xây dựng lớp XE gồm các thông tin: Nhãn hiệu, Giá, Năm sản xuất và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử <<, >> để nhập, xuất dữ liệu.
c. Xây dựng toán tử so sánh “>” để so sánh hai đối tượng xe dựa trên giá tiền.
d. Xây dựng toán tử “<” để so sánh hai đối tượng xe xem xe nào mới hơn thông qua năm sản xuất.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập vào danh sách n xe (n nhập từ bàn phím).
b. Hiển thị các danh sách vừa nhập.
c. Đưa ra danh sách các xe có năm sản xuất là 2010.
d. Hiển thị danh sách xe có giá >100 triệu.
Ý 2: 
a. Xây dựng lớp XEOTO kế thừa lớp XE đã xây dựng ở Câu 1 và có thêm thông tin Số chỗ ngồi (>= 1)
b. Xây dựng phương thức nhập dữ liệu để nhập thông tin XEOTO từ bàn phím và phương thức hiển thị để hiển thị thông tin XEOTO gồm: Nhãn hiệu, Giá, Năm sản xuất, Số chỗ ngồi.
c. Xây dựng các thành phần sau cho lớp XEOTO:
	- Xây dựng phương thức lấy giá tiền của XEOTO.
	- Xây dựng hàm toán tử “>” để so sánh giá tiền của XEOTO với một số cùng kiểu dữ liệu với giá tiền.
	- Xây dựng hàm toán tử “==” để so sánh giá tiền của XEOTO với một số cùng kiểu dữ liệu với giá tiền.
	- Khai báo một mảng lưu trữ N đối tượng XEOTO (với N là số nguyên dương nhập từ bàn phím).
d. Viết chương trình thực hiện các yêu cầu sau:
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng XEOTO.
	- Hiển thị danh sách các đối tượng XEOTO có giá tiền >= M ra màn hình (với M là số nguyên dương nhập từ bàn phím).
Bài 41:
Ý 1: 
Một lớp đối tượng SACH trong hệ thống quản lý thư viện có các thuộc tính tên sách, tổng số quyển sách, số quyển sách đã cho mượn và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng phương thức tính số sách còn lại trong thư viện (tổng số sách – số quyển đã cho mượn).
c. Xây dựng toán tử “<<”, “ >>” để nhập, xuất dữ liệu.
d. Xây dựng toán tử so sánh “>” để so sánh hai đối tượng sách dựa trên tổng số quyển sách.
f. Xây dựng toán tử “==” để so sánh hai đối tượng sách có cùng tên hay không.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập dữ liệu cho đối tượng sách từ bàn phím.
b. Hiển thị các thông tin vừa nhập ra màn hình.
c. Đưa ra màn hình thông tin về các quyển sách hiện có trong thư viện (số sách còn lại >0).
Ý 2: 
Dựa vào lớp SACH đã xây dựng trong Câu 1 để 
a. Xây dựng lớp EBook kế thừa lớp SACH đã xây dựng ở Câu 1 và có thêm thông tin Số lượt tải (>=0), Phí tải sách (>=0).
b. Xây dựng phương thức nhập dữ liệu từ bàn phím và phương thức hiển thị để hiển thị thông tin SACH, Số lượt tải, Phí tải sách và Số tiền thu được do tải sách.
c. Thực hiện yêu cầu sau:
	- Xây dựng phương thức Tính tiền cho lớp EBook để tính số tiền mỗi Ebook thu được do người tải trả theo công thức sau: Tính tiền = Số lượt tải * Phí tải sách.
	- Xây dựng hàm nạp chồng cho toán tử “>” để so sánh Số tiền thu của 2 đối tượng Ebook.
	- Khai báo một mảng lưu trữ N đối tượng EBook (với N là số nguyên dương nhập từ bàn phím).
d. Viết chương trình thực hiện các yêu cầu sau:
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng đã khai báo.
	- Sắp xếp mảng đối tượng Ebook theo chiều tăng dần Số tiền thu được do tải sách.
	- Hiển thị thông tin các phần tử trong mảng sau khi đã sắp xếp ra màn hình.
Bài 42:
Ý 1: 
Xây dựng lớp cơ sở VECTO có các thông tin về hai tọa độ trong mặt phẳng hai chiều: x, y và các phương thức:
	- Phương thức nhập để nhập tọa độ x, y.
	- Phương thức xuất để hiển thị tọa độ của vecto ra màn hình.
	- Các phép toán cộng, trừ hai vecto (Cho hai vecto A(x1, y1) và B(x2,y2) thì A+B là vecto có tọa độ (x1+ x2, y1+y2), A-B là vecto có tọa độ (x1 - x2, y1 - y2).
Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “ >>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử so sánh “==” để so sánh hai đối tượng vecto.
d. Xây dựng toán tử tiền tố “++” để tăng tọa độ của vecto.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình chính thực hiện nhập vào hai vecto A, B.
b. Hiển thị các thông tin vừa nhập ra màn hình.
c. Tính tổng của hai vecto và in kết quả ra màn hình.
d. Tính hiệu của hai vecto và in kết quả ra màn hình.
Ý 2: 
a. Xây dựng lớp VECTO3D kế thừa lớp VECTO đã xây dựng ở Câu 1 và có thêm thông tin Trục tọa độ z.
b. Xây dựng phương nạp chồng thức nhập dữ liệu từ bàn phím và phương thức nạp chồng hiển thị dữ liệu để hiển thị thông tin VECTO3D: (x, y, z).
c. Cho 2 đối tượng VECTO3D có tọa độ lần lượt là u(x1,y1,z1) và v(x2,y2,z3). Hãy xây dựng các hàm toán tử sau cho lớp VECTO3D:
	- Hàm toán tử “*” để tính tích vô hướng của 2 đối tượng VECTO3D theo công thức u*v = x1*x2 + y1*y2 + z1*z2.
	- Hàm toán tử “^” để tính tích có hướng của 2 đối tượng VECTO3D kết quả trả về là một đối tượng VECTO3D có tọa độ được tính theo công thức: u^v = (y1*z2 -y2*z1, z1*x2-z2*x1, x1*y2-x2*y1).
d. Viết chương trình thực hiện các yêu cầu sau:
	- Khai báo một mảng lưu trữ N đối tượng VECTO3D (với N là số nguyên dương nhập từ bàn phím, N >= 3).
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng VECTO3D.
	- Trong mảng đối tượng VECTO3D đã nhập, hãy thực hiện tìm và hiển thị tất cả các cặp véc tơ có tích vô hướng bằng 0 (u*v == 0).
Bài 43:
Ý 1: 
Xây dựng lớp NHANSU với các thông tin: Tên, năm sinh, số chứng minh thư và các phương thức nhập, xuất dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử so sánh “>” để so sánh tuổi hai đối tượng nhân sự dựa trên năm sinh.
d. Xây dựng toán tử “==” để so sánh hai đối tượng nhân sự xem có trùng tên hay không?
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập vào thông tin n nhân sự (n nhập từ bàn phím).
b. Hiển thị danh sách nhân sự vừa nhập ra màn hình.
c. Sắp xếp các danh sách theo chiều tăng dần của tên và hiển thị danh sách đã sắp xếp ra màn hình.
d. Đưa ra danh sách những người có tên là “Hà” trong danh sách.
Ý 2: 
a. Xây dựng lớp NGHIHUU gồm các thông tin Lương hưu, Thông tin nhân sự (có kiểu NHANSU đã xây dựng ở Câu 1).
b. Xây dựng các thành phần sau cho lớp NGHIHUU:
	- Xây dựng phương thức nhập dữ liệu không tham số để nhập thông tin cho đối tượng NGHIHUU từ bàn phím.
	- Xây dựng phương thức nhập dữ liệu 1 tham số là đối tượng NHANSU để nhập thông tin Lương hưu từ bàn phím, còn Thông tin nhân sự của đối tượng NGHIHUU được lấy từ tham số truyền vào.
	- Xây dựng phương thức hiển thị để hiển thị thông tin đối tượng NGHIHUU gồm: Lương hưu và Thông tin nhân sự.
c. Thực hiện các yêu cầu sau:
	- Xây dựng phương thức lấy ra năm sinh của đối tượng NHANSU.
	- Xây dựng phương thức lấy ra Lương hưu của đối tượng NGHIHUU.
	- Xây dựng hàm toán tử “>” để so sánh Lương hưu của đối tượng NGHIHUU với một số nguyên.
	- Xây dựng hàm toán tử “==” để so sánh Lương hưu của đối tượng NGHIHUU với một số nguyên.
	- Khai báo một mảng lưu trữ đối tượng NGHIHUU.
d. Viết chương trình thực hiện các yêu cầu sau:
	- Lưu trữ tất cả đối tượng NHANSU đã nhập trong Câu 1 có Tuổi = Năm hiện tại - Năm sinh > 55 vào mảng đối tượng NGHIHUU ở trên và nhập thêm thông tin Lương hưu cho đối tượng NGHIHUU.
	- Hiển thị danh sách đối tượng NGHIHUU có Lương hưu cao nhất ra màn hình.
Bài 44:
Ý 1: 
Xây dựng lớp CanBo (Cán bộ) gồm các thuộc tính Tên, Hệ số lương, Lương cơ bản và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.3
b. Xây dựng phương thức tính Lương theo công thức: Lương = Hệ số lương * Lương cơ bản.
c. Xây dựng toán tử “<<”, “ >>” để nhập, xuất dữ liệu.
d. Xây dựng toán tử so sánh “>” để so sánh hai đối tượng dựa trên hệ số lương.
e. Xây dựng toán tử “==” để so sánh tổng lương của hai đối tượng.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập vào thông tin n cán bộ (n nhập từ bàn phím).
b. Hiển thị danh sách nhân sự vừa nhập ra màn hình.
d. Đưa ra thông tin của người có mức lương cao nhất.
Ý 2: 
a. Xây dựng lớp GIAOVIEN kế thừa lớp CanBo đã xây dựng ở Câu 1 và có thêm thông tin Phụ cấp đứng lớp.
b. Xây dựng phương thức nạp chồng nhập dữ liệu từ bàn phím và phương thức nạp chồng hiển thị để hiển thị thông tin GIAOVIEN: Tên, Hệ số lương, Lương cơ bản, Phụ cấp đứng lớp (tính theo phần trăm).
c. Thực hiện các yêu cầu sau:
	- Xây dựng phương thức nạp chồng tính Lương cho đối tượng GIAOVIEN theo công thức = Hệ số lương * Lương cơ bản*(1+Phụ cấp đứng lớp).
	- Khai báo một mảng lưu trữ M đối tượng CanBo và N đối tượng GIAOVIEN (với M, N là 2 số nguyên dương nhập từ bàn phím).
d. Viết chương trình thực hiện các yêu cầu sau:
	- Nhập dữ liệu cho các phần tử trong mảng theo đúng khai báo.
	- Hiển thị thông tin của các đối tượng trong mảng có Lương > 3.000.000 ra màn hình.
Bài 45:
Ý 1: 
Xây dựng lớp LOPHOC gồm các thông tin mã lớp, tên lớp, số học viên và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử “<” để so sánh hai đối tượng lớp học thông qua số học viên.
d. Xây dựng toán tử so sánh “==” để so sánh hai đối tượng lớp học có cùng tên không thông qua tên lớp.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập vào thông tin n lớp học (n nhập từ bàn phím).
b. Hiển thị danh sách lớp học vừa nhập ra màn hình.
c. Sắp xếp danh sách theo chiều tăng dần của số học viên trong lớp và hiển thị danh sách đã sắp xếp ra màn hình.
d. Đưa ra thông tin lớp học có số học viên lớn nhất trong lớp.
Ý 2: 
a. Xây dựng lớp HOCVIEN gồm các thông tin Tên học viên, Lớp học (có kiểu LOPHOC đã xây dựng ở Câu 1).
b. Xây dựng các thành phần sau cho lớp HOCVIEN:
	- Xây dựng phương thức nhập dữ liệu không tham số để nhập thông tin cho đối tượng HOCVIEN từ bàn phím.
	- Xây dựng phương thức nhập dữ liệu 1 tham số (là đối tượng LOPHOC) để nhập thông tin Tên học viên từ bàn phím, còn thông tin Lớp học của đối tượng HOCVIEN được lấy từ tham số truyền vào.
	- Xây dựng phương thức hiển thị để hiển thị thông tin đối tượng HOCVIEN: Mã lớp, Tên lớp, Số học viên, Tên học viên.
c. Thực hiện các yêu cầu sau:
	- Viết hàm hiển thị 1 tham số (là Mã lớp) để hiển thị tất cả học viên của lớp có Mã lớp là tham số của hàm.
	- Xây dựng phương thức lấy số học viên cho lớp LOPHOC.
	- Xây dựng hàm toán tử “<” cho lớp HOCVIEN để so sánh số học viên của Lớp học với một số nguyên.
	- Xây dựng hàm toán tử “==” cho lớp HOCVIEN để so sánh số học viên của Lớp học với một số nguyên.
	- Khai báo một mảng lưu trữ để thông tin các đối tượng HOCVIEN đăng ký vào LOPHOC đã nhập ở Câu 1.
d. Viết chương trình thực hiện các yêu cầu sau:
	- Với mỗi đối tượng LOPHOC đã nhập trong Câu 1, hãy nhập Số học viên đăng ký học và thông tin các học viên đăng ký học, thông tin học viên đăng ký học được lưu trữ vào mảng đối tượng HOCVIEN đã khai báo ở trên.
	- Hiển thị danh sách học viên của các lớp đã đăng ký đủ số học viên để mở lớp (Số học viên của đối tượng LOPHOC <= Số học viên đăng ký học).
Bài 46:
Ý 1: 
Xây dựng lớp MAYTINH (máy tính) với các thông tin: hãng sản xuất, năm sản xuất, số lượng, giá tiền và các phương thức nhập, hiển thị dữ liệu. Thực hiện các yêu cầu sau:
a. Xây dựng hàm tạo (hàm thiết lập) không tham số, hàm tạo (hàm thiết lập) có tham số.
b. Xây dựng toán tử “<<”, “>>” để nhập, xuất dữ liệu.
c. Xây dựng toán tử so sánh “<” để so sánh hai đối tượng máy tính thông qua giá tiền.
d. Sử dụng nạp chồng toán tử “>” để so sánh hai đối tượng máy tính thông qua số lượng.
Viết chương trình thực hiện các yêu cầu sau:
a. Viết chương trình nhập vào thông tin n máy tính (n nhập từ bàn phím).
b. Hiển thị danh sách máy tính vừa nhập ra màn hình.
c. Sắp xếp danh sách các máy tính theo chiều tăng dần của số lượng và hiển thị danh sách đã sắp xếp ra màn hình.
d. Đưa ra thông tin máy tính có giá tiền cao nhất.
Ý 2: 
a. Xây dựng lớp MAYCHU kế thừa lớp MAYTINH đã xây dựng ở trên và có thêm thông tin Dịch vụ cung cấp (DHCP, DNS, Mail, FTP,…), Giá thuê (>0).
b. Xây dựng phương thức nạp chồng nhập dữ liệu để nhập thông tin MAYCHU từ bàn phím và phương thức nạp chồng hiển thị dữ liệu để hiển thị thông tin MAYCHU gồm: Hãng sản xuất, Năm sản xuất, Số lượng, Giá tiền, Dịch vụ cung cấp và Giá thuê của MAYCHU.
c. Xây dựng các phương thức sau cho lớp MAYCHU:
	- Xây dựng hàm toán tử “==” để so sánh Dịch vụ cung cấp của MAYCHU với xâu S là tham số truyền vào của hàm toán tử “==”
	- Xây dựng hàm toán tử “>” để so sánh giá tiền của MAYCHU với số nguyên M là tham số truyền vào của hàm toán tử “>”.
d. Viết chương trình thực hiện các yêu cầu sau:
	- Khai báo một mảng lưu trữ N đối tượng MAYCHU (với N là số nguyên dương nhập từ bàn phím).
	- Nhập dữ liệu cho các phần tử trong mảng đối tượng MAYCHU.
	- Trong mảng đối tượng MAYCHU đã nhập, hãy thực hiện hiển thị tất cả các MAYCHU cung cấp dịch vụ DNS và có giá tiền > 1000000.
