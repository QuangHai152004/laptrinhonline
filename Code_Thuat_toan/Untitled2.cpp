#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class ChainHashTable {
private:
    int size;
    vector<list<pair<string, string> > > table;

    int hashFunction(const string& key) {
        int sum = 0;
        for (char ch : key) {
            sum += ch;
        }
        return sum % size;
    }

public:
    ChainHashTable(int s = 23) : size(s) {
        table.resize(size);
    }

    // Ch�n t? v�o t? di?n
    void insert(const string& english_word, const string& vietnamese_meaning) {
        int index = hashFunction(english_word);
        // Ki?m tra n?u t? d� t?n t?i, c?p nh?t nghia n?u c�
        for (auto& entry : table[index]) {
            if (entry.first == english_word) {
                entry.second = vietnamese_meaning;
                return;
            }
        }
        // N?u kh�ng c�, th�m m?i
        table[index].push_back(make_pair(english_word, vietnamese_meaning));
    }

    // T�m ki?m nghia c?a t?
    string get(const string& english_word) {
        int index = hashFunction(english_word);
        for (const auto& entry : table[index]) {
            if (entry.first == english_word) {
                return entry.second;
            }
        }
        return "Not Found";  // N?u kh�ng t�m th?y
    }
};

int main() {
    ChainHashTable dictionary;
    dictionary.insert("apple", "qu? t�o");
    dictionary.insert("banana", "qu? chu?i");
    dictionary.insert("car", "xe hoi");

    cout << dictionary.get("apple") << endl;   // Output: qu? t�o
    cout << dictionary.get("banana") << endl;  // Output: qu? chu?i
    cout << dictionary.get("car") << endl;     // Output: xe hoi
    cout << dictionary.get("bike") << endl;    // Output: Not Found

    return 0;
}

