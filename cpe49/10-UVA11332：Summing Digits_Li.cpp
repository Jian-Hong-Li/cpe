#include <cstdio>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n)!=EOF){
        if(n==0) break;
        
        printf("%d\n", (n-1)%9+1);
    }
    return 0;
}