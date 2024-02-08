#include <iostream>
#include <fstream>

using namespace std;

int main(){
  char* file = "c:\\temp\\data.dat";

  ofstream fout;
  fout.open(file, ios::out | ios::binary);
  // 읽기 모드로 파일 열기
  if(!fout){ // 열기 실패 검사
    cout << "파일 열기 오류";
    return 0;
  }

  int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  double d = 3.14;
  fout.write((char*)n, sizeof(n));
  // int 배열 n을 한 번에 파일에 쓰기

  fout.write((char*)(&d), sizeof(d));
  // double 값 하나를 파일에 쓰기

  fout.close();

  // 배열 n과 d값을 임의의 값으로 변경
  for(int i = 0; i < 10; i++) n[i] == 99;
  d = 8.15;

  // 배열 n과 d 값을 파일에서 읽기
  ifstream fin(file, ios::in | ios::binary);
  if(!fin){ // 열기 실패 검사
    cout << "파일 열기 오류";
    return 0;
  }

  fin.read((char*)n, sizeof(n));
  fin.read((char*)(&d), sizeof(d));

  for(int i = 0; i < 10; i++)
    cout << n[i] << ' ';
  cout << endl << d << endl;
  fin.close();
}

// 출력 예시
// 0 1 2 3 4 5 6 7 8 9
// 3.15
