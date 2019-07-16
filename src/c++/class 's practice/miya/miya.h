#include <iostream>

class Miya {
  unsigned int age;
  unsigned int height;
  unsigned int weight;
  // static const int NUM=12;
  std::string name;
  void show_default();

 public:
  // Miya();//默认构造函数没有参数，因为申明中不包含值
  // Miya(const std::string &name_,unsigned int age_=0,unsigned int
  // height_=0,unsigned int weight_=0);
  //带参数的默认构造函数(上面这个)和不带参数的默认构造函数Miya( )只能同时存在一种
  Miya() = default;

  Miya(std::string name_, unsigned int age_ = 0, unsigned int height_ = 0,
       unsigned int weight_ = 0);
  // 不能和默认构造函数同时出现
  //   Miya(std::string name_, unsigned int age_, unsigned int height_,unsigned
  //   int weight_);

  void show() const;
  void show_public();

 private:
  void show_private();
};