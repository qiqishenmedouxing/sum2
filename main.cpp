#include<iostream>
using namespace std;
int main()
{
    //定义变量n，表示该组测试有n行
    int n,m,a;// 定义变量m， 表示该行有m个数据
    //可能有多组数据，所以需要持续接收n,直到停止输入
    while(cin>>n)
    {
        //因为有n行数据，需要计算每行的整数和，使用while循环控制代码执行n次，当n为0时，结束循环。
        while(n--)
        {//接受第一个数据m，表示该行有m个数据需处理
            cin>>m;
            int sum=0;
            //循环m次，计算数据总和
            while(m--)
            {cin>>a;
                sum+=a;


            }//m个数据处理完毕后，输出sum；
cout<<sum<<endl;
            //每组数据的最后，不需要输出空行
            if(n!=0)cout<<endl;
        }
    }
    return 0;
}