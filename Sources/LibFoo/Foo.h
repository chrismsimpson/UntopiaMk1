#include <iostream>

using namespace std;

#pragma once

class Foo {

    public:

        explicit Foo(int) { }

        ~Foo() {
            
            cout << "deconstructing foo" << endl;
        }

    private:

};