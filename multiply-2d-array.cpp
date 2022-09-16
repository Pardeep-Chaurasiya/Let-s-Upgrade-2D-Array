#include<iostream>
using namespace std;
 
// 1 2  1 2   5 8
// 2 3  2 3 = 8 13

int main(){

    int A[5][5],B[5][5],C[5][5]={0},i,j,k,r1,c1,r2,c2;

    cout<<"Enter the row and column of matrix A :- ";
    cin>>r1>>c1;
    
    cout<<"Enter the row and column of matrix B :- ";
    cin>>r2>>c2;

    if(c1 != r2)
        cout<<"Matix can't be multiplied because column1 != row2";
    else{
            cout<<"Enter the element in matrix A :- ";
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++)
                    cin>>A[i][j];
            }
            cout<<"Enter the element in matrix B :- ";
            for(i=0;i<r2;i++){
                for(j=0;j<c2;j++)
                    cin>>B[i][j];
            }

            cout<<"\nMatrix A :- \n";
            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++)
                    cout<<A[i][j]<<" ";
                cout<<endl;
            }
            cout<<"\nMatrix B :- \n";
            for(i=0;i<r2;i++){
                for(j=0;j<c2;j++)
                    cout<<B[i][j]<<" ";
                cout<<endl;
            }
            cout<<"Matrix multiplication of A and B is :- \n";
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    for(k=0;k<c1;k++){
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }   
            }

            for(i=0;i<r1;i++){
                for(j=0;j<c1;j++)
                    cout<<C[i][j]<<" ";
                cout<<endl;
            }
        }

    

    return 0;
}