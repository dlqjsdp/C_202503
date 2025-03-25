#include <iostream>
using namespace std;

class FruitSeller{ //과일 사장
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
        cout<<"남은 사과: "<<numOfApples<<endl;
        cout<<"판매 수익: "<<myMoney<<endl<<endl;
    }
};

class FruitBuyer{ //과일가게 손님
  private:
    int myMoney; //5000 -> 3000
    int numOfApples; //0 -> 2구입
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
      cout<<"현재 잔액: "<<myMoney<<endl;
      cout<<"사과 개수: "<<numOfApples<<endl<<endl;
    }
};

int main(void){
   FruitSeller seller(1000, 20, 0);
  // 판매자 객체 생성 (사과 가격 1000원, 사과 20개, 초기 돈 0원)
   FruitBuyer buyer(5000);
  // 구매자 객체 생성 (5000원 보유)
   buyer.BuyApples(seller, 2000);
  // 구매자가 판매자로부터 2000원어치 사과 구매

   cout<<"과일 판매자의 현황"<<endl;
   seller.ShowSalesResult(); // 판매자의 현재 상태 출력
   cout<<"과일 구매자의 현황"<<endl;
   buyer.ShowBuyResult(); // 구매자의 현재 상태 출력
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.