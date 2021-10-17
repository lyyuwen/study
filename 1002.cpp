#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    scanf("%f""%f""%f",&a,&b,&c);
    float p = 0.5*(a+b+c);
    float s = sqrt((p*(p-a)*(p-b)*(p-c)));
    printf("%.4f",s);
}