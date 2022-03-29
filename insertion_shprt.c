 #include<stdio.h>

void main(){
	int arr[10], i, j, num, tmpNum;
	
	scanf("%d", &num);
	
	for(i = 0; i < 10; i++){
		tmpNum = num % 10;
		arr[i] = tmpNum;
		num /= 10; 
	}
	
	//------Insertion_Sort-------//
	
	for(i = 1; i < 10; i++){
		int temp = arr[i];
		for(j = i-1; j >= 0; j--){
			if(temp < arr[j]){
				arr[j+1] = arr[j];
			}else{
				break;
			}
		}
		arr[j+1] = temp;
	}
	
	//--------Print-----//
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
