#include "OOOModule.h"
#include "HelloWorld.h"

static OOOModule * pModule = NULL;

OOOModule * getModule(void) GCCO_SAFE_DS;
OOOModule * getModule(void)
{
	if (!pModule)
	{
		pModule = OOOConstruct(OOOModule);
		OOOModuleExport(pModule, HelloWorld);
	}
	return pModule;
}
