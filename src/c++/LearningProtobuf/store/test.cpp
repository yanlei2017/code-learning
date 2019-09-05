#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    unsigned int id;
    unsigned int grade;
};
struct action
{
    char act;
    unsigned int start;
    unsigned int end;
};

unsigned int max(student *stu, unsigned int a, unsigned int b)
{
    unsigned int max = stu[a - 1].grade;
    for (int i = a; i < b; i++)
    {
        if (max < stu[i].grade)
        {
            max = stu[i].grade;
        }
        return max;
    }
}

int main()
{
    int stu_num = 0;
    int act_num = 0;
    cin >> stu_num;
    cin >> act_num;
    student *stu_array = new student[stu_num];
    action input_act[act_num];
    unsigned int output;
    int temp = 0;
    for (int i = 0; i < stu_num; i++)
    {
        cin >> temp;
        stu_array[i].grade = temp;
    }
    for (int i = 0; i < act_num; i++)
    {
        cin >> input_act[i].act;
        cin >> input_act[i].start;
        cin >> input_act[i].end;
    }

    for (int i = 0; i < act_num; i++)
    {
        if (input_act[i].start == input_act[i].end)
        {
            cout << stu_array[input_act[i].start - 1].grade << endl;
        }

        if (input_act[i].act == 'Q')
        {
            output = max(stu_array, input_act[i].start, input_act[i].end);
            cout << output << endl;
        }
        else
        {
            stu_array[input_act[i].start - 1].grade = input_act[i].end;
        }
    }

    delete[] stu_array;
}