#include <iostream>
using namespace std;
int gcd (int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}
int main()
{
    int s;
    int d;
    cin >> s;
    cin >> d;

   cout << "NOD=" << gcd(s,d) << endl;
   cout << "NOK=" << (s*d)/(gcd(s,d))  ;

}
