#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream fin("c:\\windows\\system.ini");
  if(!fin){
    cout << "c:\\windows\\system.ini 열기 실패" << endl;
    return 0;
  }

  char buf[81];
  // 한 라인이 최대 80개의 문자로 구성된다고 가정
  while(fin.getline(buf, 81)){
    // 한 라인이 최대 80개의 문자로 구성
    cout << buf << endl;
    // 라인 출력
  }

  fin.close();
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
