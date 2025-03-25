#include <iostream>

using namespace std;

int& RefRetFuncOne(int &ref) {

    ref++;
    return ref;
}

int main(void) {

    int num1 = 1;
    int &num2=RefRetFuncOne(num1);

    num1 += 1;
    num2 += 100;

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.