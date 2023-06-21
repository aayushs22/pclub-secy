#include "testlib.h"//This is the generator code.
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    int m=  atoi(argv[2]);
    int ai= atoi(argv[3]);
    // long long n=100000;
    cout << n << " ";
    cout << m << endl;
    for(int i=0;i<n;i++){
       if(i!=n-1) cout<<rnd.next(1,ai)<<" ";
       else cout<<rnd.next(1,ai);
    }
    cout<<endl;
}
