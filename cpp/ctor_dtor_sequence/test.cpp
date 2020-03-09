#include <bits/stdc++.h>
using namespace std;

class A {
   public:
    A() {
        //先执行类成员的构造函数，再执行类本身的构造函数。（本例中的顺序为vector的构造,list的构造，printf("A
        // ctor\n")） 成员构造函数的顺序依赖声明的顺序，而不是初始化列表的顺序
        //
        //
        //很显然需要像上面提到的那样做，试想如果先执行A的构造函数，执行a.push_back，此时a还有生成（构造、分配内存），这肯定会有问题
        //所以 顺序为:
        // vector的构造,list的构造，printf("A ctor\n");a.push_back(1);b.push_back(2);
        printf("A ctor\n");
        a.push_back(1);
        b.push_back(2);
    }

    ~A() {
        printf("A dtor\n");
    }

   private:
    vector<int> a;
    list<int> b;
};

class Base1 {
   public:
    Base1() {
        printf("Base1 ctor\n");
    }
    ~Base1() {
        printf("Base1 dtor\n");
    }

   public:
    list<int> l;
};
class Base2 {
   public:
    Base2() {
        printf("Base2 ctor\n");
    }
    ~Base2() {
        printf("Base2 dtor\n");
    }

   public:
    map<int,int> m;
};

class Derived : public Base1, public Base2 {
   public:
    Derived() {
        l.push_back(11);
        printf("Derived ctor\n");
    }
    ~Derived() {
        printf("Derived dtor\n");
    }

   private:
    vector<int> v;
};

int main(int argc, char** argv) {
    A a;
    Derived d;
    return 0;
}
