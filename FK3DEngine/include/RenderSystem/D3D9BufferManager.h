/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	D3D9BufferManager
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	D3D9 缓存管理类 
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	// D3D9 缓存管理类
	class FK_DLL D3D9BufferManager : public BufferManager
	{
	public:
		D3D9BufferManager();
		~D3D9BufferManager();

		//创建顶点缓存
		VertexBuffer* AddVertexBuffer();

		//创建索引缓存
		IndexBuffer* AddIndexBuffer();

		//创建顶点声明
		VertexDeclaration* AddVertexDeclaration();
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
