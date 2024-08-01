#include<bits/stdc++.h>
using namespace std;


void toLowerCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

bool isDelimiter(char ch) {
    return isspace(ch) || ispunct(ch);
}

int main() {
    string paragraph;
    map<string, int> wordFrequencies;

    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    stringstream ss(paragraph);
    string word;

    while (ss >> word) {
        while (!word.empty() && ispunct(word.front())) word.erase(0, 1);
        while (!word.empty() && ispunct(word.back())) word.pop_back();

        toLowerCase(word);
        if (!word.empty()) {
            wordFrequencies[word]++;
        }
    }

    cout << "Word frequencies:\n";
    for (const auto &entry : wordFrequencies) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
