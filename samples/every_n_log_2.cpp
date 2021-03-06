/** 
 * This file is part of EasyLogging++ samples
 * Sample to demonstrate using ***_EVERY_N logs (part 2)
 *
 * Revision 1.0
 * @author mkhan3189
 */

#include "../easylogging++.h"

_INITIALIZE_EASYLOGGINGPP

int main(int argc, char** argv) {

  _START_EASYLOGGINGPP(argc, argv); //register arguments for verbose logs

  int n = 5;

  int n2 = 2;
  
  for (int i = 1; i <= 100; i++) {
     LINFO_EVERY_N(n) << "This will be printed every " << n << " iteration multiple, this is iteration " << i;

     LINFO_EVERY_N(n2) << "iter = " << i;

     LVERBOSE_EVERY_N(n2, 2) << "This is verbose level 2 log for iteration " << i;
  }
 
   return 0;
}
