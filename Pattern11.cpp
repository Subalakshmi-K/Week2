#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int row =1; row<=n; row++)
    {
        for(int space=1;space<=row -1; space++)
        {
          cout <<" ";
        }
        for(int col=1; col<=(n*2)-(row*2)+1; col++)
        {
          cout <<"*";
        }
      cout << "\n";
    }
    return 0;
}
