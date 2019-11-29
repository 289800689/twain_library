#ifndef DTWAINJNIGLOBALS_H
#define DTWAINJNIGLOBALS_H

#include <vector>
#include <memory>
#include <unordered_map>
#include <string>
#include <set>
#include "dtwain.h"
#include "DTWAINGlobalFn.h"

#define DECLARE_DTWAIN_SMART_POINTER_MAP(Name) FnGlobal##Name##Ptr g_##Name##Map;

struct DTWAINJNIGlobals
{
	typedef std::multiset<FnGlobalBase*> GlobalSetType;
	GlobalSetType g_ptrBase;
	DECLARE_DTWAIN_SMART_POINTER_MAP(LV)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LS)
	DECLARE_DTWAIN_SMART_POINTER_MAP(SV)
	DECLARE_DTWAIN_SMART_POINTER_MAP(HV)
	DECLARE_DTWAIN_SMART_POINTER_MAP(AV)
	DECLARE_DTWAIN_SMART_POINTER_MAP(HandleV)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSa)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSF)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSl)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSf)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLl)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSaB)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLLa)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSFF)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLFF)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LST)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLTL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLtLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(St)
	DECLARE_DTWAIN_SMART_POINTER_MAP(Lt)
    DECLARE_DTWAIN_SMART_POINTER_MAP(Ot)
    DECLARE_DTWAIN_SMART_POINTER_MAP(LSt)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LTL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLttLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(SHtLLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSFLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LHF)
	DECLARE_DTWAIN_SMART_POINTER_MAP(BH)
    DECLARE_DTWAIN_SMART_POINTER_MAP(LOLLa)
    DECLARE_DTWAIN_SMART_POINTER_MAP(LO)
    DECLARE_DTWAIN_SMART_POINTER_MAP(LOLLA)
    DECLARE_DTWAIN_SMART_POINTER_MAP(LOLLLLL)
    DECLARE_DTWAIN_SMART_POINTER_MAP(LOtLL)

    DECLARE_DTWAIN_SMART_POINTER_MAP(Ltttt)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LTTTT)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLLLa)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLLLLa)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLLA)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLLLA)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSLLLLA)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLt)
	DECLARE_DTWAIN_SMART_POINTER_MAP(HandleS)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSffffl)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSFFFFLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSaLLLLLLl)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSlll)
	DECLARE_DTWAIN_SMART_POINTER_MAP(La)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLa)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLLLa)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLLLA)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LLLLLLL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(HLLTLlL)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSH)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LSlllllll)
	DECLARE_DTWAIN_SMART_POINTER_MAP(LStLLLLLLl)
    DECLARE_DTWAIN_SMART_POINTER_MAP(OV)
    DECLARE_DTWAIN_SMART_POINTER_MAP(HOLTLlL)


	HMODULE g_DTWAINModule;
	typedef std::unordered_map<std::string, int> FunctionCounterMap;
	typedef std::unordered_map<DTWAIN_SOURCE, bool> CurrentAcquireTypeMap;
	FunctionCounterMap g_functionCounter;
	CurrentAcquireTypeMap g_CurrentAcquireMap;
	DTWAINJNIGlobals();
};
#endif