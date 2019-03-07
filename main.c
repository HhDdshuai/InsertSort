#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elemtype;

//��L[1....n]���򣬽�L(2)~L(n)���β��뵽ǰ�����źõ��������У�
//L[0]��Ϊ�ݴ��ַ���ٶ�L[1]������ִ��n - 1�α�ɵõ���������

void InsertSort(elemtype a[],int n){
    int i,j;
    for(i = 2;i < n;i++){                   //�ӵڶ���Ԫ�ؿ�ʼ��ִ��n - 1��
        if(a[i] < a[i - 1]){                 //�������Ԫ�ر��������е����һ��Ԫ�ػ���������
            a[0] = a[i];
            for(j = i - 1;a[0] < a[j];j--){  //�Ӻ���ǰ���Ҵ�����λ��
                a[j + 1] = a[j];            //�������Ųλ
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
