/* The time Complexity is :- O(2 power n) */
/* The Space Complexity is :- O(n) */
#include<iostream>
using namespace std;
void func(int n){
    if (n>0)
    {
        // printf("%d ",n);
        cout<<n<<" ";
        func(n-1);
        func(n-1);
    }
    
}
int main(){
    func(3);
return 0;
}