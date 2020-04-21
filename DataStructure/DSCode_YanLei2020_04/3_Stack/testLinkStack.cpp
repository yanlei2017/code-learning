#include"linkStack.h"
int main(int argc, char const *argv[])
{
    linkStack<int> ss;
    for (size_t i = 1; i <= 10000; i++)
    {
        ss.push(i);
    }
    ss.printLinkStack();
    int popVal = 0;
    ss.pop(popVal);
    cout<<"linkStack pop , popVal = "<<popVal<<endl;
    ss.printLinkStack();
    int topVal = 0;
    ss.topVal(topVal);
    cout<<"Get linkStack top val ,topVal = "<<topVal<<endl;
    ss.printLinkStack();
    string stop;
    cin>>stop;
       
    return 0;
}