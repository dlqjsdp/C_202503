#include <iostream>

using namespace std;

int n = 100;

void func(){
  int n = 10;
  cout<<::n<<endl;
}

int main() {

    func();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.