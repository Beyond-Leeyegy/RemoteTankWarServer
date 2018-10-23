/*
	FILE:meta_data.cpp

*/


#include "def.h"
#include "meta_data.h"
#include <cstring>


void PutByte(char *pPacket, BYTE value, int & nPos) {

	*(BYTE *)(pPacket + nPos) = value;
	nPos += sizeof(BYTE);
}

BYTE GetByte(char* pPacket, int& nPos) {
	BYTE value = *(BYTE *)(pPacket + nPos);
	nPos += sizeof(BYTE);
	return value;
}


void PutWord(char *pPacket, WORD value, int & nPos) {
	*(WORD *)(pPacket + nPos) = value;
	nPos += sizeof(WORD);
}

WORD GetWord(char* pPacket, int& nPos) {
	WORD value = *(WORD *)(pPacket + nPos);
	nPos += sizeof(WORD);
	return value;
}

void PutDword(char *pPacket, DWORD value, int & nPos) {
	*(DWORD *)(pPacket + nPos) = value;
	nPos += sizeof(DWORD);
}



DWORD GetDword(char* pPacket, int &nPos) {
	DWORD value = *(DWORD *)(pPacket + nPos);
	nPos += sizeof(DWORD);
	return value;
}


void static PutInteger(char *pPacket, int value, int & nPos) {
	*(int *)(pPacket + nPos) = value;
	nPos += sizeof(int);
}



int  static GetInteger(char* pPacket, int &nPos) {
	int value = *(int*)(pPacket + nPos);
	nPos += sizeof(int);
	return value;
}

void PutShort(char *pPacket, short value, int & nPos) {
	*(short *)(pPacket + nPos) = value;
	nPos += sizeof(short);
}

short GetShort(char* pPacket, int& nPos) {
	short value = *(short*)(pPacket + nPos);
	nPos += sizeof(short);
	return value;
}

void PutString(char *pPacket, char *str, int & nPos) {
	*(WORD*)(pPacket + nPos) = strlen(str);
	nPos += sizeof(WORD);
	memcpy(pPacket + nPos, str, strlen(str));
	nPos += strlen(str);
}

void GetString(char* pPacket, char *pBuffer, int &nPos) {
	WORD length = *(WORD*)(pPacket + nPos);
	nPos += sizeof(WORD);
	memcpy(pBuffer, pPacket + nPos, length);
	*(pBuffer + length) = '\0';
	nPos += length;
}

void PutSize(char *pPacket, WORD nPos) {
	*(WORD *)pPacket = nPos;
}
