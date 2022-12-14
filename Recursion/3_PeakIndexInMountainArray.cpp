class Solution {
public:
    int BSPeakElement(vector<int>&a,int s,int e){

        if(s>=e) return s;
        int mid=s+(e-s)/2;
        if(a[mid+1]>a[mid]){
            return BSPeakElement(a,mid+1,e);
        }
        else{
            return BSPeakElement(a,s,mid);
        }
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        return BSPeakElement(arr,0,n-1);

    }
};
