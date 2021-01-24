#include <iostream>
#define println(x) cout<<x<<"\n";
#include <math.h>
using namespace std;

int main(){
    int a,b,cnt,y,z;
    while(cin>>a>>b && a!=0 && b!=0){
        cnt = 0;
        for(int i=a; i<=b;i++){
            z = (int)sqrt(i);
            cnt+= (pow(z,2) == i) ? 1:0;
        }
        println(cnt);
    }
    return 0;
}
