#include <iostream>
#include <fstream>

using namespace std;

int main(){
  // 소스 파일과 목적 파일의 이름
  const char* srcFile = "c:\\temp\\desert.jpg";            // 원본 desert.jpg의 경로명
  const char* destFile = "c:\\temp\\copydesert.jpg";       // c:\temp\copydesert.jpg로 복사

  // 소스 파일 열기
  ifstream fsrc(srcFile, ios::in | ios::binary);
  if(fsrc){ // 열기 실패 검사
    cout << srcFile << " 열기 오류" << endl;
    return 0;
  }

  // 목적 파일 열기
  ofstream fdest(destFile, ios::out | ios::binary);
  if(!fdest){ // 열기 실패 검사
    cout << destFile << " 열기 오류" << endl;
    return 0;
  }

  // 소스 파일에서 목적 파일로 복사
  int c;
  while((c = fsrc.get()) != EOF){ // 소스 파일을 끝까지 한 바이트씩 읽음
    fdest.put(c);
    // 읽은 바이트 파일에 출력
  }
  cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
  fsrc.close();
  fdest.close();
}

// 출력 예시
// c:\temp\desert.jpg을
// c:\temp\copydesert.jpg로 복사 완료
