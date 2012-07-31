#ifndef _DIGITAL_HPP_
#define _DIGITAL_HPP_

#include "sensor.hpp"

class Digital : public Sensor<bool>
{
public:
	Digital(const unsigned char& port);
	
	virtual bool value() const;
private:
	unsigned char m_port;
};

#endif