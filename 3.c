#include <stdio.h>

int main() {
    int n, i, result=0, a1=0, a2=1;
    scanf("%d", &n);
    
    if (n==1) {
        printf("%d\n", a1);
        return 0;
    }
    else if (n==2){
        printf("%d\n", a2);
        return 0;
    }
    

    for (i=0; i<n; i++) {
        result = a1 + a2;
        a2 = a1;
        a1 = result;
    }
    printf("%d\n", result);
    return 0;
}