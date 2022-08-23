
//              LtHash Library
//     Copyright (c) Alan Kubiak, 2022.
//
//  This project is under the GPLv3 license.
//           For the LLEC project.
//
//   --------------------------------------
//       Implemented LiteHash algorithm
//   --------------------------------------

#include <string.h>

int lthash(char* c) {
    int d=0;
    for(int i=0,e=2;i<strlen(c);i++,e++) {
        d+=c[i]*e;
        if(e==0x7) {
            e=1;
        }
    }
    return d;
}
