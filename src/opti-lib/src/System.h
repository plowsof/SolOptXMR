#ifndef __SYSTEM_H
#define __SYSTEM_H

#include <Util/Str.hpp>

class System
{
public:
	System();
	virtual ~System();

	int voltage = 12;
    EnjoLib::Str type;
    
    EnjoLib::Str Print() const;
	
protected:

private:

};

#endif // __SYSTEM
