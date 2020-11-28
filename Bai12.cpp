#include <bits/stdc++.h>

using namespace std;

// class SinhVien
class SinhVien {
  long ms;
  string hoten;
  float cc, th, ktgk, ktck, bt;
  float qt, kt, hp;

public:
  void nhap();
  float tinhDiemQT();
  float tinhDiemKT();
  float tinhDiemHP();
  void inSinhVien();
};

void SinhVien::nhap() {
  cout << "==============================" << endl;
  cout << "Nhap mssv: " << endl;
  cin >> ms;
  cout << "Nhap ho ten: " << endl;
  cin >> hoten;
  cout << "Nhap diem chuyen can: " << endl;
  cin >> cc;
  cout << "Nhap diem thuc hanh: " << endl;
  cin >> th;
  cout << "Nhap diem kiem tra giua ky: " << endl;
  cin >> ktgk;
  cout << "Nhap diem cuoi ky: " << endl;
  cin >> ktck;
  cout << "Nhap diem bai tap: " << endl;
  cin >> bt;
}

float SinhVien::tinhDiemQT() {
  return 0.1 * this->cc + 0.1 * this->bt + 0.1 * this->th;
}

float SinhVien::tinhDiemKT() { return 0.3 * this->ktgk + 0.4 * this->ktck; }

float SinhVien::tinhDiemHP() { return tinhDiemQT() + tinhDiemKT(); }

void SinhVien::inSinhVien() {
  cout << "Ten: " << this->hoten << ", mssv: " << this->ms
       << ", DQT: " << this->tinhDiemQT() << ", DKT: " << this->tinhDiemKT()
       << ", DHP: " << this->tinhDiemHP() << endl;
}
// het class SinhVien

// class Lop
class Lop {
  string tenlop;
  int siso;
  SinhVien ds[60];

public:
  Lop(string ten, int ss);
  void nhapSV();
  void tinhDiem();
  void sapXep();
  void inDanhSach();
  void inDanhSachDat(); // > 5.5;
};

Lop::Lop(string ten, int ss) {
  this->tenlop = ten;
  this->siso = ss;
}

void Lop::nhapSV() {
  for (int i = 0; i < this->siso; i++) {
    ds[i].nhap();
  }
}

void Lop::tinhDiem() {
  for (int i = 0; i < this->siso; i++) {
    cout << "Nhap thong tin cho sv thu: " << i + 1 << endl;
    ds[i].tinhDiemQT();
    ds[i].tinhDiemKT();
    ds[i].tinhDiemHP();
  }
}

void Lop::sapXep() {
  SinhVien sv;

  cout << endl;

  for (int i = 0; i < this->siso; i++) {
    for (int j = 0; j < this->siso; j++) {
      if (ds[i].tinhDiemHP() > ds[j].tinhDiemHP()) {
        sv = ds[i];
        ds[i] = ds[j];
        ds[j] = sv;
      }
    }
  }
  cout << "Danh sach sv da sap xep: " << endl;
  for (int x = 0; x < this->siso; x++) {
    ds[x].inSinhVien();
  }
}

void Lop::inDanhSach() {
  cout << endl;
  cout << "Danh sach diem cua sinh vien: " << endl;
  for (int i = 0; i < this->siso; i++) {
    ds[i].inSinhVien();
  }
}

void Lop::inDanhSachDat() {
  cout << endl;
  cout << "Danh sach diem cua sinh vien dat: " << endl;
  for (int i = 0; i < this->siso; i++) {
    if (ds[i].tinhDiemHP() > 5.5) {
      ds[i].inSinhVien();
    }
  }
}

int main() {
  string tenlop;
  int siso;
  cout << "Nhap ten lop: " << endl;
  cin >> tenlop;
  cout << "Nhap si so: " << endl;
  cin >> siso;

  cout << endl;
  cout << "Nhap thong tin cho " << siso << " sinh vien trong lop " << tenlop
       << endl;
  Lop lop(tenlop, siso);
  lop.nhapSV();
  cout << "==============================" << endl;
  lop.inDanhSach();
  cout << "==============================" << endl;
  lop.inDanhSachDat();
  cout << "==============================" << endl;
  lop.sapXep();

  return 0;
}
