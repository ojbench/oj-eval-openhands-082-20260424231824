
#include <iostream>
#include <string>
#include <vector>
#include "LinkedHashMap.hpp"

using namespace std;

int main() {
    // Test basic functionality
    cout << "Testing LinkedHashMap implementation..." << endl;
    
    // Create LinkedHashMap with time-based traversal
    LinkedHashMap map1(10, true);
    
    // Insert some test data
    map1.insert(1, "A");
    map1.insert(2, "B");
    map1.insert(1, "C");
    map1.insert(3, "D");
    
    // Test ask function
    vector<string> values1 = map1.ask(1);
    cout << "Values for key 1: ";
    for(int i = 0; i < values1.size(); i++) {
        cout << values1[i] << " ";
    }
    cout << endl;
    
    // Test forEach with time traversal
    vector<Data> result1 = map1.forEach();
    cout << "Time traversal: ";
    for(int i = 0; i < result1.size(); i++) {
        cout << "(" << result1[i].key << "," << result1[i].value << ") ";
    }
    cout << endl;
    
    // Test remove
    map1.remove(1, "C");
    values1 = map1.ask(1);
    cout << "Values for key 1 after removing C: ";
    for(int i = 0; i < values1.size(); i++) {
        cout << values1[i] << " ";
    }
    cout << endl;
    
    // Create LinkedHashMap with index-based traversal
    LinkedHashMap map2(10, false);
    map2.insert(3, "X");
    map2.insert(1, "Y");
    map2.insert(2, "Z");
    
    // Test forEach with index traversal
    vector<Data> result2 = map2.forEach();
    cout << "Index traversal: ";
    for(int i = 0; i < result2.size(); i++) {
        cout << "(" << result2[i].key << "," << result2[i].value << ") ";
    }
    cout << endl;
    
    cout << "All tests completed successfully!" << endl;
    
    return 0;
}
