#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>

int processArray(std::vector<int> &array)
{
    /*
     * Do not make any changes outside this function.
     *
     * Modify this function to process `array` as indicated
     * in the question. At the end, return the length of the
     * array.
     *
     * Do not print anything in this function
     * Do not write anything to the standard output
     *
     * Submit this entire program (not just this function)
     * as your answer
     */
    int yes = 0;
    int ans = 0;
    std::vector<int> v;
    for (auto x : array)
    {
        if (yes == 0)
        {
            v.push_back(x);
            if (x < 100)
                yes = 1;
        }
        else if (yes == 1)
        {
            if (x > 100)
            {
                v.push_back(x);
                yes = 0;
            }
        }
    }
    array.clear();
    for (auto x : v)
    {
        array.push_back(x);
    }
    return array.size();
}
int main(void)
{
    std::vector<int> array;
    int val;
    while (std::cin >> val)
    {
        if (val < 0)
            break;
        array.push_back(val);
    }
    int new_len = processArray(array);
    for (std::vector<int>::iterator a = array.begin(); a != array.end(); a++)
    {
        std::cout << *a << std::endl;
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a;
    int ans = INT32_MAX;
    while (1)
    {
        int x;
        cin >> x;
        if (x < 0)
        {
            break;
        }
        else
        {
            a.push_back(x);
            if (x < 100)
            {
                if (x > ans)
                {
                    ans = x;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (1)
    {
        int x;
        cin >> x;
        
    }
    vector<int> a;
        int ans = INT32_MAX;
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] < 0)
            {
                break;
            }
            else
            {
                
                if (array[i] > 100)
                {
                    if (array[i] < ans)
                    {
                        ans = array[i];
                    }
                }
            }
        }
        if(ans!=INT32_MAX)
            return ans;
        return 0;
}
