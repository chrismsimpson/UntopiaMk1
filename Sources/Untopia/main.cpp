
#include <iostream>
#include <tuple>

// #include "Foo.h"

#include "../LibFoo/Foo.h"

using namespace std;

tuple<int, int> foo();

int main() {

    auto a = std::unique_ptr<Foo>(new Foo(1));

    ///    

    auto b = std::unique_ptr<Foo>(nullptr);

    ///

    auto t = foo();

    ///

    auto n = get<0>(t);

    cout << n << endl;

    ///

    return 0;
}

tuple<int, int> foo() {

    tuple<int, int> t(1, 2);

    ///
    
    return t;
}