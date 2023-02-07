#include<iostream>
using namespace std;
int main(){
	string P,C;
	string B ="ABCDEFGHIJKLMNOPRSTUVWXYZ";
	string K= "NGUYENDUYENCHIEN";
	K= K+B;
	for(int i =0;i<K.size()-1;i++){
		for(int j= i+1;j<K.size();j++){
			if(K[j]==K[i]){
				K.erase(j,1);
				j--;
				}
			}
			
		}
	cout<<"Khoa K sau khi xoa: "<<K;
	cout<<"\nNhap chuoi plaintext:";getline(cin,P);
	char A[5][5];int t = 0;
	for(int i =0;i<5;i++){
		for(int j = 0;j<5;j++)
		{A[i][j]=K[t];
		t++;
		}
		}
	cout<<"\nMa tran khoa";
	for(int i=0;i<5;i++){
		for(int j = 0;j<5;j++)
		{
			cout<<A[i][j]<<" ";
			cout<<endl;

		}
	}
	string C1,C2;
	
	for(int i = 0 ;i<5;i++){
		for(int j=0;j<5;j++){
			if(j==0){
				C1=C1+A[i][j];
				}else
				C2=C2+A[i][j];
				}
				}
	C=C1+C2;
	cout<<"Chuoi ma hoa"<<C;
				
	}
	
