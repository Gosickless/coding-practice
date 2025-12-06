#pragma once
/**
	vector
		1. 引入异常，对于不合法的操作会抛出异常
		2. 使用 std::allocator 来管理内存

	版本 1.0
	作者：Gosickles
 */

#ifndef _VECTOR_H_
#define _VECTOR_H_ 

#include "iterator.h"
#include "algorithm.h"
#include "memory.h"

#include <iostream>
#include <string>
#include <exception>
#include <initializer_list>
namespace mystl {

	template <typename T>
	class vector
	{
	public:
		using value_type = T;
		using pointer = T*;
		using const_pointer = const T*;
		using reference = T&;
		using const_reference = const T&;




	};



}

#endif
