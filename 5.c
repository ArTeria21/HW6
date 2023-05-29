#include <stdio.h>

int concatenation(int max, int min) {
        for(int i = min; i != 0; i/=10) {
        max *= 10;
        }
        max += min;
        return max;
}

int ispolnitel(int num) {
    int f,s,t, fs, st, result;
    f = num / 100;
    s = (num % 100) / 10;
    t = num % 10;
    fs = f * s;
    st = s * t;

    if (fs >= st) {
       result = concatenation(fs, st);
    } 
    else {
        result = concatenation(st, fs);
    }
    return result;
}

int main() {
    int number;
    scanf("%d", &number);

    printf("%d\n", ispolnitel(number));
    return 0;
}