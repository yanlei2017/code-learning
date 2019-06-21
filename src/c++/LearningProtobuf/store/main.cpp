
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

int main(int argc, char* argv[]) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    cerr << "Usage:  " << argv[0] << " ADDRESS_BOOK_FILE" << endl;
    return -1;
  }

  while (true) {
    cout << "请输入以下选项：\n"
         << "\t0.更改货品价格\n"
         << "\t1.展示顾客订单信息\n"
         << "\t2.增加新订单\n"
         << "\t3.增加货物种类\n";
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
  }

  return 0;
}
void show_original_price() {}

void change_goods_price() { show_original_price(); }
bool add_new_order() {
  customer temp;
  cout << "请输入姓名" << endl;
  string name;
  cin.ignore();
  getline(cin, name);
  if (!name.empty()) {
    temp.set_name(name);
  } else {
    cout << "请再次输入姓名" << endl;
    getline(cin, name);
  }

  cout << "请输入ID" << endl;
  uint32 id;
  cin >> id;
  temp.set_id(id);

  cout << "请输入地址" << endl;
  string address;
  cin.ignore();
  getline(cin, address);
  if (!address.empty()) temp.set_address(address);

  cout << "请输入联系电话" << endl;
  uint64_t phone_number;
  cin >> phone_number;
  temp.set_phone_number(phone_number);

  cout << "请输入货物种类，沙子请输入0，石头请输入1，水泥请输入2." << endl;
  GoodsCategory category;
  unsigned int temp_choice;
  while (true) {
    cin >> temp_choice;
    if (temp_choice >= MAX_CATEGORY_NUMBER) {
      cout << "输入错误，请重新选择" << endl;
    } else {
      if (temp_choice == SAND) temp.set_category_name("沙子");
      break;
      if (temp_choice == STONE) temp.set_category_name("石头");
      break;
      if (temp_choice == CEMENT) temp.set_category_name("水泥");
      break;
    }
  }

  unsigned int amount;
  cout << "请输入货物数量" << endl;
  cin >> amount;
  temp.set_amount(amount);

  cout << "录入完成,您输入的信息如下： \n" << endl;
  cout << "姓名：" << temp.name() << endl;
  cout << "ID：" << temp.id() << endl;
  cout << "地址：" << temp.address() << endl;
  cout << "电话：" << temp.phone_number() << endl;
  cout << "购买的货物种类：" << temp.category_name() << endl;
  cout << "购买的货物数量：" << temp.amount() << endl << endl;
}
bool add_category() {}
