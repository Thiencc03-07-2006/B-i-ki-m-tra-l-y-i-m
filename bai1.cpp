#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

string vietDung(string hoTen) {
    int n = hoTen.size();
    while (n > 0 && isspace(hoTen[0])) {
        hoTen.erase(0, 1);
        n--;
    }
    while (n > 0 && isspace(hoTen[n - 1])) {
        hoTen.erase(n - 1, 1);
        n--;
    }
    stringstream ss(hoTen);
    string tu;
    vector<string> words;
    
    while (ss >> tu) {
        tu[0] = toupper(tu[0]);
        for (int i = 1; i < tu.size(); i++) {
            tu[i] = tolower(tu[i]);
        }
        words.push_back(tu);
    }
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string hoTen;
        getline(cin, hoTen);
        cout << vietDung(hoTen) << endl;
    }
    
    return 0;
}
