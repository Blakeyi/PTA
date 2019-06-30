#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<iomanip>
struct Redpacket
{
    int num;//编号
    int receivedNum=0;//收到红包的个数
    int receivedMon=0;//收到的红包总额

};
bool comp(Redpacket i, Redpacket j)
{ 
    if (i.receivedMon == j.receivedMon)
    {
        if (i.receivedNum == j.receivedNum)
        {
           return i.num < j.num;
        }
        else
         return i.receivedNum > j.receivedNum;
    }
    else
     return i.receivedMon > j.receivedMon; 
}
int main()
{
    int Num,num;
    int k,moneyT=0,money;//用于存储每个人发的红包总额
    cin>>Num;
    Redpacket *RedP=new Redpacket[Num];//动态构造数组
    for (int i = 0; i < Num; i++)
    {
        RedP[i].num=i;
        cin>>k;
        for (int j = 0; j < k; j++)                                                                                                                                                         
        {
            cin>>num;
            cin>>money;
            RedP[num-1].receivedMon+=money;
            RedP[num-1].receivedNum++;
            moneyT+=money;
        }
        RedP[i].receivedMon-=moneyT;
        moneyT=0;
    }
   
    sort(RedP,RedP+Num,comp);//排序的写法
    for (int i = 0; i < Num; i++)
    {
        cout<<RedP[i].num+1<<" " ;
        cout<<fixed<<setprecision(2)<<RedP[i].receivedMon/100.0<<endl;
    }
    system("pasue");
    delete []RedP;
    return 0;
}