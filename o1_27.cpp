#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Stack {
    vector<int> s;
    
    void push(int n) {
        s.push_back(n);
    }
    
    int pop() {
        int l = s.back();
        s.pop_back();
        return l;
    }
    
    int back() {
        return s.back();
    }
    
    int size() {
        return s.size();
    }
    
    void clear() {
        s.clear();
    }
    
    bool empty() {
        return s.empty();
    }
};

int main() {
    Stack stack;
    string command;
    
    while (true) {
        cin >> command;
        
        if (command == "push") {
            int n;
            cin >> n;
            stack.push(n);
            cout << "ok" << endl;
        }
        else if (command == "pop") {
            if (stack.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack.pop() << endl;
            }
        }
        else if (command == "back") {
            if (stack.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack.back() << endl;
            }
        }
        else if (command == "size") {
            cout << stack.size() << endl;
        }
        else if (command == "clear") {
            stack.clear();
            cout << "ok" << endl;
        }
        else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }
}