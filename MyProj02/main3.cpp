#include <iostream>

using namespace std;

int main() {

    int n1 = 10;
    int n2 = n1;
    float f = 2.1f;

    n2++;

    cout<<n1<< endl; //n1의 값을 출력
    cout<<&n1<< endl;  //n1의 주소값 출력

    int* n3; //* 포인트 변수 --> 저장할 수 있는 것이 값이 아니고 주소값을 보관

    //n3 = &f; //int형의 주소값만 받을 수 있는데 float의 주소값을 받으라고 하니 에러 발생
    n3 = &n1; //n3은 n1의 주소값을 가지고 있다.
    cout<<"----------------"<<endl;
    cout<<n3<<endl; //n3출력 (n1의 주소값)
    cout<<*n3<<endl; //n3의 값 출력  => 10 출력

    (*n3)++; //n3의 값 1 증가  -> n1의 값 1 증가 => 11 출력

    cout<<"n1 : "<<n1<<endl;


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.