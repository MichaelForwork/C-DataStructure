#include <iostream>
#include <string>

using namespace std;
/*
多行注释
this is for poeple to use template 
预计2天完成： 
    基本数据类型/ 运算符号  / 逻辑控制结构 / 数组 / 函数 / 指针 / 结构体 / 项目1 
*/

//自定义全局常量= 宏常量
#define variable 10

int hailstone(int a){
    /* get the length of sequence; 程序未必是算法，有穷性没有证明过；
    可读性（准确命名+ 注释 + readme）和鲁棒性要强；*/
    int length = 1;
    while(a>1){
        (a%2) ? a = 3*a+1 : a = a/2;
        length++;    
    }
    return length;   
}


int testForadd(){
    int a = 50, sum = 0;
    while (a<=100)
    {
        /* code */
        sum += a;
        ++a;
    }
    return sum;
}

int chartest(){
    char art[] = "dasfdasdlfjlasd";
    string ad = "ddsafsadfd";
    cout<< art << ad<< endl;
    return 0;
    
}

void printArray(int a[],int n){
    for(int i =0;i<n;i++){
        cout << a[i]<<endl;
    }
}
// 测试冒泡算法 高级冒泡算法
int bouble(int a[], int n){
    int b=n;
    for (bool i =false ; i = !i; n--)  // 只要有一轮没有发生交换，bool就会发生反转成 false
    {
        for(int j=1; j<n; j++)
        {
            if(a[j-1]>a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                i = false;
            }
        }
    }
    printArray(a,b);
    return 0;
}

int iotest(){
    int a = 0;
    double b = 343489.23423490;
    string c = "   ";
    cout << "请给整数赋值"<<endl;
    cin >> a;
    cout << "请给小数赋值"<<endl;
    cin >> b;
    cout << "请给字符串赋值" <<endl;
    cin >> c;
    cout << "a= " << a << "\t b= "<< b << "\t c= "<<c<<endl;
    return 0;


}

// 测试逻辑运算的   c++ 除了0其他都是真 / 非0整数是
int adjfaldfj(){
    double eadfas = 797890.878978;
    int a = 10;
    if (!a){
        cout << !a <<"this is double check"<<endl;
    }else
    {
        cout<< a<<"this is check"<<endl;
    }
    

    return 0; 
}

int compareWeightFor3(int a, int b, int c ){
    int biggest = a;
    
    (a>b)? ((a>c)?biggest = a:biggest=c)  : ((b>c)?biggest=b:biggest =c);

    return biggest;
}

int main(){
    // 程序的入口 ，有且仅有一个main function 引入变量 variable 
    int a=0;
    int b=0;
    int c=0;
    cout <<"please enter three pig's weight : "<<endl;
    cin >> a>> b>>c;
    cout <<"the biggest pig: "<<compareWeightFor3(a,b,c)<<endl;
    return 0;
}