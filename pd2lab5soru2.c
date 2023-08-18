

#include <stdio.h>

/*2- Ýþaretçileri kullanarak iki sayýyý toplamak için C'de bir program yazýn.*/




int main(){

    int *ptr1,*ptr2,sayi1,sayi2,toplam;
    
    ptr1=&sayi1;
    ptr2=&sayi2;
    
    printf("birinci sayiyi giriniz:  ");
    scanf("%d",ptr1);
    
    printf("ikinci sayiiy girin:  ");
    scanf("%d",ptr2);
    
    toplam=*ptr1+*ptr2;
    printf("toplam:  %d",toplam);
    



 
 
 
 return 0;
}
