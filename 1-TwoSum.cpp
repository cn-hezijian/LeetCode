/*
  Title: 1.Two Sum 
  Author: Hezijian
  Date: 2016-05-27 13:02:01 
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*this method use 700 ms, it's too much!*/
/*
vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> result;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
}
*/


/* this method use 28 ms, much better */
vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> result;
    map<int,int> numIndexMap;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(numIndexMap.count(nums[i]) == 0)                 // add unique
        {
            numIndexMap.insert(make_pair(nums[i],i));       // the numIndexMap is work with pair [Num : NumIndex] 
        }
        
        if(numIndexMap.count(target - nums[i]))             // find if there is match value in the map(which insert into map before) 
        {
            int index = numIndexMap[target - nums[i]];     
            if(index < i)     // advoid add self like : [3,2,4] target = 6; and 3 + 3 = 6
            {
                result.push_back(numIndexMap[target - nums[i]]);
                result.push_back(numIndexMap[nums[i]]);
                return result;
            }
        }        
    }
}


int main(int argc, int** argv)
{
    cout << "HelloWorld" << endl;
    
    int Array_Nums[] = {3,2,4};
    int count = sizeof(Array_Nums) / sizeof(int);
    vector<int> input(Array_Nums, Array_Nums + count);
    vector<int> output = twoSum(input, 6);
    
    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }   
    
    
    getchar();
    return 0;    
}


