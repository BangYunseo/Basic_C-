#include <iostream>

using namespace std;

class Circle{
  int radius;
public:
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  void setRadius(int r) { radius = r; }
  double getArea() { return radius * radius * 3.14; }
};

int main() {
  Circle circle[2][3];

  circle[0][0].setRadius(1);
  circle[0][1].setRadius(2);
  circle[0][2].setRadius(3);
  circle[1][0].setRadius(4);
  circle[1][1].setRadius(5);
  circle[1][2].setRadius(6);
  
  // 위와 같이 2차원 배열을 정의했을 때 정의되는 circle[2][3] 배열은 다음과 같음
  // Circle circle[2][3] = { { Circle(1), Circle(2), Circle(3) }, 
  //                         { Circle(4), Circle(5), Circle(6) } };

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
      cout << "Circle [" << i << ", " << j << "] 의 면적은 " << circle[i][j].getArea() << endl;
    }
  }
}

// 출력 예시
// Circle [0, 0]의 면적은 3.14
// Circle [0, 1]의 면적은 12.56
// Circle [0, 2]의 면적은 28.26
// Circle [1, 0]의 면적은 50.24
// Circle [1, 1]의 면적은 78.5
// Circle [1, 2]의 면적은 113.04
