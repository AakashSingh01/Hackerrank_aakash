#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n,c=0;
    cin >> n;
    string b;
    cin >> b;
    for(int i=0;i<n-2;i++){
        if(b[i]=='0'&&b[i+1]=='1'&&b[i+2]=='0'){c++;i=i+2;}
    }
    cout<<c;
    return 0;
}