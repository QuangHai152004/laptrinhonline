#include<bits/stdc++.h>
#define QHaiz main
using namespace std;

class BamDayChuyen {
    private:
        int size;
        vector<list<pair<string, string> > > hashTable;
        int hamBam(const string &s) {
            int sum = 0;
            for (char a : s) {
                sum += a;
            }
            return sum % size;
        }

    public:
        BamDayChuyen(int s = 23) : size(s) {
            hashTable.resize(size);
        }
        void insert(const string &vietnam, const string &english) {
            int index = hamBam(english); 
            for (auto &word : hashTable[index]) {
                if (word.first == english) { 
                    word.second = vietnam; 
                    return;
                }
            }
            hashTable[index].push_back(make_pair(english, vietnam));
        }
        string get(const string &english) {
            int index = hamBam(english); 
            for (auto &word : hashTable[index]) {
                if (word.first == english) { 
                    return word.second; 
                }
            }
            return "Khong tim thay trong tu dien";
        }
};

int QHaiz() {
    BamDayChuyen tudien; 
    tudien.insert("cho", "dog");
    tudien.insert("lop", "class");

    cout << tudien.get("dog") << endl;
    cout << tudien.get("class") << endl;
    cout << tudien.get("cat");

    return 0;
}

