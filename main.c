#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elemtype;

//对L[1....n]排序，将L(2)~L(n)依次插入到前面已排好的子序列中，
//L[0]作为暂存地址，假定L[1]已有序，执行n - 1次便可得到有序序列

void InsertSort(elemtype a[],int n){
    int i,j;
    for(i = 2;i < n;i++){                   //从第二个元素开始，执行n - 1次
        if(a[i] < a[i - 1]){                 //如果待排元素比有序序列的最后一个元素还大，则跳过
            a[0] = a[i];
            for(j = i - 1;a[0] < a[j];j--){  //从后往前查找待插入位置
                a[j + 1] = a[j];            //依次向后挪位
            }
            a[j + 1] = a[0];
        }
    }
}
int main()
{
    elemtype a[] = {0,15,86,95,48,88,31,9,19,24,37,69,485,126,354,6,1,897,19};
    int i,j;
    int len = sizeof(a)/sizeof(int);
    InsertSort(a,len);
    for(i = 1;i < len;i++)
        printf("%d ",a[i]);

    return 0;
}
