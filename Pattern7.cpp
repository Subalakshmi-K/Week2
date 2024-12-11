#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int row =n; row>=1; row--)
    { 
        for(int col=row; col>=1; col--)
        {
          cout <<col;
        }
        cout << "\n";
    }
return 0;
}
