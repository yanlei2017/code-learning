#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
    string str, head, num;
    stringstream ss;
    vector<int> heads;
    vector<int> nums;
    vector<string> org_str;
    int temp;
    size_t temp_i;
    bool is_None = true;

    map<int, bool> my_map;
    while (1)
    {
        getline(cin, str);
        if (str == "END")
            break;
        org_str.push_back(str);
        int pos = str.find('#');
        head = str.substr(0, pos);
        num = str.substr(pos + 1);
        temp = stoi(num, &temp_i, stoi(head)); /*数字 类型(nullptr) 进制数*/
        nums.push_back(temp);
    }
    for (int i = 0; i < nums.size(); ++i)
    {
        auto insert_r = my_map.insert(pair<int, bool>(nums[i], false)); /*mymap存的没有重复*/
        if (insert_r.second == false)                                   /*插入失败就代表这个数是重复的，不是异数*/
            my_map[nums[i]] = true;
    }
    map<int, bool>::iterator it = my_map.begin();
    for (; it != my_map.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (my_map[nums[i]] == false)
        {
            cout << org_str[i] << endl;
            is_None = false;
        }
    }
    if (is_None)
        cout << "None" << endl;
    return 0;
}