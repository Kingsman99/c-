#include<bits/stdc++.h>
using namespace std;
void sieve(bool prime[], int n)
{
    for (int p = 2; p * p  <= n; p++)
    {
        if (prime[p] == false)
            for (int i = p*2; i <= n; i+=p)
                prime[i] = true;
    }
}
int maxDigitInPrimes(int L, int R)
{
    bool prime[R+1];
    memset(prime, 0, sizeof(prime));

    sieve(prime, R);

    int freq[10] = { 0 };
    int val;
    for (int i = L; i <= R; i++)
    {
        if (!prime[i])
        {
            int p = i;
            while (p)
            {
                freq[p%10]++;
                p /= 10;
            }
        }
    }
    int max = freq[0], ans = 0;
    for (int j = 1; j < 10; j++)
    {
        if (max <= freq[j])
        {
            max = freq[j];
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int L , R;
    cout<<"enter the value of L  ";
    cin>>L;
    cout<<"Enter the value of R  ";
    cin>>R;
    cout << maxDigitInPrimes(L, R) << endl;
    return 0;
}
