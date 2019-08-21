#include<iostream>


using namespace std;

void bubblesort(int arr[],int arr_len);

int main(){

int arreglo_de_numeros[10]={3,8,1,6,2,7,9,5,6,11};

bubblesort(arreglo_de_numeros, 10);

for(int i=0;i<10;i++){

	cout<<arreglo_de_numeros[i]<<endl;

}

return 0;

}


void bubblesort(int arr[],int arr_len){

	for(int i=0;i<arr_len;i++){
	
		for(int j=0;j<arr_len-i-1;j++){
	
		
			if(arr[j]>arr[j+1]){
			
				int temp=arr[j];
			
				arr[j]=arr[j+1];
		
				arr[j+1]=temp;
		}
	}
}
}


