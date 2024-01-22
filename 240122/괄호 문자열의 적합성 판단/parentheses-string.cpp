#include <iostream>
#include <stack>

using namespace std;

string s;
stack<char> st;

int main() {
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            st.push('(');
        }
        else{
            if(st.empty()){
                cout << "No";
                return 0;
            }
            else{
                st.pop();
            }
        }
    }

    if(!st.empty())
        cout << "No";
    else
        cout << "Yes";
        
    return 0;
}