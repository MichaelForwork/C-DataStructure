#include <iostream>
#include <string>
using namespace std;
/*
预计3天：
	引用 / 对象 / 文件操作 / 项目2 
*/

int main(){
    int i,k;
    i=3; 
    k = (i++) + (i++);
    cout << "this is k = "<<k<<endl;

    return 0;
}