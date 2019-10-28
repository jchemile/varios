#include <bits/stdc++.h>
using namespace std;

int binarySearch_Iterative(vector <int> a, int n, int x)
{
    int left  = 0;
    int right = n - 1;
    int mid;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(a[mid] == x)
        {
            return 1;
        }
        else if (a[mid] < x){
                return left = mid + 1;
            }
        else {
            right = mid - 1;
        }
        return -1;
    }
}

void implementation(){
    vector <int> a{4,6,8,9,10,11};

    cout << binarySearch_Iterative(a, 6, 11);


}
