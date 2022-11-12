bool isPossible(vector<int> &boards, int k,int mid){
    int painterCount=1; //at least one painter must be there
    int time=0; 
    for(int i=0;i<boards.size();i++){
        if(time+boards[i]<=mid){ //add board to painter until capcity reached
            time+=boards[i];
        }
        else{ //if assigned capacity is greater than mid then 2nd painter needed
            painterCount++; 
            if(painterCount>k || boards[i]>mid){ //if requird painter are greater than actual painter then this mid partition is wrong so return false
                return false;
            }
            time=boards[i];//reseting time or current capacity to the remaing board capacity
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    int e=sum; //max time 
    int ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(boards,k,mid)){ //store the current ans and find minimum time by reducing end pointer 
            ans=mid; 
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
