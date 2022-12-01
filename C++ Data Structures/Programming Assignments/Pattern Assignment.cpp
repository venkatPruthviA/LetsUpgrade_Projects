Write a Program to print Hollow Rhombus pattern of printing stars. 

Input will contain the length of rhombus n.


  
            *   *   *   *   *
          *               *
        *               *
      *               *
    *   *   *   *   *


## Test case →

1.  Consider n=5
2.  n=8
3.  n=3

//**************************************SOLUTION******************************************************

#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    cout<<"Enter rows : "<<endl;
    cin>>rows;


    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows-i; j++)
        {
            cout<<" ";
        }


        /* Print stars and center spaces */
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}
