#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct HS{
  string name;
  int age;
  float t, l, h, v, a, tong;
};



void Nhap(HS s[], int n){
  for(int i = 0; i < n; i++){
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin ,s[i].name);

    cout << "Nhap tuoi: ";
    cin >> s[i].age;
    
    cout << "Nhap diem Toan, Li, Hoa, Van, Anh: ";
    cin >> s[i].t >> s[i].l >> s[i].h >> s[i].v >> s[i].a; 
    
    s[i].tong = (s[i].t + s[i].l + s[i].h + s[i].v + s[i].a) / 5;
  }
}

void XuLi(HS s[], int n){
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int t;
      if(s[i].tong < s[i].tong){
        t = s[j].tong;
        s[j].tong = s[i].tong;
        s[i].tong = t;
      }
    }  
  }
}

void Xuat(HS s[], int n){
  cout << setiosflags(ios::showpoint) << setprecision(2);
  cout << setw(25) << "Ten" << setw(10) << "Tuoi" << setw(8) << "Diem" << endl;
  for(int i = 0; i < n; i++){
    cout << setw(25) << s[i].name;
    cout << setw(10) << s[i].age; 
    cout << setw(8) << s[i].tong << endl;
  }
}


int main() {
  int n;
  cout << "Nhap so phan tu n: "; cin >> n;
  HS s[n];
  Nhap(s, n);
  XuLi(s, n);
  Xuat(s, n);
}