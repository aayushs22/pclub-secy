#include "testlib.h"//This is the validator code.
#include <bits/stdc++.h>
using namespace std;
// bool prime(int x){
//   if(x == 1)return false;
// 	for(int i = 2;i * i <= x;i++){
// 		if(x%i == 0)return false;
// 	}
// 	return true;
// }
int main(int argc, char** argv){
    registerValidation(argc, argv);
    int n=inf.readInt(1,100000,"n");
    inf.readSpace();
    int m=inf.readInt(1,100000,"m");
    // inf.readSpace();
    inf.readEoln();
    for(int i=1;i<=n;i++){
      int ai=inf.readInt(1,1000000000,"ai");
      if(i!=n){
        inf.readSpace();
      }
    }
    inf.readEoln();
    inf.readEof();
    return 0;
}
