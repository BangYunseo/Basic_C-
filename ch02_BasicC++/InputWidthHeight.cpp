#include <iostream>

using namespace std;

int main(){
  cout << "너비 입력 >> ";
  int width;
  cin >> width;

  // 키보드로부터 너비를 읽어 width 변수에 저장

  cout << "높이 입력 >> ";
  int height;
  cin >> height;

  // 키보드로부터 높이를 읽어 height 변수에 저장

  int area = width * height;
  // 사각형의 면적 계산

  cout << "면적은 " << area << "\n";
  // 면적을 출력한 후 한 줄 띄어쓰기
}

// 출력 예시
// 너비 입력 >> 3
// 높이 입력 >> 5
// 면적은 15
