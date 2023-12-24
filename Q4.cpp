#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    int mat[n][n];
    int minr=0,maxr=n-1,minc=0,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        if(maxr>=minr){
            for(int i=minc; i<=maxc; i++){
            mat[minr][i]=k;
            k++;
        }minr++;
        }
        if(maxc>=minc){
            for(int i=minr; i<=maxr; i++){
            mat[i][maxc]=k;
            k++;
        }maxc--;
        }
        if(maxr>=minr){
            for(int i=maxc; i>=minc; i--){
            mat[maxr][i]=k;
            k++;
        }maxr--;
        }
        if(maxc>=minc){
            for(int i=maxr; i>=minr; i--){
            mat[i][minc]=k;
            k++;
        }minc++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}