#pragma once
#include	<iostream>
#include	"worker.h"
#include	"boss.h"
#include	"manager.h"
#include	"employee.h"

#include	<fstream>
#define FILENAME "empFile.txt"
using namespace std;
class WorkManager
{
public:
	//��¼�ļ��е���������
	int m_EmpNum;
	bool m_FileIsEmpty;
	//Ա�������ָ��
	Worker ** m_EmpArray;
	void Find_Emp();
	void Sort_Emp();
	int get_EmpNum();
	void Clean_File();
	void init_Emp();
	void Show_Emp();
	void Mod_Emp();
	bool IdExist(int id);
	void Del_Emp();
	int IsExist(int id);
	void Add_Emp();
	void save();
	WorkManager();
	void ExitSystem();
	void Show_Menu();
	~WorkManager();
	
};