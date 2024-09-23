#include<bits/stdc++.h>
#define QHaiz main
using namespace std;

class ThamDoTuyenTinh {
    private:
        int size;
        vector<pair<string, string> > hashTable;
        int hamBam(const string &s) {
            int sum = 0;
            for (char a : s) {
                sum += a;
            }
            return sum % size;
        }

    public:
        ThamDoTuyenTinh(int s = 23) : size(s) {
            hashTable.resize(size,{"",""});
        }
        void insert(const string &vietnam, const string &english) {
        	int index = hamBam(english);
        	int main_index = index;
        	while(!hashTable[index].first.empty()){
        		if(hashTable[index].first == english){
        			hashTable[index].second = vietnam;
        			return;
        		}
				index = (index + 1) % size;	
				
				if (index = main_index){
        			throw overflow_error("Bang bam day !");
        		}		
        	}
        	hashTable[index] = {english,vietnam};
        }
        string get(const string &english) {
        	int index = hamBam(english);
        	int main_index = index;
        	while(!hashTable[index].first.empty()){
        		if(hashTable[index].first == english) return hashTable[index].second;
				index = (index + 1) % size;		
				
				if (index == main_index){
        			break;
        		}
        	}
        	return "Khong tim thay! ";
        }
};

int QHaiz() {
    ThamDoTuyenTinh tudien; 
    tudien.insert("cho", "dog");
    tudien.insert("lop", "class");

    cout << tudien.get("dog") << endl;
    cout << tudien.get("class") << endl;
    cout << tudien.get("cat");

    return 0;
}

