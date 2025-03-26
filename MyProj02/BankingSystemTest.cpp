#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account {
  private:
    int accID;
    int balance;
    char * cusName;
  public:
    Account(int ID, int money, char * name)
        : accID(ID), balance(money){
            cusName = new char[strlen(name)+1];
            strcpy(cusName, name);
        }

        int GetAccID(){ return accID; }

        void Deposit(int money){
          balance+=money;
        }
        int Withdraw(int money){
          if(balance<money)
            return 0;
          balance-=money;
          return money;
        }
        void ShowAccInfo(){
          cout<<"���¹�ȣ: "<<accID<<endl;
          cout<<"�̸�: "<<cusName<<endl;
          cout<<"�ܾ�: "<<balance<<endl;
        }
        ~Account(){
          delete []cusName;
        }
};

Account * accArr[100];
int accNum=0;

int main(void) {

    int choice;

    while(1) {
      ShowMenu();
      cout<<"���ϴ� ����� �����ϼ���: ";
      cin>>choice;
      cout<<endl;

      switch(choice) {
        case MAKE:
          MakeAccount();
          break;
        case DEPOSIT:
          DepositMoney();
          break;
        case WITHDRAW:
          WithdrawMoney();
          break;
        case INQUIRE:
          ShowAllAccInfo();
          break;
        case EXIT:
          for(int i=0; i<accNum; i++)
            delete accArr[i];
          return 0;
        default:
          cout<<"Illegal selection.."<<endl;
      }
    }
    return 0;
}

void ShowMenu(void){
  cout<<"===== ���� ���� ���� ���α׷� ====="<<endl;
  cout<<"1. ���� ����"<<endl;
  cout<<"2. �Ա�"<<endl;
  cout<<"3. ���"<<endl;
  cout<<"4. ��ü ���� ����"<<endl;
  cout<<"5. ���α׷� ����"<<endl;
  cout<<"==============================="<<endl;
}

void MakeAccount(void){
  int id;
  char name[NAME_LEN];
  int balance;

  cout<<"���� ��ȣ �Է�: ";cin>>id;
  cout<<"���� ������ �̸�: "; cin>>name;
  cout<<"�ʱ� �Աݾ�: "; cin>>balance;
  cout<<"=> ���°� ���������� �����Ǿ����ϴ�."<<endl<<endl;

  accArr[accNum++]=new Account(id,balance,name);
}

void DepositMoney(void){
  int money;
  int id;
  cout<<"�Ա�"<<endl;
  cout<<"���¹�ȣ: ";cin>>id;
  cout<<"�Աݾ�: "; cin>>money;

  for(int i=0; i<accNum; i++){
    if(accArr[i]->GetAccID()==id){
      accArr[i]->Deposit(money);
      cout<<"�ԱݿϷ�"<<endl<<endl;
      return;
    }
  }
  cout<<"��ȿ���� ���� ���¹�ȣ �Դϴ�."<<endl<<endl;
}

void WithdrawMoney(void){
  int money;
  int id;
  cout<<"���"<<endl;
  cout<<"���¹�ȣ: ";cin>>id;
  cout<<"��ݾ�: "; cin>>money;

  for(int i=0; i<accNum; i++){
    if(accArr[i]->GetAccID()==id){
      if(accArr[i]->Withdraw(money)==0){
        cout<<"�ܾ��� �����մϴ�."<<endl<<endl;
        return;
      }
      cout<<"��ݿϷ�"<<endl<<endl;
      return;
    }
  }
  cout<<"��ȿ���� ���� ���¹�ȣ �Դϴ�."<<endl<<endl;
}

void ShowAllAccInfo(void){
  for(int i=0; i<accNum; i++){
    accArr[i]->ShowAccInfo();
    cout<<endl;
  }
}
