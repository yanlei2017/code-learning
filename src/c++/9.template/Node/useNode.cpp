#include"Node.hpp"
int main(int argc, char const *argv[])
{
    Node<int> a(5);
    Node<int> b(8);
    Node<int> c(9);

    a.insertAfter(&b);
    b.insertAfter(&c);
    return 0;
}
