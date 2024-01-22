#include <iostream>
#include <stack>

using namespace std;

int N;
int q;
string s;
stack<int> st;

int main() {
    cin >> N;

    while(N--){
        cin >> s;

        if(s == "push"){
            cin >> q;
            st.push(q);
        }
        else if(s == "pop"){
            cout << st.top() << '\n';
            st.pop();
        }
        else if(s == "size"){
            cout << st.size() << '\n';
        }
        else if(s == "empty"){
            cout << st.empty() << '\n';
        }
        else{
            cout << st.top() << '\n';
        }
    }
    return 0;
}