#include <bits/stdc++.h> 
int partition(vector<int> &arr,int s,int e){
    int pivot = arr[s];//first ele is chosen as a pivot
    int cnt=0;
    for(int i=s+1;i<=e;i++){//counting all elements less than pivot
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex=s+cnt;//correct position of pivot element
    swap(arr[pivotIndex],arr[s]);//swap to its correct position
    //left and right arrangement of elements
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){ //if out of order than swap it
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(vector<int> &arr,int s,int e){
    if(s>=e) return;
    int p = partition(arr,s,e);//pivot index at its correct position
    quickSort(arr,s,p-1);//sort its left part
    quickSort(arr,p+1,e);//sort its right part
}
vector<int> quickSort(vector<int> arr)
{
    int n=arr.size();
    quickSort(arr,0,n-1);
    return arr;
}
