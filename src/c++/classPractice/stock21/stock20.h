#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock{
    private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val=shares*share_val;}
    public:
    Stock();
    Stock(const std::string &co,long n=0,double pr=0.0);
    ~Stock();
    void acquire(const std::string &co,long n,double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show()const;//show函数无法修改Stock的成员
    const Stock & topval(const Stock &) const;
};

class Miya{
    unsigned int age;
    unsigned int height;
    unsigned int weight;
    std::string name;
    public:
    Miya();//默认构造函数没有参数，因为申明中不包含值
    Miya(const std::string & name_,unsigned int age_=0,unsigned int height_=0,unsigned int weight_=0);
    //带参数的默认构造函数(上面这个)和不带参数的默认构造函数Miya()只能同时存在一种
    /* Miya(std::string name_,unsigned int age_,unsigned int height_ ,unsigned int weight_);
    不能和默认构造函数同时出现 */
    void show() const;
};

#endif