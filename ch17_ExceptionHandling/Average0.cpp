#include <iostream>

using namespace std;

int main(){
  int n, sum, average;

  while(true){
    cout << "합을 입력하세요 >> ";
    cin >> sum;

    cout << "사람 수를 입력하세요 >> ";
    cin >> n;

    try{
      if(n <= 0) throw n;
      // 오류 탐지 if문의 예외 발생 코드 : catch(int x) 블록으로 점프
      else average = sum / n;
    }
      catch(int x){
        cout << "예외 발생 : " << x << "(으)로 나누기 불가능 " << endl;
        average = 0;
        cout << endl;
        continue;
      }
    cout << "평균 = " << average << endl;
    cout << endl;
    // 평균 출력
  }
}

// 출력 예시
// 합을 입력하세요 >> 15 
// 사람 수를 입력하세요 >> 5 
// 평균 = 3
// 
// 합을 입력하세요 >> 12
// 사람 수를 입력하세요 >> -3 
// 예외 발생 : -3(으)로 나누기 불가능
//
// 합을 입력하세요 >> 25
// 사람 수를 입력하세요 >> 0 
// 예외 발생 : 0(으)로 나누기 불가능
//
// 합을 입력하세요 >>

// 위의 출력이 계속 반복 : while문에 break가 없기 때문
