
#include <iostream>
using namespace std;
#include <store.pb.h>
#define MAX_CATEGORY_AMOUNT 100
typedef unsigned int uint32;
uint32 total_customer_amount;
// protobuf存数据

bool add_new_order();
void change_goods_price();
void show_original_price();
bool add_category();

int main() {
while (true)
{
  cout << "请输入以下选项：\n"
       << "\t1.更改货品价格\n"
       << "\t2.展示顾客订单信息\n"
       << "\t3.增加新订单\n"
       << "\t4.增加货物种类\n";
  uint32 option;
  cin >> option;
  switch (option) {
    case CHANGE_GOODS_PRICE:
      change_goods_price();
      break;
    case SHOW_BUYER_INFO:
      cout << "请选择顾客：\n";
      uint32 buyer_id;
      cin >> buyer_id;
    case NEW_ORDER:
      if (add_new_order())
        total_customer_amount++;
      else {
        cout << "增加新订单失败，请重新运行程序\n";
      }

      break;
    case ADD_CATEGORY:
      add_category();
  }

  customer yanlei;
  yanlei.set_phone_number(18062370193);
  cout << yanlei.phone_number() << endl;
}

  

  return 0;
}
void show_original_price() {}

void change_goods_price() { show_original_price(); }
bool add_new_order() {

}
bool add_category() {}
