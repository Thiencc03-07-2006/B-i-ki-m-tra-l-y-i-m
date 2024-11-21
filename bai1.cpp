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
    string word;
    vector<string> words;
    
    while (ss >> word) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        words.push_back(word);
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
