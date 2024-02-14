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
	//记录文件中的人数个数
	int m_EmpNum;
	bool m_FileIsEmpty;
	//员工数组的指针
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