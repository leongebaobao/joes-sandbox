#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "y.tab.h"
#include "lex.h"

int main(int argc, char *argv[])
{
        int c;
        // Include path from: gcc -dM -E - < /dev/null
        add_path("/usr/lib/gcc/x86_64-pc-cygwin/7.3.0/include");
        add_path("/usr/include");
        add_path("/usr/include/w32api");
        open_file(argv[1]);
#if 0
        do {
                c = get_tok(0);
                show_tok(c);
        } while(c != tEOF);
        show_macros();
#endif

#if 1
        c = yyparse();
        if (!c)
                printf("parse ok\n");
        else
                printf("yyparse returned %d\n", c);
#endif

        return 0;
}
