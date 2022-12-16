// #include <bits/stdc++.h>
#include <iostream> 
#include <vector>
using namespace std;
void selectionSort(vector<int> & a){
    int n = a.size();
    for(int i=0;i<n;i++){
        int minIdx = i;
        for(int j =i+1;j<n;i++){
            if(a[minIdx]<=a[j]){
                minIdx = j;
            }
        }
        swap(a[minIdx],a[i]);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    selectionSort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}
