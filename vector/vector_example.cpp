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
	// ����һά����
	//vector<int> v1_int;		

	// ��������ʼ��һά����
	vector<int> v1_int; 

	// β������
	v1_int.push_back(1);
	v1_int.push_back(2);
	v1_int.push_back(3);
	v1_int.push_back(4);

	// ָ��λ�ò���
	v1_int.insert(v1_int.begin(), 0);

	// ������С
	int nsize = v1_int.size();
	cout << nsize << endl;         //5

	// �±����--���������Ԫ��
	cout << v1_int[0] << endl;     //0
	
	// ���÷���--���������Ԫ��
	cout << v1_int.front() << endl;//0
	cout << v1_int.back() << endl; //4

	// ����������--���������Ԫ��

	// ��ʽ1����������������
	vector<int>::iterator temp_begin; // ������������������temp_begin
	vector<int>::iterator temp_end;   // ������������������temp_end

	temp_begin = v1_int.begin();// ��ȡ����������Ԫ�صĵ�����--�׵�����
	temp_end = v1_int.end();    // ��ȡ��������β��Ԫ�صĵ�����--β�������

	for (temp_begin; temp_begin < temp_end; ++temp_begin)
	{
		cout << v1_int[*temp_begin] << endl; // �������������������� 
	}

	//��ʽ2���Զ�����������
	for (auto i = v1_int.begin(); i < v1_int.end();++i)
	{
		cout << v1_int[*i] << endl; // �Զ���������������
	}
	
	// ָ��λ��ɾ��
	v1_int.erase(v1_int.begin() + 2); //ɾ��������Ԫ��
	cout <<"��������"<< v1_int.size() << endl;

	// �������
	v1_int.clear();
	cout <<"��������"<< v1_int.size() << endl;
	
	return 0;
}

