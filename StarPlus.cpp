/*        *
          *
      * * * * *
          *
          *              */

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int num;
    cout << "Enter a number::";
    cin >> num;
    int mid = (num / 2) + 1;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}