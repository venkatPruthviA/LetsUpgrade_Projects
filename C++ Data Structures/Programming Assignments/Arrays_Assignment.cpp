Given an array a[ ] of size ***‘n-1’*** with integers in the range of ***[1,n].*** There are no duplicates in the list.

Write a program to find the missing number from the first ***n*** integers.

Consider example n=5;  a[ ]= { 2, 5, 1, 3}; 

n=5 means Range[1,5]. Output should be the missing number between 1 to 5. So 4 is the output as per the given array. 

**Note:** Find the missing number in O(n) time and constant space.

## Test case →

1.  a[ ] = { 3, 6, 1, 5, 4} , n=6
2.  a[ ] = { 8, 3, 2, 1, 5, 4, 7} , n=8
3.  a[ ] = { 3, 2, 4, 5} , n=5

//*******************************************SOLUTION*********************************************************************************

using namespace std;
 
void findMissing(int arr[], int N)
{
    int i;
    int temp[N + 1];
    for(int i = 0; i <= N; i++){
      temp[i] = 0;
    }
   
    for(i = 0; i < N; i++){
      temp[arr[i] - 1] = 1;
    }
 
 
    int ans;
    for (i = 0; i <= N ; i++) {
        if (temp[i] == 0)
            ans = i  + 1;
    }
    cout << ans;
}
 
int main()
{
    int arr[] = { 3, 6, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
}
