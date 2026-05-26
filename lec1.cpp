//finding the the upper case and lower case
#include<iostream>
using namespace std;
int main(){
  char ch;
  if(ch>='a' && ch<='z'){
    cout<<"lowecase";

  }
  else{
    cout<<"upper case";
  }
  return 0;
}
the uses of do while loop for the printing of value count 
#include<iostream>
using namespace std;
int main(){
  int n = 20;
  int count = 1;
 
  while (count<=n)
  {
    cout<<count<<" ";
    count++;
  }
  
  
  cout<<endl;
  return 0;
}
//patten of square
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<n;
  cin>>n;
  for(int i =1;i<=n;i++){
    for(int j =1;j<=n;j++){
      cout<<j;

    }
    cout<<endl;
  }
  return 0;
}
//printing the character
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<n;
  cin>>n;
  for(int i =1;i<=n;i++){
    char ch = 'a';
    for(int j =1;j<=n;j++){
      cout<<ch;
      ch=ch+1;

    }
    cout<<endl;
  }
  return 0;
}

  
  
 
