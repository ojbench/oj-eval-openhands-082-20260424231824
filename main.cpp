
#include <iostream>
#include <string>
#include <vector>
#include "src.hpp"

using namespace std;

int main() {
    int len, method;
    cin >> len >> method;
    
    LinkedHashMap map(len, method==0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int op;
        cin >> op;
        
        if(op == 1) {
            int key;
            string value;
            cin >> key >> value;
            map.insert(key, value);
        } else if(op == 2) {
            int key;
            string value;
            cin >> key >> value;
            map.remove(key, value);
        } else if(op == 3) {
            int key;
            cin >> key;
            vector<string> ret = map.ask(key);
            cout << ret.size();
            for(int j = 0; j < ret.size(); j++) {
                cout << " " << ret[j];
            }
            cout << endl;
        } else if(op == 4) {
            vector<Data> ret = map.forEach();
            cout << ret.size();
            for(int j = 0; j < ret.size(); j++) {
                cout << " " << ret[j].key << " " << ret[j].value;
            }
            cout << endl;
        }
    }
    
    return 0;
}
