#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string vowels = "AEIOUYaeiouy";
string consonants = "BCDFGHJKLMNPQRSTVWZbcdfghjklmnpqrstvwz";

bool is_palindrome(string s) {
    int n = s.length();
    if (n <= 1) return false; // Исправлено условие
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - i - 1]) return false;
    return true;
}

bool has_palindromes(vector<string>& words) {
    for (const auto& word : words) {
        if (is_palindrome(word)) return true;
    }
    return false;
}

int count_vowels(string s) {
    int counter = 0;
    for (char c : s) {
        if (vowels.find(c) != string::npos) counter++;
    }
    return counter;
}

void duplicate_vowels(string& s) {
    for (int i = 0; i < s.length();) {
        if (vowels.find(s[i]) != string::npos) {
            s.insert(i + 1, 1, s[i]);
            i += 2;
        } else {
            i++;
        }
    }
}

void sort_by_vowel_count(vector<string>& words) {
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return count_vowels(a) > count_vowels(b);
    });
}

void sort_alphabetically(vector<string>& words) {
    sort(words.begin(), words.end());
}

int main() {
    string input = "BAR ALUMINIUM";
    stringstream ss(input);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    if (has_palindromes(words)) {
        sort_by_vowel_count(words);
    } else {
        for (auto& w : words) {
            duplicate_vowels(w);
        }
        sort_alphabetically(words);
    }

    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}