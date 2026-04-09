#include <iostream>
using namespace std;
int update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
    return *a,*b;
}

int main() {
    int a, b;
    cin>>a>>b;
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    cout<<a<<"\n"<<b;
    
    return 0;
}
