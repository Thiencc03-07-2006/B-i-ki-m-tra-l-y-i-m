#include <iostream>
#include <string>
using namespace std;

struct Student {
    string hoTen;
    string ngaySinh;
    float diem1, diem2, diem3;
    float tongDiem;
};

int main() {
    int n;
    cin >> n;
    Student hocSinh[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, hocSinh[i].hoTen);
        getline(cin, hocSinh[i].ngaySinh);
        cin >> hocSinh[i].diem1 >> hocSinh[i].diem2 >> hocSinh[i].diem3;
        hocSinh[i].tongDiem = hocSinh[i].diem1 + hocSinh[i].diem2 + hocSinh[i].diem3;
    }
    float maxdiem = -1;
    for (int i = 0; i < n; i++) {
        if (hocSinh[i].tongDiem > maxdiem) {
            maxdiem = hocSinh[i].tongDiem;
        }
    }
    for (int i = 0; i < n; i++) {
        if (hocSinh[i].tongDiem == maxdiem) {
            cout << i+1 << " " << hocSinh[i].hoTen << " " << hocSinh[i].ngaySinh << " " << hocSinh[i].tongDiem << endl;
        }
    }

    return 0;
}
