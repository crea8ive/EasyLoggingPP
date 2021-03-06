/**
 * This file is part of EasyLogging++ samples
 * Demonstration of PERFORMANCE logging
 *
 * Revision 1.0
 * @author mkhan3189
 */

#include "../easylogging++.h"
#include <unistd.h>

_INITIALIZE_EASYLOGGINGPP

SUB(timeWaster,(int x))
    for (int i = 0; i < x; i++) {
      sleep(1);
    }
END_SUB

int main(void) {
   LINFO << "I will now waste 5 seconds";
   timeWaster(5);
   return 0;
}
