#include <iostream>
#include <fstream>

using namespace std;

long getFileSize(ifstream& fin){
  fin.seekg(0, ios::end);
  // get pointer를 파일의 맨 끝으로 옮김

  long length = fin.tellg();
  // get pointer의 위치를 알아냄
  
  return length;
  // length는 파일의 크기
}

int main(){
  const char* file = "c:\\windows\\system.ini";

  ifstream fin(file);
  if(!fin){ // 열기 실패 검사
    cout << file << " 열기 오류" << endl;
    return 0;
  }
  cout << file << "의 크기는 " << getFileSize(fin);
  fin.close();
}

// 출력 예시 
// c:\windows\system.ini의 크기는 219
