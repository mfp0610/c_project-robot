/*
    chat.h
    
    Adapted by pervious version
    Initial version: 2020.10.27
    Lastest update: 2020.10.27
    Author: mfp
*/
#ifndef _CHAT_H_
#define _CHAT_H_

#include "headers.h"

int func_react(HOUSE *house, ROBOT *robot, USER *usr); //互动界面函数
int c_chat1();
void c_reply1(int *qhwh);
void show_incode(char *incode,int *y);
void show_reply(char *reply,int y);

#endif