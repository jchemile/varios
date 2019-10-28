#include <bits/stdc++.h>
using namespace std;

int binarySearch_recursive(vector<int> a, int left, int right, int x)
{
    if (left > right){
        return -1;
    }

    int mid = (left + right)/2;

    if(a[mid] == x)
        return 1;
    else if(a[mid] < x)
        return binarySearch_recursive(a, mid+1, right, x);
    else
        return binarySearch_recursive(a, left, mid-1, x);
}

void implementation(){
    vector <int> a{4,7,9};
    cout << binarySearch_recursive(a, 0, 3, 6);
}
