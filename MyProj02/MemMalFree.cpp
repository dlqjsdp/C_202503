#include <iostream>
#include <string.h> //strcopy 정보가 있음.

#include <stdlib.h> //malloc 정보가 있음.

// p91
using namespace std;

char* MakeStrAdr(int len) { //함수 원형
    char *str = (char*)malloc(len + 1);
    return str;
}

int main() {
    char* str = MakeStrAdr(20);
    strcpy(str, "Hello World");
    cout<<str<<endl;
    free(str);

    char arr[10] = {'a', 'b', 'c' };

    for (int i=0; i<sizeof(arr); i++) {
        cout<<arr[i];
    }
    return 0;
}

