#include<iostream>
using namespace std;
#define	N 5
#define	ElemType int
void BubbleSort(ElemType arr[], int n)
{//冒泡升序排列
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				ElemType temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
}
void ImBubbleSort(ElemType arr[], int len)
{//改进型冒泡升序排列
	int i; ElemType temp;
	//记录位置，当前所在位置和最后发生交换的地方
	int current, last = len - 1;
	while (last > 0) {
		for (i = current = 0; i < last; ++i){
			if (arr[i] > arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				//记录当前的位置，如果没有发生交换current值即for循环初始化的0
				current = i;
			}
		}
		//若current = 0即已经没有可以交换的元素了，即已经有序了
		last = current;
	}
}

void InsertSort(ElemType arr[], int len) {
	//直接插入排序
	int i, j;
	ElemType temp;
	for (i = 1; i < len; i++) {
		//每次循环，先temp之前的都是已经排好序的，只需要将后面的元素插入到前面的相应位置
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)//前面的大于后面的则交换
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;
	}
}

void ImInsertSort(ElemType arr[], int n){
	//简洁版直接插入排序
	for (int i = 1; i <= n; ++i){
		for (int j = i; j > 0; --j){
			if (arr[j] < arr[j - 1]){
				//如果后面的小于前面的就一直交换
				ElemType temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

ElemType OnceSort(ElemType arr[], ElemType first, ElemType end){
	ElemType i = first, j = end;
	//当i<j即移动的点还没到中间时循环
	while (i < j){
		//右边区开始，保证i<j并且arr[i]小于或者等于arr[j]的时候就向左遍历
		while (i < j && arr[i] <= arr[j]) --j;
		//这时候已经跳出循环，说明j>i 或者 arr[i]大于arr[j]了，如果i<j那就是arr[i]大于arr[j]，那就交换
		if (i < j){
			ElemType temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		//对另一边执行同样的操作
		while (i < j && arr[i] <= arr[j]) ++i;
		if (i < j){
			ElemType temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//返回已经移动的一边当做下次排序的轴值
	return i;
}
void QuickSort(ElemType arr[], ElemType first, ElemType end){
	ElemType pivot = OnceSort(arr, first, end);
	//已经有轴值了，再对轴值左右进行递归
	QuickSort(arr, first, pivot - 1);
	QuickSort(arr, pivot + 1, end);
}
int main()
{

	ElemType num[N];
	int j;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	//ImBubbleSort(num, N);
	InsertSort(num, N);
	for ( int i = 0; i < N; i++)
	{
		cout << num[i]<<" ";
	}
	
	system("pause");
	return 0;
}










