#include <iostream>
using namespace std;
int main()
{
    long long k, n;
    cin>>n>>k;
    while(k--) {
        if(n%10 != 0) {
            n--;
        }
        else if(n%10==0) {
            n=n/10;
        }

    }
    cout<<n<<endl;
    return 0;
}
