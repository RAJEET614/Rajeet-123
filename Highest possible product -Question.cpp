#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int e=nums.size()-1;
        int ans1=nums[e]*nums[e-1]*nums[e-2];
        int ans2=nums[e]*nums[0]*nums[1];

        int final=max(ans1,ans2);
        return final;

    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d;
        int n;
    cin>>n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    d=maximumProduct(v);
    cout<<d;
    return 0;
}

