#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  map<string, string> dic;
  // 맵 컨테이너 생성 : 키는 영어 단어이며 값은 한글 단어

  // 단어 3개를 map에 저장
  dic.insert(make_pair("love", "사랑"));        // ("love", "사랑") 저장
  dic.insert(make_pair("apple", "사과"));       // ("apple", "사과") 저장
  dic["cherry"] = "체리";                       // ("cherry", "체리") 저장

  cout << "저장된 단어 개수 : " << dic.size() << endl;

  string eng;
  while(true){
    cout << "찾고 싶은 단어 >> ";
    getline(cin, eng);
    // 사용자로부터 키값인 영어 단어를 입력받음

    if(eng == "exit") break;
    // "exit" 값이 입력되면 종료

    if(dic.find(eng) == dic.end()) cout << "없음" << endl;
    // eng '키'를 끝까지 찾았는데 없는 경우 없음을 출력
    else cout << dic[eng] << endl;
    // dic에서 eng의 값을 찾아 출력
  }
  cout << "<< 영한 사전 종료 >> " << endl;
}

// 출력 예시
// 저장된 단어 개수 : 3
// 찾고 싶은 단어 >> apple
// 사과
// 찾고 싶은 단어 >> lov
// 없음
// 찾고 싶은 단어 >> love
// 사랑
// 찾고 싶은 단어 >> exit
// << 영한 사전 종료 >> 
