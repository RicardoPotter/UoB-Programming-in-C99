#define MAXSIZE 20 /*Storage space initialization*/
typedef int ElemType;//ElemType类型根据实际情况来定，这里预先假设为int
typedef struct
{
    ElemType data[MAXSIZE];//数组存储数据元素，最大存储空间为MAXSIZE
    int length;//LinearList current length 线性表当前长度
}SqList;
