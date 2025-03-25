#include <iostream>
using namespace std;

class FruitSeller{ //���� ����
  private:
    int APPLE_PRICE; //1000
    int numOfApples; //20 -> 18
    int myMoney; //0 -> 2000
  public:
    FruitSeller(int price, int num, int money){
      APPLE_PRICE = price;
      numOfApples = num;
      myMoney = money;
    }
    int SaleApples(int money){
      int num = money/APPLE_PRICE;
      numOfApples -= num;
      myMoney += money;
      return num;
    }
    void ShowSalesResult() const{
        cout<<"���� ���: "<<numOfApples<<endl;
        cout<<"�Ǹ� ����: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer{ //���ϰ��� �մ�
  private:
    int myMoney; //5000 -> 3000
    int numOfApples; //0 -> 2����
  public:
    FruitBuyer(int money){
      myMoney = money;
      numOfApples = 0;
    }
    void BuyApples(FruitSeller &seller, int money){
      numOfApples += seller.SaleApples(money);
      myMoney -= money;
    }
    void ShowBuyResult() const{
      cout<<"���� �ܾ�: "<<myMoney<<endl;
      cout<<"��� ����: "<<numOfApples<<endl<<endl;
    }
};

int main(void){
   FruitSeller seller(1000, 20, 0);
  // �Ǹ��� ��ü ���� (��� ���� 1000��, ��� 20��, �ʱ� �� 0��)
   FruitBuyer buyer(5000);
  // ������ ��ü ���� (5000�� ����)
   buyer.BuyApples(seller, 2000);
  // �����ڰ� �Ǹ��ڷκ��� 2000����ġ ��� ����

   cout<<"���� �Ǹ����� ��Ȳ"<<endl;
   seller.ShowSalesResult(); // �Ǹ����� ���� ���� ���
   cout<<"���� �������� ��Ȳ"<<endl;
   buyer.ShowBuyResult(); // �������� ���� ���� ���
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.