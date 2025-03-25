#include <iostream>
#include <cstring>
using namespace std;

class Person{
  private:
    char * name;
    int age;
  public:
    Person(char * name, int age){
      int len=strlen(name)+1;
      this->name = new char[len];
      strcpy(this->name, name);
      this->age = age;
    }
    void ShowPersonInfo() const{
      cout<<"이름: "<<name<<endl;
      cout<<"나이: "<<age<<endl;
    }
    ~Person(){
      delete [] name;
      cout<<"called destructor!"<<endl;
    }
};

int main(void){
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.