#ifndef __TASK_H__
#define __TASK_H__
#include <iostream>
using namespace std;

typedef void (* taskRunCb)(void * data) ;

class CTask  
{  
protected:  
    string m_strTaskName;  /** ��������� */  
    void* m_ptrData;       /** Ҫִ�е�����ľ������� */ 
	int m_nLen;
	taskRunCb m_ptrTaskCb;

	
	

public:  
    CTask();  
    CTask(string taskName);  
   ~CTask();
    //void setTaskData(void * cbData, int len);
	void dealTask();
	void registerCb(taskRunCb taskCb, void * cbData);
	
      
};  

#endif