#include <bits/stdc++.h>
using namespace std;

/*
g++ -std=c++11 test.cpp && ./a.out
*/

struct X {
    X& operator++() {
        printf("Pre-increment\n");
        return *this;
    }
    X operator++(int) {
        printf("Post-increment\n");
        X tmp(*this);  // copy
        // operator++();  // pre-increment
        return tmp;  // return old value
    }

    X& operator=(const X& other) {
        printf("Assignment\n");
        return *this;
    }

    X& operator*() {
        printf("operator *\n");
        return *this;
    }
};

int main(int argc, char** argv) {
    X a, b;
    //the expression *p++ is parsed as *(p++), and not as (*p)++
    *a++ = *b++;
    vector<int> v = {1, 2, 3};
    auto it = v.begin();
    printf("%d\n", *it++);
    printf("%d\n", *it);
    return 0;
}
