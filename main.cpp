//剑指第13题
//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
// 使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
// 并保证奇数和奇数，偶数和偶数之间的相对位置不变。

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int len=array.size();
        int list[len];
        int j=0;
        for(int i=0;i<len;i++){
            if(array[i]%2!=0){
                list[j]=array[i];
                j++;
            }
        }

        for(int i=0;i<len;i++){
            if(array[i]%2==0){
                list[j]=array[i];
                j++;
            }
        }

        array.clear();
        for(int i=0;i<len;i++){
            array.push_back(list[i]);
        }

    }
};

int main(void){
    vector<int> array;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    Solution solution;
    solution.reOrderArray(array);
    cout<<array[0] <<array[1] <<array[2] <<array[3] <<endl;

}