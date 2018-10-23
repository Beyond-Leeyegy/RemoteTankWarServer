#pragma once
/*
	FILE meta_data.h
	定义数据包封装与解封的基本格式
	size(WORD:2)-tag(BYTE:1)-data

*/
#ifndef  __META_DATA_H__
#define  __META_DATA_H__

#include "def.h"

//BYTE == unsigned char

void PutByte(char *pPacket, BYTE value, int & nPos);
BYTE GetByte(char* pPacket, int& nPos);

void PutWord(char *pPacket, WORD value, int & nPos);
WORD GetWord(char* pPacket, int& nPos);

void PutDword(char *pPacket, DWORD value, int & nPos);
DWORD GetDword(char* pPacket, int& nPos);


void static PutInteger(char *pPacket, int value, int & nPos);
int static GetInteger(char* pPacket, int& nPos);


void PutShort(char *pPacket, short value, int & nPos);
short GetShort(char* pPacket, int &nPos);

void PutString(char *pPacket, char *str, int & nPos);
void GetString(char* pPacket, char *pBuffer, int& nPos);

void PutSize(char *pPacket, WORD nPos);

#endif
