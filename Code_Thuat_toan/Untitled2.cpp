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

    // Chèn t? vào t? di?n
    void insert(const string& english_word, const string& vietnamese_meaning) {
        int index = hashFunction(english_word);
        // Ki?m tra n?u t? dã t?n t?i, c?p nh?t nghia n?u có
        for (auto& entry : table[index]) {
            if (entry.first == english_word) {
                entry.second = vietnamese_meaning;
                return;
            }
        }
        // N?u không có, thêm m?i
        table[index].push_back(make_pair(english_word, vietnamese_meaning));
    }

    // Tìm ki?m nghia c?a t?
    string get(const string& english_word) {
        int index = hashFunction(english_word);
        for (const auto& entry : table[index]) {
            if (entry.first == english_word) {
                return entry.second;
            }
        }
        return "Not Found";  // N?u không tìm th?y
    }
};

int main() {
    ChainHashTable dictionary;
    dictionary.insert("apple", "qu? táo");
    dictionary.insert("banana", "qu? chu?i");
    dictionary.insert("car", "xe hoi");

    cout << dictionary.get("apple") << endl;   // Output: qu? táo
    cout << dictionary.get("banana") << endl;  // Output: qu? chu?i
    cout << dictionary.get("car") << endl;     // Output: xe hoi
    cout << dictionary.get("bike") << endl;    // Output: Not Found

    return 0;
}

