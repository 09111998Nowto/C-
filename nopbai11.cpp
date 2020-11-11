#include <bits/stdc++.h>

using namespace std;

// ==================================================================
// ==================================================================
// class HangHoa
class HangHoa {
  string tenMatHang;
  string maMatHang;
  float donGia;
  int soLuong;

public:
  HangHoa();
  HangHoa(string tenMatHang, string maMatHang, float donGia, int soLuong);
  float getTongGiaTriHangHoa();
  void inTenHangHoaVaTongGiaTri();
};
// khai bao functions
HangHoa::HangHoa() {
  tenMatHang = "";
  maMatHang = "";
  donGia = 0.0;
  soLuong = 0;
}

HangHoa::HangHoa(string tenMatHang, string maMatHang, float donGia,
                 int soLuong) {
  this->tenMatHang = tenMatHang;
  this->maMatHang = maMatHang;
  this->donGia = donGia;
  this->soLuong = soLuong;
}

float HangHoa::getTongGiaTriHangHoa() { return (this->donGia * this->soLuong); }

void HangHoa::inTenHangHoaVaTongGiaTri() {
  cout << "________________________" << endl;
  cout << "Ma mat hang " << this->maMatHang << endl;
  cout << "Ten: " << this->tenMatHang << endl;
  cout << "So luong: " << this->soLuong << endl;
  cout << "Tong gia tri: " << this->getTongGiaTriHangHoa() << endl;
  cout << "________________________" << endl;
}
// het class HangHoa
// ==================================================================
// ==================================================================

//

// ==================================================================
// ==================================================================
// class HoaDon
class HoaDon {
  string soHoaDon;
  string ngayLapHoaDon;
  string nguoiLapHoaDon;
  int soLuongMatHang;
  HangHoa danhSachMatHang[100];

public:
  HoaDon();
  HoaDon(string soHoaDon, string ngayLapHoaDon, string nguoiLapHoaDon,
         int soLuongMatHang);
  float tongGiaTriDonHang();
  void nhapDachSachMatHang();
  void inDachSachMatHang();
  //   void nhapSoLuongMatHang();
  //   int laySoLuongMatHang();
};
// khai bao functions
HoaDon::HoaDon() {
  soHoaDon = "";
  ngayLapHoaDon = "";
  nguoiLapHoaDon = "";
  int soLuongMatHang = 0;
}

HoaDon::HoaDon(string soHoaDon, string ngayLapHoaDon, string nguoiLapHoaDon,
               int soLuongMatHang) {
  this->soHoaDon = soHoaDon;
  this->ngayLapHoaDon = ngayLapHoaDon;
  this->nguoiLapHoaDon = nguoiLapHoaDon;
  this->soLuongMatHang = soLuongMatHang;
}

void HoaDon::nhapDachSachMatHang() {}

void HoaDon::inDachSachMatHang() {
  cout << "======================================" << endl;
  cout << "So hoa don: " << this->soHoaDon << endl;
  cout << "Ngay lap hoa don: " << this->ngayLapHoaDon << endl;
  cout << "Nguoi lap hoa don: " << this->nguoiLapHoaDon << endl;
  cout << "So luong mat hang: " << this->soLuongMatHang << endl;
  cout << "======================================";
}

// het class HoaDon
// ==================================================================
// ==================================================================

// ham main
int main() {
  HangHoa hang1("bo huc", "123OBJ", 10000, 2);
  HangHoa hang2("Sting", "124OBJ", 8000, 1);
  hang1.inTenHangHoaVaTongGiaTri();
  hang2.inTenHangHoaVaTongGiaTri();
  HoaDon hd("56JPDF", "20/11/2020", "Huy Nguyen Giang", 2);
  hd.inDachSachMatHang();
}

// het ham main
