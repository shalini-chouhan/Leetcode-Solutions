class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d){
         sort(arr2.begin(),arr2.end());
         int m=arr1.size();
         int n=arr2.size();
         int count=0;
        for(int i=0;i<m;i++){
            int l=0,h=n-1;
            while(h>=l){
               int mid=(l+h)/2;
                if(arr2[mid]<=arr1[i]+d && arr2[mid]>=arr1[i]-d){
                    count++;
                    break;
                }
                else if(arr2[mid]>arr1[i]+d){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        return m-count;
    }
};