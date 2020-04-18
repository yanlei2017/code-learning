#include <iostream>
using namespace std;

class test
{
private:
    int pInt = 0;
    const int pConstInt ;
    const double pConstDouble;
    /*仅仅有关键字const，由于是常量，就必须进行初始化；
    可在声明处和构造函数列表中进行初始化，可以二选一，亦
    可以在这两处都初始化，初始化列表中的赋值会自动覆盖声明处的值。*/
    static int pStaticInt;                /*仅仅有static,由于是静态变量，属于类本身，则必须在类的生命体外进行定义（若不给初值，则为默认值）*/
    const static int pStaticConstInt = 3; //const static int是个例外，可以类内初始化
    const static float pConstStaticFloat; //double and float must be initialized out of class
    const static double pConstStaticDouble;
    /*同时又static和const，这两个关键字的前后顺序无所谓，由于是静态常量，
    即同时具有静态和长常量的属性，使用条件就更加苛刻（即为一个常量，那就必
    须有初始化，并且还是静态的，那就自然属于类本身了）。整形数据可以在声明
    处初始化或者在类的声明体外进行定义并初始化，二选一。浮点型数据只能且必
    须在类的声明体外进行定义并初始化。*/
    /* data */
public:
    int puInt = 10;
    const int puConstInt = 11;
    static int puStaticInt;
    const static int puStaticConstInt = 13; //const static int是个例外，可以类内初始化
    const static float puConstStaticFloat;  //double and float must be initialized out of class
    const static double puConstStaticDouble;
    test(int a) : pConstInt(a), pConstDouble(a){}//const int 可以列表初始化
    test(): pConstInt(1), pConstDouble(1){}
    void printall()
    {
        cout << "private data:\n"
             << endl;
        cout << "pInt = " << pInt << endl;
        cout << "pConstInt = " << pConstInt << endl;
        cout << "pConstDouble = " << pConstDouble << endl;

        cout << "pStaticInt = " << pStaticInt << endl;
        cout << "pStaticConstInt = " << pStaticConstInt << endl;
        cout << "pConstStaticFloat = " << pConstStaticFloat << endl;
        cout << "pConstStaticDouble = " << pConstStaticDouble << endl;

        cout << "\npublic data \n";
        cout << "puInt = " << puInt << endl;
        cout << "puConstInt = " << puConstInt << endl;
        cout << "puStaticInt = " << puStaticInt << endl;
        cout << "puStaticConstInt = " << puStaticConstInt << endl;
        cout << "puConstStaticFloat = " << puConstStaticFloat << endl;
        cout << "puConstStaticDouble = " << puConstStaticDouble << endl;
    }
};
//private
int test::pStaticInt = 2;
const float test::pConstStaticFloat = 4.0;
const double test::pConstStaticDouble = 5.0;
//public
int test::puStaticInt = 12;
const float test::puConstStaticFloat = 14.0;
const double test::puConstStaticDouble = 15.0;

int main(int argc, char const *argv[])
{
    test a(1);
    a.printall();
    return 0;
}
