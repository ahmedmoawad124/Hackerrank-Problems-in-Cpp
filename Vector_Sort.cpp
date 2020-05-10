#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    cin>>n;
    vector<int> vec;
    for(int i; i < n; i++)
    {
        cin>>e;
        vec.push_back(e);
    } 
    sort(vec.begin(),vec.end());

    for(int i; i < n; i++)
    {
        cout<<vec[i]<<" ";
    } 

    return 0;
}
