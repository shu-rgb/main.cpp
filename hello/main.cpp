#include<iostream>
#include<Windows.h>
using namespace std;

int main(void){
	  int count=0;
	for(int i=0;i<24;i++){
		for(int k=0;k<60;k++){
			for(int j=0;j<60;j++){
				count++;
			   cout<<i<<":"<<k<<":"<<j<<"µÚ"<<count<<"´ÎÏëÄã"<<endl;
			 
			}
		}
	
	}
	system("pause");
	return 0;
}