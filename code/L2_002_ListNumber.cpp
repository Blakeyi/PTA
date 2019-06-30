//#include<bits/stdc++.h>
//
//struct MyList
//{
//	int Addr;
//	int Num;
//	int NextAddr;
//};
//int main()
//{
//	int firstAddr; int totalNum; int next;
//	bool flag = false;//false 代表没有相同的值
//	std::cin >> firstAddr >> totalNum;
//	std::vector<MyList> mList;
//	std::vector<int> mListOut;
//	std::vector<MyList>::iterator it;
//	std::vector<int>::iterator it1;
//	
//	for (int i = 0; i < totalNum; i++)
//	{
//		MyList List;
//		std::cin >> List.Addr >> List.Num >> List.NextAddr;
//		if (List.Addr==firstAddr)
//		{
//			mListOut.push_back(List.Num);
//			next = List.NextAddr;
//		}
//		else
//			mList.push_back(List);
//	}
//
//	for (it=mList.begin();it!=mList.end();++it)
//	{
//		if (it->Addr==next)
//		{
//			for (it1 = mListOut.begin(); it1 != mListOut.end(); ++it1)
//			{
//				if ((*it1)*(*it1)==(it->Num)*(it->Num))
//				{
//					flag = true;
//					break;
//				}
//			}
//			if (!flag)
//			{
//				mListOut.push_back(it->Num);
//				next = it->NextAddr;
//			}
//			flag = false;
//		}
//	}
//
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int address, key;
}nodeOne;
int arr2[100005];
int arr3[100005];
int arr4[100005];
int main(){
	int a, b, c, i;
	int k1 = 0, k2 = 0;
	nodeOne arr1[100005];
	memset(arr2, 0, sizeof(arr2));
	memset(arr3, 0, sizeof(arr3));
	memset(arr4, 0, sizeof(arr4));
	scanf_s("%d %d", &a, &b);
	for (i = 0; i<b; i++){
		cin >> c;
		cin >> arr1[c].key;
		cin >> arr1[c].address;
	}

	for (i = a; i != -1; i = arr1[i].address){
		int q = abs(arr1[i].key);
		if (arr2[q] == 0){
			arr2[q] = 1;
			arr3[k1++] = i;//记录每个K值得地址
		}
		else{
			arr4[k2++] = i;
		}
	}
	printf_s("%05d %d ", arr3[0], arr1[arr3[0]].key);
	for (int j = 1; j<k1; j++){
		printf_s(" %05d\n", arr3[j]);
		printf_s("%05d %d", arr3[j], arr1[arr3[j]].key);
	}
	printf_s("-1\n");
	if (k2){
		printf_s("%05d %d ", arr4[0], arr1[arr4[0]].key);
		for (i = 1; i<k2; i++)
		{
			printf_s("%05d\n", arr4[i]);
			printf_s("%05d %d ", arr4[i], arr1[arr4[i]].key);
		}
		printf_s("-1\n");
	}
	return 0;
}
