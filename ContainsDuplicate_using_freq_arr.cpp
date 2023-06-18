// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
bool containsDuplicate(const vector<int>& nums){
    vector<int> freq(10000, 0);
    
    for(int i = 0 ; i < nums.size(); i++)
    {
        int num = nums[i];
        if(freq[num] > 0){
            return true;
        } else {
            freq[num]++;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,4,6};
    
    if(containsDuplicate(nums)) {
        cout << " yes";
    }
    else {
        cout << "no";
    }
    return 0;
    
}