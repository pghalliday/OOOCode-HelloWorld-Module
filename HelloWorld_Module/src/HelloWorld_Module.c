#include "OOOModule.h"
#include "HelloWorld.h"

static OOOModule * pModule = NULL;

OOOModule * init(void) GCCO_SAFE_DS;
OOOModule * init(void)
{
	if (!pModule)
	{
		pModule = OOOConstruct(OOOModule);
		OOOModuleExport(pModule, HelloWorld);
	}
	return pModule;
}

void uninit(void) GCCO_SAFE_DS;
void uninit(void)
{
	if (pModule)
	{
		OOODestroy(pModule);
		pModule = NULL;
	}
}
