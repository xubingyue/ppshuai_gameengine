#ifndef GAME_ENGINE_HEAD_HEAD_FILE
#define GAME_ENGINE_HEAD_HEAD_FILE

//////////////////////////////////////////////////////////////////////////////////
//�����ļ�

//MFC �ļ�
#include <Afxmt.h>
#include <AtlBase.h>
#include <AfxTempl.h>
#include <MMSystem.h>

//D3D �ļ�
#pragma warning(disable : 4819)
#include <DSound.h>
#include <D3D9.h>
#include <D3Dx9.h>

//////////////////////////////////////////////////////////////////////////////////
//��������

//��������
#ifndef GAME_ENGINE_CLASS
	#ifdef  GAME_ENGINE_DLL
		#define GAME_ENGINE_CLASS _declspec(dllexport)
	#else
		#define GAME_ENGINE_CLASS _declspec(dllimport)
	#endif
#endif

//ģ�鶨��
#ifdef _DEBUG
	#ifdef _UNICODE
		#define GAME_ENGINE_DLL_NAME		TEXT("GameEngine_ud.dll")			//�������
	#else
		#define GAME_ENGINE_DLL_NAME		TEXT("GameEngine_d.dll")			//�������
	#endif
#else
	#ifdef _UNICODE
		#define GAME_ENGINE_DLL_NAME		TEXT("GameEngine_u.dll")			//�������
	#else
		#define GAME_ENGINE_DLL_NAME		TEXT("GameEngine.dll")				//�������
	#endif
#endif

//////////////////////////////////////////////////////////////////////////
//�ӿ��ͷ�
#define SafeRelease(pObject) { if (pObject!=NULL) { pObject->Release(); pObject=NULL; } }

//ɾ��ָ��
#define SafeDelete(pData) { try { delete pData; } catch (...) { ASSERT(FALSE); } pData=NULL; } 

//�رվ��
#define SafeCloseHandle(hHandle) { if (hHandle!=NULL) { CloseHandle(hHandle); hHandle=NULL; } }

//ɾ������
#define SafeDeleteArray(pData) { try { delete [] pData; } catch (...) { ASSERT(FALSE); } pData=NULL; } 

//����ά��
#define CountArray(Array) (sizeof(Array)/sizeof(Array[0]))

#define Check_Image(pData)		( (pData != NULL) && (!pData->IsNull()) )
//////////////////////////////////////////////////////////////////////////

//��Դ��Ϣ
struct tagResourceInfo
{
	DWORD							dwSize;								//��Դ��С
	LPVOID							pcbBuffer;							//��Դ�ڴ�
};

#ifndef M_PI
	#define M_PI	3.14159265358979323846f
	#define M_PI_2	1.57079632679489661923f
	#define M_PI_4	0.785398163397448309616f
	#define M_1_PI	0.318309886183790671538f
	#define M_2_PI	0.636619772367581343076f
#endif

//////////////////////////////////////////////////////////////////////////////////
//�����ļ�

#ifndef GAME_ENGINE_DLL

	//D3D ����
	#include "D3DFont.h"
	#include "D3DDirect.h"
	#include "D3DDevice.h"
	#include "D3DSprite.h"
	#include "D3DTexture.h"
	#include "GameFrameView.h"

	//��������
	#include "D3DSound.h"

	//��Ϸ����
	#include "LapseCount.h"
	#include "VirtualEngine.h"
	#include "VirtualWindow.h"
	#include "VirtualButton.h"
	#include "VirtualSlider.h"
	#include "VirtualListBox.h"

	//�¼�����
	#include "MsgEvent.h"

	//��������
	#include "TextureManager.h"

#endif

//////////////////////////////////////////////////////////////////////////////////

#endif