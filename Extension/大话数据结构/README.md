# Linear List
## Sequential Storage Structure
### Basic attribute in sequential storage structure
```C
#define MAXSIZE 20 /*Storage space initialization*/
typedef int ElemType;//ElemType类型根据实际情况来定，这里预先假设为int
typedef struct
{
    ElemType data[MAXSIZE];//数组存储数据元素，最大存储空间为MAXSIZE
    int length;//LinearList current length 线性表当前长度
}SqList;
```
|DataStructure数据结构|Array数组|
|----|----|
|存储空间起始位置|数组的存储位置|
|线性表的最大存储容量|数组长度MaxSize|
|线性表的当前长度|length|


### The difference between length of data and length of linear-list
