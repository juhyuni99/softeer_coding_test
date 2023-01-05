https://gakari.tistory.com/entry/CC-STL-%EB%9D%BC%EC%9D%B4%EB%B8%8C%EB%9F%AC%EB%A6%AC-string-%ED%95%A8%EC%88%98-%EC%82%AC%EC%9A%A9%EB%B2%95

//strcpy : 문자열복사
// strlen : 문자열길이

#include <iostream>
#include <string>

using namespace std;

string s(8,' ');
int main(){
  for(int i=0; i<8; i++)
    cin>>s[i];
  if(s=="12345678")
    cout<<"ascending";
  else if(s=="87654321")
    cout<<"descending";
  else
    cout<<"mixed";
}
