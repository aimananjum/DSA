#include <iostream>

using namespace std;
/*
  diagram : 2nd line smallest element is pivot ele
|
|        I      
|       /     II
|     /       /
|   /       /
|_______________________
*/
int main()
{
    int arr[5]={3,8,10,17,1};
    
    int s=0,e=4;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        
    }
    cout<<s<<endl;
     for(int i=0;i<5;i++){
         cout<<arr[i]<<" ";
     }

    return 0;
}
