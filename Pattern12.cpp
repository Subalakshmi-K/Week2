#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
     for (int row =1; row<=n*2-1; row++)
    {
        int rowchange = row>n ? (n*2) -row :row;
        for(int space=1;space<=n-rowchange;space++)
        {
          cout <<" ";
        }
        for(int col=1; col<=(rowchange*2)-1; col++)
        {
          cout <<"*";
        }
        cout << "\n";
    }
    return 0;
}
