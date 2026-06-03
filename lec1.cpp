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
//now we are printing the numbers in continous manner 
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<n;
  cin>>n;
  int count =1;
  for(int i =1;i<=n;i++){
    
    for(int j =1;j<=n;j++){
      cout<<count;
      count+=1;

    }
    cout<<endl;
  }
  return 0;
}
//now we are printing the next pattern into the traingle pattern
#include<iostream>
using namespace std;
int main(){
int n;
cout<<n;
cin>>n;
for(int i = 1;i<=n;i++){
  for(int j = 1;j<=i;j++){
    cout<<"*"<<" ";
  }
  cout<<endl;
}
return 0;
}
//now we are printing the same number of line in the no of the outer loop
#include<iostream>
using namespace std;
int main(){
int n;
cout<<n;
cin>>n;

for(int i = 1;i<=n;i++){

  for(int j = 1;j<=i;j++){
    cout<<i<<" ";
  }
  cout<<endl;
}
return 0;
}
// printing pattern in the alphabate
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// for(int i = 1;i<=n;i++){
//   char ch = 'A'+i-1;
//     for(int j = 1;j<=i;j++){
//         cout<<ch<<" "; 
        
//     }
//     cout<<endl;
//     }
//     return 0;
// }
// printing hte pattern into the given number 

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;


// for(int i = 1;i<=n;i++){
//   int count =1;
//     for(int j =1;j<=i;j++){
//         cout<<count<<" ";
//         count++;}
//         cout<<endl;}
//         return 0;

//next pattern for the given number
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;


// for(int i = 1;i<=n;i++){
//   for(int j=i;j>=1;j--){
//       cout<<j<<" " ;   
//     }
//     cout<<endl;
//     }
//     return 0;
// }
//printing the pattern into new variable introduction  form 
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
//  int count = 1;

// for(int i = 1;i<=n;i++){

//   for(int j=1;j<=i;j++){
//       cout<<count<<" " ;
//       count++;

//     }
//     cout<<endl;
//     }
//     return 0;
// }
// printing the loop in another pattern
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
 

// for(int i = 1;i<=n;i++){
  

//   for(int j=1;j<=i;j++){
//       cout<<" ";}
//   for(int k = 1;k<=n-i+1;k++){
//     cout<<i;
//   }


    
//     cout<<endl;
//     }
//     return 0;
// }
// pyramid pattern in the c++
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
 

// for(int i = 1;i<=n;i++){
  

//   for(int j=1;j<=n-i;j++){
//       cout<<" ";}
//   for(int l=1;l<=i;l++){
//     cout<<l;}
//   for(int r = i-1;r>=1;r--){
//     cout<<r;
//   }
//   for()


    
//     cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
 
for(int i = 1;i<=n;i++){
  for(int j=1;j<=n-i;j++){
      cout<<" ";}
      cout<<"*";
      if(i != 0){
        for(int k =1;k<=2*i-1;k++){
        cout<<" ";
      }
      cout<<"*";
    }
    for(int m = 1;m<=n;m++){
      for(int o = 1;o<=m;o++){
        cout<<" ";
      }
      cout<<"*";
      if(i != n-1){
        for(int lsb = 1;lsb<=2*(n-m)-5;lsb++)
        cout<<" ";
      }
      cout<<"*";

    }


    cout<<endl;
    }
    return 0;
}
  
 


  
  
 
