#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

string chuanHoaTen(string ten) {
    int n = ten.size();
    while (n > 0 && isspace(ten[0])) {
        ten.erase(0, 1);
        n--;
    }
    while (n > 0 && isspace(ten[n - 1])) {
        ten.erase(n - 1, 1);
        n--;
    }
    stringstream ss(ten);
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
        string ten;
        getline(cin, ten);
        cout << chuanHoaTen(ten) << endl;
    }
    
    return 0;
}
