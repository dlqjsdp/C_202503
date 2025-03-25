#include <iostream>

using namespace std;

int main() {

    const int num = 10; //값 변경 불가. Jaca의 final과 비슷

    int n1 = 100;
    int n2 = 20;

    const int* const ptr1 = &n1;
// 앞에 const를 붙인 거는 ptr1을 통해서 값을 바꾸지 말라는 것.

    // (*ptr1)++; >> ptr1을 1 증가하려고 하니 에러 발생

    // ptr1 = &n2; >> const ptr1 = &n1; 앞에 붇은 const 때문에 에러 발생
                  // ptr1은 &n1 const 때문에 값만 가질 수 있음

    cout<<*ptr1<<endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.