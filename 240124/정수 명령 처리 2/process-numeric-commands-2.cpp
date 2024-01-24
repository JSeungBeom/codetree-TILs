#include <iostream>
#include <queue>

using namespace std;

int N;
queue<int> q;
string s;
int a;

int main() {
    cin >> N;

    while(N--){
        cin >> s;

        if(s == "push"){
            cin >> a;
            q.push(a);            
        }   
        else if(s == "pop"){
            cout << q.front() << '\n';
            q.pop();
        } 
        else if(s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            cout << q.empty() << '\n';
        }
        else{
            cout << q.front() << '\n';
        }
    }
    return 0;
}