

#include <iostream>
#include "Tree.h"


int main()
{
	Tree<int,int> tree;

	for (int i = 0; i < 300; i++)
	{
		tree.add(i%15,i);
		

	}
	tree.print();
	//tree.find(2);


}


/*
	�������� ������ ������ ����������� ������
	��������� ������
	�������������� ����� ���� ���������� ������ �� ����� � ������ �������
	� ������� �� ����������� ������ ����� � ������ �������� 
	��������� �� ���� ����, � �� ������� �� ��������
		
			���� 1
		   /    \
  	  ���� 2	���� 3
	  /		   /	  \
 ���� 4     ���� 5   ���� 6


	��� ��� ����� ����� ���, ����� ������� (��������) ���� ����������
	���������


	����� ���������� ���������� �.������ - ������ ������
	������������� ����������� � ������� ��� ������ ���� �������� � ����� ����� ������ ��� � ������

	��������� ���������� ������ (�����) � ������ �� ����� ���� ������ �� ������ 
	������-������.
	��� ���������� ������� ������, ������ ����� ��� �������.
	�������������� � ������ �����.

*/




