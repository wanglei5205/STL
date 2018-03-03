#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int vector_fun();
	vector_fun();

	system("pause");
	return 0;
}

int vector_fun()
{
	// 创建一维向量
	//vector<int> v1_int;		

	// 创建并初始化一维向量
	vector<int> v1_int; 

	// 尾部插入
	v1_int.push_back(1);
	v1_int.push_back(2);
	v1_int.push_back(3);
	v1_int.push_back(4);

	// 指定位置插入
	v1_int.insert(v1_int.begin(), 0);

	// 向量大小
	int nsize = v1_int.size();
	cout << nsize << endl;         //5

	// 下标访问--向量对象的元素
	cout << v1_int[0] << endl;     //0
	
	// 引用访问--向量对象的元素
	cout << v1_int.front() << endl;//0
	cout << v1_int.back() << endl; //4

	// 迭代器访问--向量对象的元素

	// 方式1：向量迭代器变量
	vector<int>::iterator temp_begin; // 定义向量迭代器变量temp_begin
	vector<int>::iterator temp_end;   // 定义向量迭代器变量temp_end

	temp_begin = v1_int.begin();// 获取向量对象首元素的迭代器--首迭代器
	temp_end = v1_int.end();    // 获取向量对象尾后元素的迭代器--尾后迭代器

	for (temp_begin; temp_begin < temp_end; ++temp_begin)
	{
		cout << v1_int[*temp_begin] << endl; // 向量迭代器变量解引用 
	}

	//方式2：自动迭代器变量
	for (auto i = v1_int.begin(); i < v1_int.end();++i)
	{
		cout << v1_int[*i] << endl; // 自动迭代器变量接引
	}
	
	// 指定位置删除
	v1_int.erase(v1_int.begin() + 2); //删除第三个元素
	cout <<"向量长度"<< v1_int.size() << endl;

	// 清空向量
	v1_int.clear();
	cout <<"向量长度"<< v1_int.size() << endl;
	
	return 0;
}

