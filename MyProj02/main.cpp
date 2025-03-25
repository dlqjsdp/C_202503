#include <iostream>

using namespace std;

namespace A {
    void func() {
        cout << "Hello World A!" << endl;
    }
}

namespace B {
    void func() {
        cout << "Hello World B!" << endl;
    }
}

int main() {

    B::func();

    A::func();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.