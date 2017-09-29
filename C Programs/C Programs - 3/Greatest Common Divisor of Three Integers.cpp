#include <cstdio>
 
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
typedef long long LL;
 
LL gcd(LL a, LL b)
{
    if(a == 0 || b == 0)
        return (a + b);
    else
        return gcd(max(a, b)%min(a, b), min(a, b));
}
 
int main()
{
    LL a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
 
    printf("%lld\n", gcd(gcd(a, b), c) );
    return 0;
}
