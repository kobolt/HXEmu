// =============================================================================
// @author  Pontus Rodling <frigolit@frigolit.net>
// @license MIT license - See LICENSE for more information
// @version $Id: fakeslave.h 127 2012-02-15 16:32:01Z frigolit $
// =============================================================================

#ifndef __FAKESLAVE_H__
#define __FAKESLAVE_H__

#include <stdint.h>

#include "virtualserial.h"

class FakeSlave {
	public:
		FakeSlave();
		~FakeSlave();
		
		void reset();
		void step();
		
		VirtualSerial *serial0;
		VirtualSerial *serial1;
		
	private:
		int state;
};

#endif

