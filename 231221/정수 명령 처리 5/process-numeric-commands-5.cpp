#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int N, k;
string s;

int main() {
    cin >> N;

    while(N--){
        cin >> s;

        if(s == "push_back"){
            cin >> k;
            v.push_back(k);
        }
        else if(s == "pop_back"){
            v.pop_back();
        }
        else if(s == "size"){
            cout << v.size() << '\n';
        }
        else{
            cin >> k;

            cout << v[k - 1] << '\n';
        }
    }
    return 0;
}