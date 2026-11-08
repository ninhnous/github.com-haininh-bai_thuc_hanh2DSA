#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	
	float *ma = (float *)malloc(n * sizeof(float));
    if (ma == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
    	scanf("%f", &ma[i]);
	}
	
	for(int i = 0; i < n; i++) {
		printf("%.2f ", ma[i]);
	}
	
	free(ma);
	return 0;
}
