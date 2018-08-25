// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <memory>
#include <mutex>
using namespace std;
/**
 * 
 */
template<typename T>
class EAESIMULATOR_API Singleton
{
public:
	static T *  Instance();

protected:
	Singleton();
	virtual ~Singleton();

private:
	static unique_ptr<T> m_Instance;
	static mutex m_Mutex;
	Singleton(const Singleton<T>& i_other);
	Singleton<T>& operator=(const Singleton<T>& i_other);
};

template<typename T>
unique_ptr<T> Singleton<T>::m_Instance = nullptr;

template<typename T>
mutex Singleton<T>::m_Mutex;

template<typename T>
T* Singleton<T>::Instance()
{
	if (m_Instance.get() == nullptr)
	{
		lock_guard<mutex> lock<m_Mutex>;
		if (m_Instance.get() == nullptr)
		{
			m_Instance = make_unique<T>();
		}
	}

	return m_Instance;
}

template<typename T>
Singleton<T>::Singleton(){}

template<typename T>
Singleton<T>::~Singleton(){}