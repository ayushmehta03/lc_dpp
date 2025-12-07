#include<iostream>
using namespace std;

// in this question we have to count the odd number bewtween given range low and high 

// start from low and end to high


// n=high-low

// time complexity -> O(n)
// space complexity -> O(1)

int countOdds(int low,int high){

    // run a loop from low to high and increase the count variable if odd is found


    int cnt=0;

    for(int i=low;i<=high;i++){
        if(i%2!=0) cnt++;
    }

    return cnt;
}


int main(){
    int low=3;
    int high=7;

    int ans=countOdds(low,high);

    cout<<ans;

}