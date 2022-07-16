#include <iostream>
#include <array>
using namespace std;

int main(){

    char mat [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //cout<<"___"<<"___"<<endl;
            cout<<" "<<mat[i][j]<<" |";
            
            //mat[i][j]=num++;
        }
        cout<<endl;
     }
     char n;
     
     

    cout<<"Choose your position:___";
    cin>>n;
    cout<<"\n";
     //char c=static_cast<char>(n);
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==n){
                mat[i][j]='x';
            }
        }
     }



     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //cout<<"___"<<"___"<<endl;
            cout<<" "<<mat[i][j]<<" |";
            
            //mat[i][j]=num++;
        }
        cout<<endl;
     }
     cout<<"Choose your position:___";
     cin>>n;
    cout<<"\n";






}