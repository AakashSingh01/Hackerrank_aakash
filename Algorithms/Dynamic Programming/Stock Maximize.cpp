#include <iostream>
#include <algorithm>
using namespace std;

void stock(){
  long  int i,n,x,m,c=0;cin>>n;
    int a[n];   for(i=0;i<n;i++)cin>>a[i];x=0;

    while(1){
        m=(long int)*max_element(a+x,a+n);
        for(i=x;i<n;i++){
            if(a[i]==m)break;c+=m-a[i];
        }
        if(i<n-2)
        x=i+1;else break;
    }
    cout<<c<<endl;


}
int main() {int t;cin>>t;
            while(t--)stock();
    return 0;
}
