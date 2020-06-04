   #include<stdio.h>
    void swap( int x, int y) {
           int  temp; //C++可以用pass by Reference
           temp=x;   x = y;   y = temp;
    }
    int m=38, n=49;
    int main( ) {
         swap(m, n);  /*  注意! 看起來好像不會變 */
         printf("m=%d, n=%d\n", m, n);
    }


