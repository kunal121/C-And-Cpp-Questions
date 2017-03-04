
#include <iostream>


using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i = 0;i < n;i++){//taking input
       cin >> arr[i];
    }
    for(i=n-1;i>=0;i--)//reverse printing
     cout<<arr[i]<<"\t";
    return 0;
}
