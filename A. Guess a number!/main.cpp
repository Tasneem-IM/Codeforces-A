#include <iostream>
#define ll long long

using namespace std;

int main() {
    const ll inf=2000000000;
    ll curry =-inf;
    ll currz = inf;

    ll n;
    cin >> n;

    while (n--) {
        string s;
        ll x;
        char s1;
        cin>>s>>x>>s1;

        if (s1=='Y') {
            if (s==">") {
                curry=max(curry,x+1);
            } else if(s=="<") {
                currz=min(currz,x-1);
            } else if (s==">=") {
                curry=max(curry,x);
            } else if (s=="<=") {
                currz=min(currz,x);
            }
            }
                    else if (s1=='N') {
                        if (s==">") {
                            currz=min(currz,x);
                        } else if (s=="<") {
                            curry=max(curry,x);
                        } else if (s==">=") {
                            currz=min(currz,x-1);
                        } else if (s=="<=") {
                            curry=max(curry,x+1);
                        }
                    }
    }

    if (curry<=currz)
    {
        cout<<curry<<endl;
    }
    else
    {
        cout<<"Impossible"<<endl;
    }

    return 0;
}

