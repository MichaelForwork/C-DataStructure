#include <iostream>

using namespace std;
/*
多行注释
this is for poeple to use template 
*/

/*
整型    int(4byte) / short int(2byte) / long (8byte) / longlong (8byte) 


*/

//自定义全局常量= 宏常量
#define variable 10

int function(){

 return 0;   


}

int main(){
    // 程序的入口 ，有且仅有一个main function 引入变量 variable 
    const int c = 234;
    int addsafasdf = 233232423;
    double adfadf = 2342349.34234;
    short int asdaf = 3343;
    int a = 1;
    int b = 2;
    int terminal = sizeof(float);
    string d = "dasf dsf "; // update for hello world 
    cout << a << "=" << sizeof(int) << endl;
    return 0;
}