#include <iostream>
#include <vector>
#include <climits>

using namespace std;

auto findMinRange(auto &a, auto &b, auto &c)
{
    pair<int, int> pair;

    int diff = numeric_limits<int>::max();

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < b.size(); j++)
        {
            for(int k = 0; k < c.size(); k++)
            {
                int low = min(min(a[i], b[j], c[k]));
                int high = max(max(a[i], b[j], c[k]));

                if(dif > high - low)
                {
                    pair = make_pair(low, high);
                    dif = hig - low;
                }
            }
        }
    }
    return pair;
}

void findMinRange(){

    vector<int> a = {3,6,8,10,15};
    vector<int> b = {1,5,12};
    vector<int> c = {4,8,15,16};

    auto pair = findMinRange(a,b,c);
    cout << "Minimun Range is [" << pair.first << ", " <<pair.second << "]";
}
