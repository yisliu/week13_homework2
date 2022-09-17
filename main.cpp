#include <iostream>
#include <string>
using namespace std;

string tobin(int a){
  string str = "";
  while(a!=0){
    str += a%2+'0';
    a/=2;
  }
  int h = str.length();
  for(int i = 0; i<h/2; i++){
    swap(str[i], str[h-i-1]);
    //123
    //123 to 321
  }
  return str;
}

bool toche(string a){
  int j;
  for(int i = 0; i<a.length(); i++){
    if(a[i]=='1'){
      j=1;
      // cout<<"k\n";
      while(i<a.length()){
        // cout<<"e"<<i;
        if(a[i]==a[i+1]){
          // cout<<"t";
          return false;
        }
        // cout<<"ji"<<endl;
        i++;
      }
      break;
    }
  //   if(a[i]==0){
  //     if(a[i-1]==0 and a[i+1]==0){
  //       i++;
  //       continue;
  //     }
  //     return false;
  // }
  // if(a[i]==1){
  //     if(a[i-1]==1 or a[i+1]==1){
  //       return false;
  //     }
  //     i++;
  }
    return true;
}


int main(){
  int n;
  cin>>n;
  n = n*n;
  string b = tobin(n);
  if(toche(b)){
    cout<<"true";
    return 0;
  }
  cout<<"false";
}
