#include <stdio.h>
long convert(long h, long m, long s);

int main(){
    long h, m, s;
    scanf("%ld %ld %ld", &h, &m, &s);

    printf("%ld", convert(h, m, s));
}

long convert(long h, long m, long s){
    return (h * 3600) + (m * 60) + s;
}
