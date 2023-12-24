#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    int f=n/2;
    int end=n-1;
    for(int i=0; i<f; i++){
        for(int j=0; j<n; j++){
            swap(mat[i][j],mat[end][j]);
        }
        end--;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}