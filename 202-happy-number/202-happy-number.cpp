class Solution {
public:

int num(int n){
    int sum=0;
    while(n!=0){
        sum=sum+((n%10)*(n%10));
        n=n/10;
    }
    return sum;
}
bool isHappy(int n){
    
    int arr[100000]={0};
    while(true){
       int x = num(n); 
        
        if(x==1){
            return true;
            break;
        }
        else if(arr[x]==1){
            return false;
            break;
        }
        else{
            arr[x]=1;
            n=x;
        }
    }
}
};