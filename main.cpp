#include <iostream>

using namespace std;
int main() {
    int a = 0, b = 1, c = a+b;
    int n=0;
    cin>>n;
    while(n<2){
        cout<<"errore"<<endl;
        cin>>n;
    }
cout<<1<<endl;
    for(int i=1; i<n; i++) {
        cout << c << endl;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
