/*********************************************************************************************
* �ļ���key.h
* ���ߣ�fuyou
* ˵��������������������ͷ�ļ�  
* �޸ģ�
*********************************************************************************************/

#ifndef __KEY_H__
#define __KEY_H__

#include "contiki.h"

PROCESS_NAME(key);

extern process_event_t SysInit_Event;
extern process_event_t key_event;

#endif