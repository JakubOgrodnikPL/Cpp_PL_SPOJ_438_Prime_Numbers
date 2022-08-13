#include <iostream>
using namespace std;
int hmn, n, l;
int main()
{
    cin >> hmn;
    for (int i=0; i<hmn; i++)
    {
        l=0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            if ((n%i)==0)
            {
            l++;
            }
        }
        if (l == 2) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
    }
return 0;
}
