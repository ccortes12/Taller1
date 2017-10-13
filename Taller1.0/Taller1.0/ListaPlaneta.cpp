#include "stdafx.h"
#include "ListaPlaneta.h"


ListaPlaneta::ListaPlaneta()
{
}

ListaPlaneta::ListaPlaneta(int s): Lista(new Planeta[s]), largo(s)
{
	
}


ListaPlaneta::~ListaPlaneta()
{
}
