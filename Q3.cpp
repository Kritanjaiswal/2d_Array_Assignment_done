#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=m-1; i>=0; i--){
                cout<<mat[i][j]<<" ";
            }
        }else{
            for(int i=0; i<m; i++){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}