#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int Q, y, x;
    cin>>Q;
    while(Q--){
        cin>>y>>x;
        switch(y){
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if(s.find(x) != s.end())
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
        }
    }
    return 0;
}
