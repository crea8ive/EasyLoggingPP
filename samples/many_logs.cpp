/**
 * This file is part of EasyLogging++ samples
 * Demonstration of how fast can EasyLogging++ log
 * 
 * Revision: 1.0
 * @author mkhan3189
 */

#include "../easylogging++.h"

_INITIALIZE_EASYLOGGINGPP

FUNC(int, main, (void))
  LDEBUG << "This is start of logging!";
  for (int i = 1; i <= 100; i++) {
    LINFO << "This is a test number " << i;
  }
  LINFO << "Now EasyLogging++ is logging DEBUG logs that are stored in logs/myeasylog.log by default";
  for (int i = 1; i <= 10; i++) {
    LDEBUG << "Some more logs [" << i << "]";
  }
  LDEBUG << "This is end of logging!";
END_FUNC(0)
