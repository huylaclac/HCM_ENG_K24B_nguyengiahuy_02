#include<stdio.h>
	int main() {
		int max_size;
		printf("nhap max size cua mang: ");
		scanf("%d", &max_size);
		int n;
		printf("nhap vao so luong cua cac phan tu : \n");
		scanf("%d", &n);
		int choice;
		int a[n];		
		do{
		printf("\nMENU\n");
		printf("1. nhap so phan tu \n");
		printf("2. in gia tri ra cho mang\n");
		printf("3. cac so hoan hao co trong mang la\n");
		printf("4. phan tu lon thu 2 o trong mang la\n");
		printf("5. them phan tu vao vi tri ngau nhien trong mang\n");
		printf("6. xoa phan tu tai mot vi tri\n");
		printf("7. sap xep mang theo thu tu tang dan insection sort\n");
		printf("8. tim kiem phan tu trong mang\n");
		printf("9. sap xep mang va hien thi so chan dung truoc so le dung sau \n");
		printf("10. dao nguoc thu tu cua cac phan  tu co trong mang\n");
		printf("11. thoat\n");
		printf("\n");
			printf("lua chon cua ban  la: ");
			scanf("%d", &choice);
			if(choice == 1){
				printf("nhap cac phan tu \n");
				for(int i=0; i<n;i++){
					printf("nhap phan tu thu a[%d]=%d ", i, i+1);
					scanf("%d", &a[i]);
				}
				
			}
			if(choice==2){
				printf("cac phan tu co trong mang: ");
				for (int i=0; i<n; i++){
					printf("%d ", a[i]);
				}
			}
			
			if(choice==3){
				printf("cac so hoan hao co trong mang la\n");	
				for(int i=0;i<n;i++){
					
				
				}			
			}
			
			if(choice==4){
    int max1 = a[0]; 
    int max2 = a[1]; 
        if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    for (int i = 2; i < n; i++) {
            if (a[i] > max1) {
            max2 = max1;  
            max1 = a[i];  
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];  
        }
    }
}
		printf("phan tu lon thu 2 o trong mang la %d\n", max2);
			}
			
			if(choice==5){
		int pos, value;
		printf("vi tri muon them phan tu (0 den %d): ", max_size);
        scanf("%d", &pos);
        printf("Nhap gia tri ban muon them: ");
        scanf("%d", &value);

        for (int i = n; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = value;
        n++;		
				}
						
		if(choice==6){
			int pos;
			printf("nhap vi tri phan tu ban muon xoa: ");
			scanf("%d", &pos);
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;       
				}
				
				
		if(choice==7){ 
	for (int i = 1; i < n; i++) {
	int key=a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
}
		}
		
		
		if(choice==8){
			int x;
			printf("nhap vao phan tu ban muon kiem tra \n");
			scanf("%d", &x);
    	int found =-1;
        int left=0, right= n - 1;
        while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) {
        found = mid;
        break;
    } else if (a[mid] < x) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }
}
if(found!=-1){
	printf("phan tu %d duoc tim thay tai vi tri %d\n", x, found);
}else{
	printf("phan tu %d khong ton tai trong mang\n", x);
}
		}
		
		if(choice==9){
			for(int i=0;i<n-1; i++){
				if(a[i]%2==0){
					int temp=a[i+1];
					a[i+1]=a[i];
					a[i]=temp;
				}
			}
		}
		if(choice==10){
			printf("phan tu sau khi duoc dao nguoc: ");
		int left = 0, right = n - 1;
    while(left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
		}
		
	}while(choice!=11);
	return  0;
}
