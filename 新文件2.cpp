   #include<stdio.h>
    void swap( int x, int y) {
           int  temp; //C++�i�H��pass by Reference
           temp=x;   x = y;   y = temp;
    }
    int m=38, n=49;
    int main( ) {
         swap(m, n);  /*  �`�N! �ݰ_�Ӧn�����|�� */
         printf("m=%d, n=%d\n", m, n);
    }


