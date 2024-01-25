#include <iostream>
#include <deque>

using namespace std;

int n;
string s;
deque<int> dq;

int main() {
    cin >> n;

    int a;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s == "push_front"){
            cin >> a;
            dq.push_front(a);
        }
        else if(s == "push_back"){
            cin >> a;
            dq.push_back(a);
        }
        else if(s == "pop_back"){
            cout << dq.back() << '\n';
            dq.pop_back();
        }
        else if(s == "pop_front"){
            cout << dq.front() << '\n';
            dq.pop_front();
        }
        else if(s == "size"){
            cout << dq.size() << '\n';
        }
        else if(s == "empty"){
            cout << dq.empty() << '\n';
        }
        else if(s == "front"){
            cout << dq.front() << '\n';
        }
        else{
            cout << dq.back() << '\n';
        }
    }
    return 0;
}