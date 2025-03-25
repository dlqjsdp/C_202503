#include <iostream>

using namespace std;

void swapByRef(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<*a<<endl;
    cout<<*b<<endl;
}

int main() {

    int n1 = 10;
    int n2 = 20;

    swapByRef(&n1, &n2);
    cout<<"=============="<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;

    double d = 1.2;
    cout<<sizeof(d)<<endl;  //sizeof는 크기를 얼마나 차지하고 있는지 알 수 있음.

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.