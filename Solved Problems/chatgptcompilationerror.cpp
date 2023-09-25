#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n-1), c(n-2);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n-2; i++) {
        cin >> c[i];
    }
    
    // Find the missing error in b
    unordered_set<int> s;
    for (int i = 0; i < n-1; i++) {
        s.insert(b[i]);
    }
    for (int i = 0; i < n; i++) {
        if (s.find(a[i]) == s.end()) {
            cout << a[i] << endl;
            break;
        }
        s.erase(a[i]);
    }
    
    // Find the missing error in c
    s.clear();
    for (int i = 0; i < n-2; i++) {
        s.insert(c[i]);
    }
    for (int i = 0; i < n-1; i++) {
        if (s.find(b[i]) == s.end()) {
            cout << b[i] << endl;
            break;
        }
        s.erase(b[i]);
    }
    
    return 0;
}