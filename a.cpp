#include <iostream>
#include <iomanip>

using namespace std;

struct HS{
  string name;
  int age;
};

void Nhap(HS s[],int n){
  for(int i = 0; i < n; i++){
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, s[i].name);

    cout << "Nhap tuoi: ";
    cin >> s[i].age;
  }
}

void Xuat(HS s[], int n){
  for(int i = 0; i < n; i++){
    cout << s[i].name << setw(6) << s[i].age;
  }
}

int main(){
  int n;
  HS s[n];
  cin >> n;
  Nhap(s, n);
  Xuat(s, n);

}