#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,m=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<=(n+1)/2){
            m++;
        }
        else{
            m--;
        }
        k=m;
       
        for(int j=1;j<=(2*n)-1;j++){
            if((j<=(2*m)+(n-2)&&j>=(n-1)+m)||((j<=(n+1)-m)&&(j>=(n+2)-2*m))){
                cout<<k<<" ";
                j<=n?k--:k++;
            }
            else{
                cout<<"  ";
                if(j==n){
                    k++;
                }
            }
        }
        cout<<endl;
    }




      return 0;
}
