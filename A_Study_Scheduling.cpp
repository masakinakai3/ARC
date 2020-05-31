#include <bits/stdc++.h>
using namespace std;


int main() {

 
    int h1,m1,h2,m2,k;
    cin>>h1>>m1>>h2>>m2>>k;

    
    int hwk=h2-h1;
    int mwk;
    if(m2>=m1)
        mwk=m2-m1;
    else{
        mwk=(m2+60)-m1;
        hwk--;
    }

    cout<<hwk*60+mwk-k<<endl;

    return 0;
}
