#include <stdio.h>
#include <math.h>
#include <time.h>
#define MAXN 10
void printN(int n)
{
    for(int i=1;i<=n;n++){
        printf("%d \n",i);
    }
}
void printM(int n){
    if (n){
        printM(n-1);
        printf("%d \n",n);
    }
}
double f1(int n,double arr[],double x ){
    double p = arr[0];
    for (int i = 0; i <= n; i++) {
        p+=(arr[i]*pow(x,i));
    }
    return p;
}
double f2(int n,double arr[],double x){
    double p = arr[n];
    for (int i = n; i <=0 ; i--) {
        p=arr[i-1]+p*arr[i];
    }
    return p;
}
double Date;

clock_t start,stop;

double test(clock_t a, clock_t b){

    return ((double) a-b)/CLOCKS_PER_SEC;

}
int main() {
    double arr[MAXN];

    for (int i = 0; i < MAXN;i++){
        arr [i]= (double)i;
    }
    start  = clock();
    f1(MAXN-1,arr,1.1);
    stop = clock();
    Date = test(stop,start);
    printf("%f",Date);
    start  = clock();
    f2(MAXN-1,arr,1.1);
    stop = clock();
    Date = test(stop,start);
    printf("%f",Date);

    return 0;
}