#include <iostream>
using namespace ltd;

int main()
{
    int n;
    cin >> n;
    
    for (int row =1; row<=n;row++)
    {
        for(int col=1; col<=n;col++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
