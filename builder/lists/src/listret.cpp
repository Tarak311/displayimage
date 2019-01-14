#include<builder/include/builder.h>

imhdlistd* imhdlistd::ll_create(builder& b)
	{
		imhdlistd* idl = new imhdlistd();
		idl->ii.push_back(this->ii.at(1)->process(b).build().imagehandlerd);
		return idl;
	}
