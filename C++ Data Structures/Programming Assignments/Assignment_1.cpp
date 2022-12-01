Write a Program to check a given number representation is in binary or not?

User input will contain a single integer n. 0≤n≤30,000

## Test case →

1.  10101
2.  112
3.  29811

****************************// SOLUTION //***********************************************
  
#include<iostream>

int main()
{
    // Initialization of variables.
    int n, j, count = 0, zero = 0, one = 0;
    
    // Taking the input number from the user.
    std::cout<<"Enter the number to be checked"<<std::endl;
    std::cin>>n;
    
    // Copying the original number into another variable.

    j = n;

    while(n!=0)
    {
        count = count+1;
        n = n/10;
    }

    // Running the loop to count 0's and 1's
    for(int i = 0; i<count; i++)
    {
        if (j % 10 == 0)
        {
            zero = zero + 1;
            j = j/10;
        }
        else if (j % 10 == 1)
        {
            one = one + 1;
            j = j/10;
        }
    }

    // Checking if all the digits are 0's and 1's or not

    if (count == (zero+one))
    {
        std::cout<<"The number entered is Binary"<<std::endl;
    }
    else{
        std::cout<<"The number entered is not Binary"<<std::endl;
    }
    return 0;
}
