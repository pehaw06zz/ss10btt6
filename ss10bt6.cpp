#include<stdio.h>
int main(){
	int n;
	printf("nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	int array[n];
	printf("nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	int x;
	printf("nhan phan tu can tim: ");
	scanf("%d",&x);
	int vitri[n];
	int count=0;
	for(int i=0;i<n;i++){
		if(array[i]==x){
			vitri[count]=i;
			count++;	
		}
	}
	if(count>0){
		printf("phan tu %d duoc tim thay tai vi tri: ",x);
		for(int i=0;i<count;i++){
			printf("%d",vitri[i]);
		}
		printf("\n");
		
	}else{
		printf("phan tu % khong nam trong mang.\n");
		return 0;
	}
}
