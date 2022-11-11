#include<bits/stdc++.h>

using namespace std;

int minJumps(vector<int> a, int n){
    if (n == 1)
        return 0;
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + a[i] >= n - 1) {
            int sub_res = minJumps(a, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);}}
    return res;
}
void function1(int num, char *param[]){
 vector<int> a;
 for(int i=1;i<num;i++){
     a.push_back(stoi(param[i]));}
    int n=a.size();
    if(minJumps(a,n)==-1){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}
 int main(int argc, char * argv[]) {
    function1(argc, argv);
    return 0;
 }



// unsigned long int binC(unsigned int n,unsigned int r)
// {
//     unsigned long int res = 1;
//     if (r > n - r)
//         r = n - r;
//     for (int i = 0; i < r; ++i) {
//         res *= (n - i);
//         res /= (i + 1);
//     }
//     return res;
// }
// unsigned long int c(unsigned int no)
// {  unsigned long int ans=binC(2*no,no);
//     return ans/(no+1);
// }
 
// unsigned long int ValidCombifind(unsigned a)
// {
//     if (a & 1)
//         return 0;
//     return c(a / 2);
// }


// void function1(int num, char *param[]){
// int a=stoi(param[1]);
// a=a*2;
// cout<<ValidCombifind(a);
//  }
// int main(int argc, char** argv)
// {
//   function1(argc, argv);
//   return 0;
// }

// int firstNonRepeating(string str) {
//     int fi[256]; // array to store First Index
 
//     // initializing all elements to -1
//     for(int i = 0; i<256; i++)
//         fi[i] = -1;
 
//     // sets all repeating characters to -2 and non-repeating characters
//       // contain the index where they occur
//     for(int i = 0; i<str.length(); i++) {
//         if(fi[str[i]] == -1) {
//             fi[str[i]] = i;
//         }else {
//             fi[str[i]] = -2;
//         }
//     }
 
//     int res = INT_MAX;
 
//     for(int i = 0; i<256; i++) {
 
//         // If this character is not -1 or -2 then it
//         // means that this character occurred only once
//         // so find the min index of all characters that
//         // occur only once, that's our first index
//         if(fi[i] >= 0)
//             res = min(res, fi[i]);
//     }
     
//     // if res remains INT_MAX, it means there are no
//     // characters that repeat only once or the string is empty
//     if(res == INT_MAX) return -1;
//     else return res;
// }


// void function1(int num, char *param[]){
//  //num: number of param passed
//  //param: parameter list
// string str=param[1];
//  int index = firstNonRepeating(str);
//  if (index == -1){
//     cout<<"-1";
//  }
//  else{
//     cout<<str[index];
//  }
//  }
// int main(int argc, char** argv)
// {
//   function1(argc, argv);
//   return 0;
// }









// #include<bits/stdc++.h>
// using namespace std;

// int firstNonRepeating(string str) {
//     int fi[256]; // array to store First Index
 
//     // initializing all elements to -1
//     for(int i = 0; i<256; i++)
//         fi[i] = -1;
 
//     // sets all repeating characters to -2 and non-repeating characters
//       // contain the index where they occur
//     for(int i = 0; i<str.length(); i++) {
//         if(fi[str[i]] == -1) {
//             fi[str[i]] = i;
//         }else {
//             fi[str[i]] = -2;
//         }
//     }
 
//     int res = INT_MAX;
 
//     for(int i = 0; i<256; i++) {
 
//         // If this character is not -1 or -2 then it
//         // means that this character occurred only once
//         // so find the min index of all characters that
//         // occur only once, that's our first index
//         if(fi[i] >= 0)
//             res = min(res, fi[i]);
//     }
     
//     // if res remains INT_MAX, it means there are no
//     // characters that repeat only once or the string is empty
//     if(res == INT_MAX) return -1;
//     else return res;
// }
 
// int main(){
//     string str;
//       cin>>str;
//     int firstIndex = firstNonRepeating(str);
//     if (firstIndex == -1)
//         cout<<"Either all characters are repeating or string is empty";
//     else
//         cout<<"First non-repeating character is "<< str[firstIndex];
     
//     return 0;
// }


 



//#include<bits/stdc++.h>
// #include <iostream>
// using namespace std;
// const int max_char = 256;
// void function1(int num, char *param[]){
//  //num: number of param passed
//  //param: parameter list
//    string s=param[1];
//    int n=s.length();
//    int c[max_char];
//    int idx[max_char];
//    for(int i=0;i<max_char;i++){
//       c[i]=0;
//       idx[i]=n;
//    }
//    for(int i=0;i<n;i++){
//       char x = s[i];
//       ++c[x];
//       if(c[x]==1 && x !=' ')
//       idx[x]=i;
//       if(c[x]==2)
//       idx[x]=n;
//    }
//    sort(idx,idx+max_char);
//    for(int i=0;i<max_char && idx[i]!=n;i++)
//    cout<<s[idx[i]];
//  }
// int main(int argc, char** argv)
// {
//   function1(argc, argv);
//   return 0;
// }