#include <iostream> 
#include <fstream> 

using namespace std;

int main() {
  const char* file = "c:\\windows\\system.ini"; 

  ifstream fin(file);
  if(!fin) {
    cout << file << " 열기 오류" << endl; 
    return 0;
  }
  int count = 0; 
  int c;
  while((c=fin.get()) != EOF) { // 파일에서 문자를 읽는 fin.get()
    // EOF를 만날 때까지 문자 읽기 
    cout << (char)c;
    count++; 
  }
  cout << "읽은 바이트 수는 " << count << endl; 
  fin.close(); 
  // 파일 닫기
}

// 출력 예시
// ; for 16-bit app support 
// [386Enh]
// woafont=dosapp.fon
// EGA80WOA.FON=EGA80WOA.FON 
// EGA40WOA.FON=EGA40WOA.FON 
// CGA80WOA.FON=CGA80WOA.FON 
// CGA40WOA.FON=CGA40WOA.FON
// 
// [drivers]
// wave=mmdrv.dll 
// timer=timer.drv
//
// [mci]
// 읽은 바이트 수는 206

// 텍스트 I/O 모드로 읽을 때, get()은 라인의 끝에 있는 '\r\n'의 두 바이트를 '\n'의 한 바이트로 리턴
// c:\windows\system.ini는 총 13 라인의 219바이트지만, 실제 읽은 바이트 수는 각 라인의 '\r' 개수만큼 
// 13개 모자란 206으로 카운트
